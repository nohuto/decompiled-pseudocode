/*
 * XREFs of MiOutPageSingleKernelStack @ 0x140286DB0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402872B0 (MiGetWorkingSetSwapSupport.c)
 *     MiOutSwapKernelStackPage @ 0x1402A1610 (MiOutSwapKernelStackPage.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiCreateKernelStackNode @ 0x140535F88 (MiCreateKernelStackNode.c)
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
  int v16; // eax
  unsigned __int64 v17; // rsi
  int v18; // edi
  unsigned __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rbp
  char v22; // di
  int v23; // r15d
  __int64 v24; // rbx
  __int64 v25; // rsi
  unsigned __int64 v26; // r13
  _BYTE *v27; // r14
  __int64 v28; // r15
  unsigned int v29; // r12d
  unsigned __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rbp
  int v34; // eax
  int v35; // r8d
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 result; // rax
  __int64 v41; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  bool v43; // zf
  struct _LIST_ENTRY *v44; // rdx
  __int64 v45; // rax
  int v46; // r10d
  __int64 v47; // rdx
  int v48; // r9d
  unsigned __int8 v49; // r8
  int v50; // r11d
  int v51; // r11d
  __int64 TransitionPte; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v53; // [rsp+28h] [rbp-A0h]
  int v54; // [rsp+30h] [rbp-98h] BYREF
  __int64 v55; // [rsp+38h] [rbp-90h]
  __int64 v56; // [rsp+40h] [rbp-88h]
  __int64 v57; // [rsp+48h] [rbp-80h]
  unsigned __int64 v58; // [rsp+50h] [rbp-78h]
  __int64 v59; // [rsp+58h] [rbp-70h]
  __int64 AnyMultiplexedVm; // [rsp+60h] [rbp-68h]
  __int64 v61; // [rsp+68h] [rbp-60h]
  __int64 v62; // [rsp+70h] [rbp-58h]
  char v63; // [rsp+D0h] [rbp+8h]
  int v64; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v66; // [rsp+E8h] [rbp+20h] BYREF

  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v66 = v5;
  v62 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = v62 << 25 >> 16;
  v7 = (_QWORD *)v62;
  v55 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57 = (unsigned int)((__int64)(v5 - v62) >> 3) + 1;
  v61 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C4E688 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C4E688 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v55;
    v9 = 0x7FFFFFFFF8LL;
    v10 = 0xFFFFF68000000000uLL;
  }
  v59 = v9 & (v8 >> 9);
  v58 = v9 & (v5 >> 9);
  v53 = v59 + v10;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4LL);
  v63 = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiLockPageTableInternal(AnyMultiplexedVm, v53, 0LL);
  if ( v59 != v58 )
    MiLockPageTableInternal(AnyMultiplexedVm, v53 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v41);
  }
  v16 = MiPteInShadowRange(&TransitionPte);
  v17 = v66;
  v18 = v16;
  v64 = v16;
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
    if ( (unsigned int)MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_10;
        v43 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_10;
        v43 = (v22 & 1) == 0;
      }
      if ( !v43 )
        v24 |= 0x8000000000000000uLL;
    }
LABEL_10:
    *v7 = v24;
    if ( v23 )
      MiWritePteShadow((__int64)v7, v24);
    MiLockAndDecrementShareCount(v21, 0LL);
    v18 = v64;
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v17 );
  v25 = v61;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
  v26 = v55;
  v27 = (_BYTE *)(v62 - 8);
  v28 = v56;
  v29 = v57;
  if ( v62 - 8 >= (unsigned __int64)v55 )
  {
    do
    {
      if ( (*v27 & 1) == 0 )
        break;
      v30 = MI_READ_PTE_LOCK_FREE(v27);
      TransitionPte = v30;
      if ( v64
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v44 )
        {
          if ( ((__int64)*(&v44->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
            v30 |= 0x20uLL;
        }
      }
      v31 = (v30 >> 12) & 0xFFFFFFFFFLL;
      v32 = 48 * v31 - 0x58000000000LL;
      v33 = 48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      LODWORD(v66) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v66);
        while ( *(__int64 *)(v32 + 24) < 0 );
      }
      v34 = MiPteInShadowRange(v27);
      if ( *(_WORD *)(v32 + 32) != 1 )
      {
        v45 = MiMakeTransitionPte(v31, 31LL);
        v46 = 0;
        TransitionPte = v45;
        v47 = v45;
        if ( !v48 )
          goto LABEL_73;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v46 = v50;
          if ( HIBYTE(word_140C4E048) )
          {
LABEL_73:
            *(_QWORD *)v27 = v47;
            if ( v46 )
              MiWritePteShadow((__int64)v27, v47);
            goto LABEL_25;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_73;
        }
        if ( (v49 & (unsigned __int8)v50) != 0 )
          v47 |= 0x8000000000000000uLL;
        goto LABEL_73;
      }
      v35 = 0;
      v36 = v25;
      if ( v34 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v35 = v51;
          if ( !HIBYTE(word_140C4E048) )
            goto LABEL_79;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_79:
          if ( ((unsigned __int8)v25 & (unsigned __int8)v51) != 0 )
            v36 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v27 = v36;
      if ( v35 )
        MiWritePteShadow((__int64)v27, v36);
      *(_QWORD *)(v32 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v32 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
LABEL_25:
      v37 = MiDecrementShareCount(48 * v31 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v37 != 3 )
      {
        v54 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(__int64 *)(v33 + 24) < 0 );
        }
        MiDecrementShareCount(v33);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v28 -= 4096LL;
      ++v29;
      v27 -= 8;
    }
    while ( (unsigned __int64)v27 >= v26 );
  }
  v38 = AnyMultiplexedVm;
  if ( v59 != v58 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v53 + 8);
  MiUnlockPageTableInternal(v38, v53);
  LOBYTE(v39) = v63;
  MiUnlockWorkingSetShared(v38, v39);
  return MiInsertTbFlushEntry(a3, v28, v29, 0LL);
}
