/*
 * XREFs of MiMapMdlCommon @ 0x1403D77D4
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1409680B0 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiAssignInitialPageAttribute @ 0x1403D240C (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rax
  __int64 *v10; // r14
  __int16 v11; // cx
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  BOOL v14; // esi
  __int64 v15; // rbx
  unsigned __int64 v16; // r15
  char v17; // al
  ULONG_PTR v18; // rcx
  int ProtectionPfnCompatible; // r8d
  __int64 v20; // rdi
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int16 v27; // cx
  unsigned __int64 v29; // rax
  char v30; // dl
  _QWORD *v31; // r12
  __int64 v32; // rbx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r15
  unsigned __int8 v38; // r13
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rax
  _QWORD *v41; // r15
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rbx
  int v44; // r12d
  _QWORD *v45; // rax
  unsigned __int64 v46; // r13
  __int64 *v47; // r14
  int v48; // r15d
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  bool v55; // zf
  unsigned __int8 v56; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v57; // [rsp+20h] [rbp-E0h]
  BOOL v58; // [rsp+28h] [rbp-D8h]
  __int64 v59; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v61; // [rsp+30h] [rbp-D0h]
  __int64 v62; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v63; // [rsp+40h] [rbp-C0h]
  __int64 v64; // [rsp+48h] [rbp-B8h]
  __int64 v65; // [rsp+50h] [rbp-B0h]
  __int64 *v66; // [rsp+58h] [rbp-A8h]
  _QWORD *v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  unsigned __int64 v69; // [rsp+70h] [rbp-90h]
  unsigned __int64 v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h]
  __int64 v72; // [rsp+88h] [rbp-78h]
  _QWORD v73[24]; // [rsp+90h] [rbp-70h] BYREF

  v68 = a1;
  v5 = a2;
  v64 = a3;
  v6 = a3;
  v7 = *(unsigned int *)(a1 + 44);
  v8 = a4;
  v9 = *(unsigned int *)(a1 + 40);
  v10 = (__int64 *)(a1 + 48);
  v11 = v7 + *(_QWORD *)(a1 + 32);
  v66 = v10;
  v65 = v11 & 0xFFF;
  v12 = (unsigned __int64)(v9 + 4095 + v65) >> 12;
  v63 = v12;
  v13 = 511LL;
  v71 = 0LL;
  v58 = 0;
  v72 = v7 + ((__int64)(a2 << 25) >> 16);
  v14 = 0;
  if ( (a2 & 0xFFF) == 0 && !v6 && (v12 & 0x1FF) == 0 )
  {
    v14 = (*(_DWORD *)v10 & 0x1FFLL) == 0;
LABEL_29:
    v58 = v14;
  }
  v62 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( v6 )
    v17 = MiLockWorkingSetShared(v6);
  else
    v17 = 17;
  v56 = v17;
  while ( 1 )
  {
    if ( v17 != 17 )
    {
      if ( !v16 )
        goto LABEL_34;
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v6, v16);
LABEL_34:
        v16 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v6, v16, 0LL, v13);
      }
    }
    v18 = *v10;
    ProtectionPfnCompatible = v8;
    if ( *v10 <= (unsigned __int64)qword_140C50840
      && (*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v20 = 48 * v18 - 0x220000000000LL;
      if ( !*(_WORD *)(v20 + 32) && !dword_140C529CC )
        MiShowBadMapper(v18, 2uLL);
      if ( (*(_BYTE *)(v20 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v20, a5);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a4, v20);
    }
    else if ( a5 )
    {
      if ( a5 == 2 )
        ProtectionPfnCompatible = v8 | 0x18;
    }
    else
    {
      ProtectionPfnCompatible = v8 | 8;
    }
    ValidPte = MiMakeValidPte(v5, *v10, ProtectionPfnCompatible | 0xA0000000);
    v22 = ValidPte;
    if ( v14 )
    {
      if ( v10 == v66 )
      {
        v15 = ValidPte;
      }
      else
      {
        v29 = v15 ^ (v15 ^ ((v15 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
        v62 = v29;
        v15 = v29;
        if ( v29 == v22 )
          goto LABEL_17;
        if ( (((unsigned int)v22 | (unsigned int)v29) & 0x1FF000) != 0 )
        {
          if ( v56 != 17 )
          {
            if ( v16 )
              MiUnlockPageTableInternal(v6, v16);
            MiUnlockWorkingSetShared(v6, v56);
          }
          v14 = 0;
          v8 = a4;
          v63 = (v65 + 4095 + (unsigned __int64)*(unsigned int *)(v68 + 40)) >> 12;
          v5 -= 8 * (((__int64)v10 - v68 - 48) >> 3);
          v10 = v66;
          goto LABEL_29;
        }
        v15 = v29 ^ (v22 ^ v29) & 0xFFFFFFFFFF000LL;
      }
      v62 = v15;
    }
    else
    {
      v23 = ValidPte;
      v24 = 0;
      if ( MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v24 = 1;
          if ( HIBYTE(word_140C51864) == v30 && (v22 & 1) != 0 )
            v23 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v22 & 1) != 0 )
          {
            v23 |= 0x8000000000000000uLL;
          }
          v15 = v62;
        }
      }
      *(_QWORD *)v5 = v23;
      if ( v24 )
        MiWritePteShadow(v5, v23);
      v6 = v64;
      v14 = v58;
    }
LABEL_17:
    ++v10;
    v5 += 8LL;
    if ( !--v63 )
      break;
    v17 = v56;
    v8 = a4;
  }
  if ( v56 != 17 )
  {
    if ( v16 )
      MiUnlockPageTableInternal(v6, v16);
    MiUnlockWorkingSetShared(v6, v56);
  }
  if ( v14 )
  {
    memset(v73, 0, 0xB8uLL);
    v59 = 0LL;
    v31 = 0LL;
    v67 = 0LL;
    v32 = v64;
    v33 = (((v5 - 8 * (((unsigned __int64)*(unsigned int *)(v68 + 40) + v65 + 4095) >> 12)) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    v34 = ((unsigned __int64)*(unsigned int *)(v68 + 40) + v65 + 4095) >> 21;
    v35 = v22 | 0x80;
    v65 = v35;
    v36 = 0LL;
    v61 = 0LL;
    v37 = v33 + 8 * v34;
    v69 = v37;
    if ( v64 )
      v38 = MiLockWorkingSetShared(v64);
    else
      v38 = 17;
    v57 = v38;
    if ( v33 >= v37 )
      goto LABEL_100;
    while ( 1 )
    {
      if ( v38 != 17 )
      {
        v36 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v61 = v36;
        MiLockPageTableInternal(v32, v36, 0LL, 0x7FFFFFFFF8LL);
      }
      v39 = 512 - ((v33 >> 3) & 0x1FF);
      if ( v39 > (__int64)(v69 - v33) >> 3 )
        v39 = (__int64)(v69 - v33) >> 3;
      v70 = v39;
      v40 = v33 + 8 * v39;
      v63 = v40;
      if ( v33 < v40 )
      {
        v41 = (_QWORD *)v59;
        v42 = v40;
        while ( 1 )
        {
          v67 = v31;
          v43 = ZeroPte;
          v62 = MI_READ_PTE_LOCK_FREE(v33);
          v44 = 0;
          if ( MiPteInShadowRange(v33) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( !HIBYTE(word_140C51864) )
                goto LABEL_76;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_76:
              if ( (ZeroPte & 1) != 0 )
                v43 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v33 = v43;
          if ( v44 )
            MiWritePteShadow(v33, v43);
          v31 = (_QWORD *)(48
                         * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62) >> 12) & 0xFFFFFFFFFFLL)
                         - 0x220000000000LL);
          v45 = v31;
          if ( v67 )
            v31 = v67;
          v33 += 8LL;
          *v45 = v41;
          v41 = v45;
          if ( v33 >= v42 )
          {
            v35 = v65;
            v36 = v61;
            v39 = v70;
            v38 = v57;
            v59 = (__int64)v45;
            v67 = v31;
            break;
          }
        }
      }
      v73[1] = 20LL;
      LODWORD(v73[0]) = 0;
      WORD2(v73[0]) = 0;
      v73[2] = 0LL;
      v73[3] = 0LL;
      MiInsertTbFlushEntry((__int64)v73, (__int64)((v33 << 25) - v71) >> 16, v39, 0);
      MiFlushTbList((__int64)v73);
      v33 -= 8 * v39;
      if ( v33 >= v63 )
        goto LABEL_97;
      v46 = v63;
      v47 = v66;
      do
      {
        v48 = 0;
        v35 ^= (v35 ^ (*v47 << 12)) & 0xFFFFFFFFFF000LL;
        v49 = v35;
        if ( !MiPteInShadowRange(v33) )
          goto LABEL_93;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v48 = 1;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_93;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_93;
        }
        if ( (v35 & 1) != 0 )
          v49 = v35 | 0x8000000000000000uLL;
LABEL_93:
        *(_QWORD *)v33 = v49;
        if ( v48 )
          MiWritePteShadow(v33, v49);
        v47 += 512;
        v33 += 8LL;
      }
      while ( v33 < v46 );
      v31 = v67;
      v38 = v57;
      v66 = v47;
      v36 = v61;
      v65 = v35;
LABEL_97:
      v32 = v64;
      if ( v36 )
        MiUnlockPageTableInternal(v64, v36);
      if ( v33 >= v69 )
      {
LABEL_100:
        if ( v38 != 17 )
          MiUnlockWorkingSetShared(v32, v38);
        v50 = ExAcquireSpinLockExclusive(&dword_140C53050);
        *v31 = qword_140C53060;
        qword_140C53060 = v59;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53050);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v50 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
              v55 = (v54 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v54;
              if ( v55 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v50);
        break;
      }
    }
  }
  v25 = v68;
  v26 = v72;
  v27 = *(_WORD *)(v68 + 10) | 1;
  *(_QWORD *)(v68 + 24) = v72;
  *(_WORD *)(v25 + 10) = v27;
  if ( (v27 & 0x10) != 0 )
    *(_WORD *)(v25 + 10) = v27 | 0x20;
  return v26;
}
