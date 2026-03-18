/*
 * XREFs of MiOutPageSingleKernelStack @ 0x140250980
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiGetWorkingSetSwapSupport @ 0x140250E80 (MiGetWorkingSetSwapSupport.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiOutSwapKernelStackPage @ 0x140339404 (MiOutSwapKernelStackPage.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiCreateKernelStackNode @ 0x140534248 (MiCreateKernelStackNode.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 WorkingSetSwapSupport; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r13
  BOOL v16; // eax
  unsigned __int64 v17; // rsi
  BOOL v18; // edi
  unsigned __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rbp
  char v22; // di
  int v23; // r15d
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  unsigned __int64 v30; // r13
  _BYTE *v31; // r14
  __int64 v32; // r15
  unsigned int v33; // r12d
  unsigned __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rbp
  BOOL v38; // eax
  __int64 v39; // rcx
  _BOOL8 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  char *v47; // rbx
  __int64 v48; // rdx
  __int64 result; // rax
  __int64 v50; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  bool v52; // zf
  struct _LIST_ENTRY *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // r10d
  int v57; // r11d
  unsigned int v58; // r11d
  __int64 TransitionPte; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v60; // [rsp+28h] [rbp-A0h]
  int v61; // [rsp+30h] [rbp-98h] BYREF
  __int64 v62; // [rsp+38h] [rbp-90h]
  __int64 v63; // [rsp+40h] [rbp-88h]
  __int64 v64; // [rsp+48h] [rbp-80h]
  unsigned __int64 v65; // [rsp+50h] [rbp-78h]
  __int64 v66; // [rsp+58h] [rbp-70h]
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-68h]
  __int64 v68; // [rsp+68h] [rbp-60h]
  __int64 v69; // [rsp+70h] [rbp-58h]
  char v70; // [rsp+D0h] [rbp+8h]
  BOOL v71; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v73; // [rsp+E8h] [rbp+20h] BYREF

  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v73 = v5;
  v69 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63 = v69 << 25 >> 16;
  v7 = (_QWORD *)v69;
  v62 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64 = (unsigned int)((__int64)(v5 - v69) >> 3) + 1;
  v68 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C4E4C8 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C4E4C8 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v62;
    v9 = 0x7FFFFFFFF8LL;
    v10 = 0xFFFFF68000000000uLL;
  }
  v66 = v9 & (v8 >> 9);
  v65 = v9 & (v5 >> 9);
  v60 = v66 + v10;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v70 = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiLockPageTableInternal(AnyMultiplexedVm, v60, 0LL);
  if ( v66 != v65 )
    MiLockPageTableInternal(AnyMultiplexedVm, v60 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v50);
  }
  v16 = MiPteInShadowRange((unsigned __int64)&TransitionPte);
  v17 = v73;
  v18 = v16;
  v71 = v16;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(v7);
    v19 = TransitionPte;
    if ( v18
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (TransitionPte & 1) != 0
      && ((TransitionPte & 0x20) == 0 || (TransitionPte & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
          v19 = TransitionPte | 0x20;
      }
    }
    v20 = (v19 >> 12) & 0xFFFFFFFFFLL;
    v21 = 48 * v20 - 0x58000000000LL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, v7);
    TransitionPte = MiMakeTransitionPte(v20, 31LL);
    v22 = TransitionPte;
    v23 = 0;
    v24 = TransitionPte;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v26, v25, v27, v28) )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4DE88) )
          goto LABEL_10;
        v52 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_10;
        v52 = (v22 & 1) == 0;
      }
      if ( !v52 )
        v24 |= 0x8000000000000000uLL;
    }
LABEL_10:
    *v7 = v24;
    if ( v23 )
      MiWritePteShadow(v7, v24);
    MiLockAndDecrementShareCount(v21, 0LL);
    v18 = v71;
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v17 );
  v29 = v68;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
  v30 = v62;
  v31 = (_BYTE *)(v69 - 8);
  v32 = v63;
  v33 = v64;
  if ( v69 - 8 >= (unsigned __int64)v62 )
  {
    do
    {
      if ( (*v31 & 1) == 0 )
        break;
      v34 = MI_READ_PTE_LOCK_FREE(v31);
      TransitionPte = v34;
      if ( v71
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v53 )
        {
          if ( ((__int64)*(&v53->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
            v34 |= 0x20uLL;
        }
      }
      v35 = (v34 >> 12) & 0xFFFFFFFFFLL;
      v36 = 48 * v35 - 0x58000000000LL;
      v37 = 48 * (*(_QWORD *)(v36 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      LODWORD(v73) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v73);
        while ( *(__int64 *)(v36 + 24) < 0 );
      }
      v38 = MiPteInShadowRange((unsigned __int64)v31);
      v40 = v38;
      if ( *(_WORD *)(v36 + 32) != 1 )
      {
        v54 = MiMakeTransitionPte(v35, 31LL);
        v56 = 0;
        TransitionPte = v54;
        v41 = v54;
        v42 = v54;
        if ( !v40 )
          goto LABEL_73;
        if ( (unsigned int)MiPteHasShadow(v55, v54, v54, v40) )
        {
          v56 = v57;
          if ( HIBYTE(word_140C4DE88) )
          {
LABEL_73:
            *(_QWORD *)v31 = v42;
            if ( v56 )
              MiWritePteShadow(v31, v42);
            goto LABEL_25;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_73;
        }
        if ( ((unsigned __int8)v41 & (unsigned __int8)v57) != 0 )
          v42 |= 0x8000000000000000uLL;
        goto LABEL_73;
      }
      v41 = 0LL;
      v42 = v29;
      if ( v38 )
      {
        if ( (unsigned int)MiPteHasShadow(v39, v29, 0LL, v38) )
        {
          v41 = v58;
          if ( !HIBYTE(word_140C4DE88) )
            goto LABEL_79;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_79:
          if ( ((unsigned __int8)v29 & (unsigned __int8)v58) != 0 )
            v42 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v31 = v42;
      if ( (_DWORD)v41 )
        MiWritePteShadow(v31, v42);
      *(_QWORD *)(v36 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v36 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
LABEL_25:
      v43 = MiDecrementShareCount(48 * v35 - 0x58000000000LL, v42, v41, v40, TransitionPte);
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v43 != 3 )
      {
        v61 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v61);
          while ( *(__int64 *)(v37 + 24) < 0 );
        }
        MiDecrementShareCount(v37, v44, v45, v46, TransitionPte);
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v32 -= 4096LL;
      ++v33;
      v31 -= 8;
    }
    while ( (unsigned __int64)v31 >= v30 );
  }
  v47 = AnyMultiplexedVm;
  if ( v66 != v65 )
    MiUnlockPageTableInternal(AnyMultiplexedVm);
  MiUnlockPageTableInternal(v47);
  LOBYTE(v48) = v70;
  MiUnlockWorkingSetShared(v47, v48);
  return MiInsertTbFlushEntry(a3, v32, v33, 0LL);
}
