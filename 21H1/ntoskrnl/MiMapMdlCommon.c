/*
 * XREFs of MiMapMdlCommon @ 0x1403C4744
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C4570 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1408C0170 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x1403C2BA0 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiShowBadMapper @ 0x1405276CC (MiShowBadMapper.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // r14
  __int16 v10; // cx
  unsigned __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int8 v16; // di
  ULONG_PTR v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v22; // r11
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  BOOL v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int16 v31; // cx
  unsigned __int64 v33; // rax
  int HasShadow; // eax
  __int64 v35; // r13
  _QWORD *v36; // r15
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // r14
  char v42; // al
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r13
  BOOL v45; // eax
  unsigned __int64 v46; // r12
  BOOL v47; // r13d
  __int64 v48; // rsi
  unsigned __int64 v49; // rbx
  int v50; // r15d
  BOOL v51; // eax
  __int64 v52; // r11
  bool v53; // zf
  unsigned __int64 v54; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  _KPROCESS *v58; // rdx
  __int64 v59; // r8
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r13
  __int64 *v62; // r12
  int v63; // r14d
  unsigned __int64 v64; // rbx
  bool v65; // zf
  unsigned __int64 v66; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v70; // eax
  unsigned __int8 v71; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v72; // [rsp+20h] [rbp-E0h]
  __int64 v73; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+30h] [rbp-D0h]
  _QWORD *v75; // [rsp+38h] [rbp-C8h]
  __int64 v76; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v77; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+50h] [rbp-B0h]
  __int64 *v79; // [rsp+58h] [rbp-A8h]
  __int64 v80; // [rsp+60h] [rbp-A0h]
  __int64 v81; // [rsp+68h] [rbp-98h]
  unsigned __int64 v82; // [rsp+70h] [rbp-90h]
  unsigned __int64 v83; // [rsp+78h] [rbp-88h]
  __int64 v84; // [rsp+80h] [rbp-80h]
  __int64 v85; // [rsp+88h] [rbp-78h]
  _QWORD v86[24]; // [rsp+90h] [rbp-70h] BYREF

  v80 = a1;
  v5 = a2;
  v74 = a3;
  v6 = a3;
  LODWORD(v75) = (_DWORD)a4;
  v7 = *(unsigned int *)(a1 + 44);
  v8 = *(unsigned int *)(a1 + 40);
  v9 = (__int64 *)(a1 + 48);
  v10 = v7 + *(_QWORD *)(a1 + 32);
  v79 = v9;
  v78 = v10 & 0xFFF;
  v11 = (v8 + 4095 + v78) >> 12;
  v77 = v11;
  v84 = 0LL;
  v12 = 0;
  v85 = v7 + ((__int64)(a2 << 25) >> 16);
  v13 = 511LL;
  if ( (a2 & 0xFFF) == 0 && !v6 && (v11 & 0x1FF) == 0 )
    v12 = (*(_DWORD *)v9 & 0x1FFLL) == 0;
LABEL_2:
  v73 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( v6 )
  {
    v16 = MiLockWorkingSetShared(v6);
    v71 = v16;
  }
  else
  {
    v16 = 17;
    v71 = 17;
  }
  while ( 1 )
  {
    if ( v16 != 17 )
    {
      if ( !v15 )
        goto LABEL_33;
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v6, v15, v13);
LABEL_33:
        v15 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v6, v15, 0LL);
      }
    }
    v17 = *v9;
    v18 = (unsigned int)v75;
    if ( (unsigned __int64)*v9 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v19 = 48 * v17 - 0x58000000000LL;
      if ( !*(_WORD *)(v19 + 32) && !dword_140C4E60C )
        MiShowBadMapper(v17);
      if ( (*(_BYTE *)(v19 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v19, a5, v18, a4);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible((char)v75, v19);
      v16 = v71;
      LODWORD(v18) = ProtectionPfnCompatible;
    }
    else if ( a5 )
    {
      if ( a5 == 2 )
        LODWORD(v18) = (unsigned int)v75 | 0x18;
    }
    else
    {
      LODWORD(v18) = (unsigned int)v75 | 8;
    }
    ValidPte = MiMakeValidPte(v5, *v9, (unsigned int)v18 | 0xA0000000, (__int64)a4);
    v22 = 1LL;
    v23 = ValidPte;
    if ( v12 != 1 )
      goto LABEL_12;
    if ( v9 == v79 )
    {
      v14 = ValidPte;
      v73 = ValidPte;
      goto LABEL_18;
    }
    v13 = 0xFFFFFFFFF000LL;
    v33 = v14 ^ (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    v73 = v33;
    v14 = v33;
    if ( v33 != v23 )
    {
      if ( (((unsigned int)v23 | (unsigned int)v33) & 0x1FF000) != 0 )
      {
        v6 = v74;
        if ( v16 != 17 )
        {
          if ( v15 )
            MiUnlockPageTableInternal(v74, v15, 0xFFFFFFFFF000LL);
          MiUnlockWorkingSetShared(v74, v16);
        }
        v12 = 0;
        v77 = (v78 + 4095 + *(unsigned int *)(v80 + 40)) >> 12;
        v5 -= 8 * (((__int64)v9 - v80 - 48) >> 3);
        v9 = v79;
        goto LABEL_2;
      }
      v14 = v33 ^ (v23 ^ v33) & 0xFFFFFFFFF000LL;
      v73 = v14;
LABEL_12:
      if ( v12 )
        goto LABEL_18;
      v24 = v23;
      v25 = MiPteInShadowRange(v5);
      v26 = 0;
      if ( !v25 )
      {
        v22 = 1LL;
        goto LABEL_15;
      }
      HasShadow = MiPteHasShadow();
      v22 = 1LL;
      if ( HasShadow )
      {
        v27 = 1;
        if ( HIBYTE(word_140C4DF48) == (_BYTE)v26 && (v23 & 1) != 0 )
          v24 = v23 | 0x8000000000000000uLL;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v23 & 1) != 0 )
        {
          v24 = v23 | 0x8000000000000000uLL;
        }
        v14 = v73;
LABEL_15:
        v27 = v26;
      }
      *(_QWORD *)v5 = v24;
      if ( v27 )
        MiWritePteShadow(v5, v24);
    }
LABEL_18:
    ++v9;
    v5 += 8LL;
    v77 -= v22;
    if ( !v77 )
      break;
    v16 = v71;
    v6 = v74;
  }
  if ( v71 == 17 )
  {
    v28 = v74;
  }
  else
  {
    if ( v15 )
      MiUnlockPageTableInternal(v74, v15, v13);
    v28 = v74;
    MiUnlockWorkingSetShared(v74, v71);
    LODWORD(v22) = 1;
  }
  if ( v12 == (_DWORD)v22 )
  {
    memset(v86, 0, 0xB8uLL);
    v76 = 0LL;
    v35 = 0LL;
    v75 = 0LL;
    v36 = 0LL;
    v37 = (((v5 - 8 * ((*(unsigned int *)(v80 + 40) + v78 + 4095) >> 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v38 = (*(unsigned int *)(v80 + 40) + v78 + 4095) >> 21;
    v39 = v23 | 0x80;
    v77 = 0LL;
    v81 = v39;
    v40 = 0LL;
    v41 = v37 + 8 * v38;
    v82 = v41;
    if ( v28 )
      v42 = MiLockWorkingSetShared(v28);
    else
      v42 = 17;
    v72 = v42;
    if ( v37 >= v41 )
    {
LABEL_117:
      if ( v72 != 17 )
        MiUnlockWorkingSetShared(v28, v72);
      v66 = ExAcquireSpinLockExclusive(&dword_140C4EB00);
      *v36 = qword_140C4EB10;
      qword_140C4EB10 = v35;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EB00);
      LOWORD(v22) = 1;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v66 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
            v53 = (v70 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v70;
            if ( v53 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              LOWORD(v22) = 1;
            }
          }
        }
      }
      __writecr8(v66);
      goto LABEL_23;
    }
    v43 = v37;
LABEL_66:
    if ( v42 != 17 )
    {
      v40 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v77 = v40;
      MiLockPageTableInternal(v28, v40, 0LL);
    }
    v44 = 512 - ((v37 >> 3) & 0x1FF);
    if ( v44 > (__int64)(v82 - v43) >> 3 )
      v44 = (__int64)(v82 - v43) >> 3;
    v83 = v44;
    v78 = v43 + 8 * v44;
    if ( v43 < v78 )
    {
      v45 = MiPteInShadowRange((unsigned __int64)&v73);
      v46 = v78;
      v47 = v45;
      v48 = v76;
      while ( 1 )
      {
        v75 = v36;
        v49 = ZeroPte;
        v73 = MI_READ_PTE_LOCK_FREE(v37);
        v50 = 0;
        v51 = MiPteInShadowRange(v43);
        v52 = 0LL;
        if ( v51 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v50 = v52 + 1;
            if ( HIBYTE(word_140C4DF48) == (_BYTE)v52 )
            {
              v53 = ((unsigned __int8)ZeroPte & (unsigned __int8)v50) == 0;
              goto LABEL_78;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v53 = (ZeroPte & 1) == 0;
LABEL_78:
            if ( !v53 )
              v49 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v37 = v49;
        if ( v50 )
          MiWritePteShadow(v37, v49);
        v54 = v73;
        if ( v47
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v73 & 1) != 0
          && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v56 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v73 >> 3) & 0x1FF));
            if ( (v56 & 0x20) != 0 )
              v54 = v73 | 0x20;
            if ( (v56 & 0x42) != 0 )
              v54 |= 0x42uLL;
          }
          else
          {
            v54 = v73;
          }
        }
        v57 = (v54 >> 12) & 0xFFFFFFFFFLL;
        v36 = (_QWORD *)(48 * v57 - 0x58000000000LL);
        if ( v75 )
          v36 = v75;
        v37 += 8LL;
        v43 = v37;
        *(_QWORD *)(48 * v57 - 0x58000000000LL) = v48;
        v48 = 48 * v57 - 0x58000000000LL;
        if ( v37 >= v46 )
        {
          v39 = v81;
          v40 = v77;
          v44 = v83;
          v76 = 48 * v57 - 0x58000000000LL;
          v75 = v36;
          goto LABEL_99;
        }
      }
    }
    v52 = 0LL;
LABEL_99:
    WORD2(v86[0]) = 0;
    v86[1] = 20LL;
    LODWORD(v86[0]) = v52;
    v86[2] = v52;
    v86[3] = v52;
    MiInsertTbFlushEntry((__int64)v86, (__int64)((v43 << 25) - v84) >> 16, v44, 0);
    MiFlushTbList((__int64)v86, v58);
    v60 = v44;
    v61 = v78;
    v37 = v43 - 8 * v60;
    v43 = v37;
    if ( v37 >= v78 )
      goto LABEL_113;
    v62 = v79;
    while ( 1 )
    {
      v63 = 0;
      v39 ^= (v39 ^ (*v62 << 12)) & 0xFFFFFFFFF000LL;
      v64 = v39;
      if ( MiPteInShadowRange(v37) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v63 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
            v65 = (v39 & 1) == 0;
            goto LABEL_107;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v65 = (v39 & 1) == 0;
LABEL_107:
          if ( !v65 )
            v64 = v39 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v37 = v64;
      if ( v63 )
        MiWritePteShadow(v37, v64);
      v37 += 8LL;
      v62 += 512;
      v43 = v37;
      if ( v37 >= v61 )
      {
        v36 = v75;
        v79 = v62;
        v40 = v77;
        v81 = v39;
LABEL_113:
        v28 = v74;
        if ( v40 )
          MiUnlockPageTableInternal(v74, v40, v59);
        v42 = v72;
        if ( v37 >= v82 )
        {
          v35 = v76;
          goto LABEL_117;
        }
        goto LABEL_66;
      }
    }
  }
LABEL_23:
  v29 = v80;
  v30 = v85;
  v31 = v22 | *(_WORD *)(v80 + 10);
  *(_QWORD *)(v80 + 24) = v85;
  *(_WORD *)(v29 + 10) = v31;
  if ( (v31 & 0x10) != 0 )
    *(_WORD *)(v29 + 10) = v31 | 0x20;
  return v30;
}
