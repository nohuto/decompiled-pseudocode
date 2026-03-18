/*
 * XREFs of MiMapMdlCommon @ 0x1403C80A4
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C7ED0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1408C7300 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiAssignInitialPageAttribute @ 0x1403C61D0 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiShowBadMapper @ 0x14052B6EC (MiShowBadMapper.c)
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
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  unsigned __int8 v15; // di
  ULONG_PTR v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v21; // r11
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  BOOL v24; // eax
  __int64 v25; // r8
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
  __int64 v52; // r8
  __int64 v53; // r11
  bool v54; // zf
  unsigned __int64 v55; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  _KPROCESS *v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r13
  __int64 *v62; // r12
  int v63; // r14d
  unsigned __int64 v64; // rbx
  __int64 v65; // r8
  bool v66; // zf
  unsigned __int64 v67; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v71; // eax
  unsigned __int8 v72; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v73; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v75; // [rsp+30h] [rbp-D0h]
  _QWORD *v76; // [rsp+38h] [rbp-C8h]
  __int64 v77; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+50h] [rbp-B0h]
  __int64 *v80; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+60h] [rbp-A0h]
  __int64 v82; // [rsp+68h] [rbp-98h]
  unsigned __int64 v83; // [rsp+70h] [rbp-90h]
  unsigned __int64 v84; // [rsp+78h] [rbp-88h]
  __int64 v85; // [rsp+80h] [rbp-80h]
  __int64 v86; // [rsp+88h] [rbp-78h]
  _QWORD v87[24]; // [rsp+90h] [rbp-70h] BYREF

  v81 = a1;
  v5 = a2;
  v75 = a3;
  v6 = a3;
  LODWORD(v76) = (_DWORD)a4;
  v7 = *(unsigned int *)(a1 + 44);
  v8 = *(unsigned int *)(a1 + 40);
  v9 = (__int64 *)(a1 + 48);
  v10 = v7 + *(_QWORD *)(a1 + 32);
  v80 = v9;
  v79 = v10 & 0xFFF;
  v11 = (v8 + 4095 + v79) >> 12;
  v78 = v11;
  v85 = 0LL;
  v12 = 0;
  v86 = v7 + ((__int64)(a2 << 25) >> 16);
  if ( (a2 & 0xFFF) == 0 && !v6 && (v11 & 0x1FF) == 0 )
    v12 = (*(_DWORD *)v9 & 0x1FFLL) == 0;
LABEL_2:
  v74 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( v6 )
  {
    v15 = MiLockWorkingSetShared(v6);
    v72 = v15;
  }
  else
  {
    v15 = 17;
    v72 = 17;
  }
  while ( 1 )
  {
    if ( v15 != 17 )
    {
      if ( !v14 )
        goto LABEL_33;
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v6, v14);
LABEL_33:
        v14 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v6, v14, 0LL);
      }
    }
    v16 = *v9;
    v17 = (unsigned int)v76;
    if ( (unsigned __int64)*v9 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v18 = 48 * v16 - 0x58000000000LL;
      if ( !*(_WORD *)(v18 + 32) && !dword_140C4E54C )
        MiShowBadMapper(v16);
      if ( (*(_BYTE *)(v18 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v18, a5, v17, a4);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible((char)v76, v18);
      v15 = v72;
      LODWORD(v17) = ProtectionPfnCompatible;
    }
    else if ( a5 )
    {
      if ( a5 == 2 )
        LODWORD(v17) = (unsigned int)v76 | 0x18;
    }
    else
    {
      LODWORD(v17) = (unsigned int)v76 | 8;
    }
    ValidPte = MiMakeValidPte(v5, *v9, (unsigned int)v17 | 0xA0000000, (__int64)a4);
    v21 = 1LL;
    v22 = ValidPte;
    if ( v12 != 1 )
      goto LABEL_12;
    if ( v9 == v80 )
    {
      v13 = ValidPte;
      v74 = ValidPte;
      goto LABEL_18;
    }
    v33 = v13 ^ (v13 ^ ((v13 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    v74 = v33;
    v13 = v33;
    if ( v33 != v22 )
    {
      if ( (((unsigned int)v22 | (unsigned int)v33) & 0x1FF000) != 0 )
      {
        v6 = v75;
        if ( v15 != 17 )
        {
          if ( v14 )
            MiUnlockPageTableInternal(v75, v14);
          MiUnlockWorkingSetShared(v75, v15);
        }
        v12 = 0;
        v78 = (v79 + 4095 + *(unsigned int *)(v81 + 40)) >> 12;
        v5 -= 8 * (((__int64)v9 - v81 - 48) >> 3);
        v9 = v80;
        goto LABEL_2;
      }
      v13 = v33 ^ (v22 ^ v33) & 0xFFFFFFFFF000LL;
      v74 = v13;
LABEL_12:
      if ( v12 )
        goto LABEL_18;
      v23 = v22;
      v24 = MiPteInShadowRange(v5);
      v26 = 0;
      if ( !v24 )
      {
        v21 = 1LL;
        goto LABEL_15;
      }
      HasShadow = MiPteHasShadow();
      v21 = 1LL;
      if ( HasShadow )
      {
        v27 = 1;
        if ( HIBYTE(word_140C4DE88) == (_BYTE)v26 && (v22 & 1) != 0 )
          v23 = v22 | 0x8000000000000000uLL;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v22 & 1) != 0 )
        {
          v23 = v22 | 0x8000000000000000uLL;
        }
        v13 = v74;
LABEL_15:
        v27 = v26;
      }
      *(_QWORD *)v5 = v23;
      if ( v27 )
        MiWritePteShadow(v5, v23, v25);
    }
LABEL_18:
    ++v9;
    v5 += 8LL;
    v78 -= v21;
    if ( !v78 )
      break;
    v15 = v72;
    v6 = v75;
  }
  if ( v72 == 17 )
  {
    v28 = v75;
  }
  else
  {
    if ( v14 )
      MiUnlockPageTableInternal(v75, v14);
    v28 = v75;
    MiUnlockWorkingSetShared(v75, v72);
    LODWORD(v21) = 1;
  }
  if ( v12 == (_DWORD)v21 )
  {
    memset(v87, 0, 0xB8uLL);
    v77 = 0LL;
    v35 = 0LL;
    v76 = 0LL;
    v36 = 0LL;
    v37 = (((v5 - 8 * ((*(unsigned int *)(v81 + 40) + v79 + 4095) >> 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v38 = (*(unsigned int *)(v81 + 40) + v79 + 4095) >> 21;
    v39 = v22 | 0x80;
    v78 = 0LL;
    v82 = v39;
    v40 = 0LL;
    v41 = v37 + 8 * v38;
    v83 = v41;
    if ( v28 )
      v42 = MiLockWorkingSetShared(v28);
    else
      v42 = 17;
    v73 = v42;
    if ( v37 >= v41 )
    {
LABEL_117:
      if ( v73 != 17 )
        MiUnlockWorkingSetShared(v28, v73);
      v67 = ExAcquireSpinLockExclusive(&dword_140C4EA40);
      *v36 = qword_140C4EA50;
      qword_140C4EA50 = v35;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EA40);
      LOWORD(v21) = 1;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v67 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v67 + 1));
            v54 = (v71 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v71;
            if ( v54 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              LOWORD(v21) = 1;
            }
          }
        }
      }
      __writecr8(v67);
      goto LABEL_23;
    }
    v43 = v37;
LABEL_66:
    if ( v42 != 17 )
    {
      v40 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v78 = v40;
      MiLockPageTableInternal(v28, v40, 0LL);
    }
    v44 = 512 - ((v37 >> 3) & 0x1FF);
    if ( v44 > (__int64)(v83 - v43) >> 3 )
      v44 = (__int64)(v83 - v43) >> 3;
    v84 = v44;
    v79 = v43 + 8 * v44;
    if ( v43 < v79 )
    {
      v45 = MiPteInShadowRange((unsigned __int64)&v74);
      v46 = v79;
      v47 = v45;
      v48 = v77;
      while ( 1 )
      {
        v76 = v36;
        v49 = ZeroPte;
        v74 = MI_READ_PTE_LOCK_FREE(v37);
        v50 = 0;
        v51 = MiPteInShadowRange(v43);
        v53 = 0LL;
        if ( v51 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v50 = v53 + 1;
            if ( HIBYTE(word_140C4DE88) == (_BYTE)v53 )
            {
              v54 = ((unsigned __int8)ZeroPte & (unsigned __int8)v50) == 0;
              goto LABEL_78;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v54 = (ZeroPte & 1) == 0;
LABEL_78:
            if ( !v54 )
              v49 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v37 = v49;
        if ( v50 )
          MiWritePteShadow(v37, v49, v52);
        v55 = v74;
        if ( v47
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v74 & 1) != 0
          && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v57 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v74 >> 3) & 0x1FF));
            if ( (v57 & 0x20) != 0 )
              v55 = v74 | 0x20;
            if ( (v57 & 0x42) != 0 )
              v55 |= 0x42uLL;
          }
          else
          {
            v55 = v74;
          }
        }
        v58 = (v55 >> 12) & 0xFFFFFFFFFLL;
        v36 = (_QWORD *)(48 * v58 - 0x58000000000LL);
        if ( v76 )
          v36 = v76;
        v37 += 8LL;
        v43 = v37;
        *(_QWORD *)(48 * v58 - 0x58000000000LL) = v48;
        v48 = 48 * v58 - 0x58000000000LL;
        if ( v37 >= v46 )
        {
          v39 = v82;
          v40 = v78;
          v44 = v84;
          v77 = 48 * v58 - 0x58000000000LL;
          v76 = v36;
          goto LABEL_99;
        }
      }
    }
    v53 = 0LL;
LABEL_99:
    WORD2(v87[0]) = 0;
    v87[1] = 20LL;
    LODWORD(v87[0]) = v53;
    v87[2] = v53;
    v87[3] = v53;
    MiInsertTbFlushEntry((__int64)v87, (__int64)((v43 << 25) - v85) >> 16, v44, 0);
    MiFlushTbList((unsigned int *)v87, v59);
    v60 = v44;
    v61 = v79;
    v37 = v43 - 8 * v60;
    v43 = v37;
    if ( v37 >= v79 )
      goto LABEL_113;
    v62 = v80;
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
          if ( !HIBYTE(word_140C4DE88) )
          {
            v66 = (v39 & 1) == 0;
            goto LABEL_107;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v66 = (v39 & 1) == 0;
LABEL_107:
          if ( !v66 )
            v64 = v39 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v37 = v64;
      if ( v63 )
        MiWritePteShadow(v37, v64, v65);
      v37 += 8LL;
      v62 += 512;
      v43 = v37;
      if ( v37 >= v61 )
      {
        v36 = v76;
        v80 = v62;
        v40 = v78;
        v82 = v39;
LABEL_113:
        v28 = v75;
        if ( v40 )
          MiUnlockPageTableInternal(v75, v40);
        v42 = v73;
        if ( v37 >= v83 )
        {
          v35 = v77;
          goto LABEL_117;
        }
        goto LABEL_66;
      }
    }
  }
LABEL_23:
  v29 = v81;
  v30 = v86;
  v31 = v21 | *(_WORD *)(v81 + 10);
  *(_QWORD *)(v81 + 24) = v86;
  *(_WORD *)(v29 + 10) = v31;
  if ( (v31 & 0x10) != 0 )
    *(_WORD *)(v29 + 10) = v31 | 0x20;
  return v30;
}
