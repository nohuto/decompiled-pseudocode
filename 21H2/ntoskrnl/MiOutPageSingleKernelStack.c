/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1402704A0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiOutSwapKernelStackPage @ 0x140260054 (MiOutSwapKernelStackPage.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402829A8 (MiGetWorkingSetSwapSupport.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiCreateKernelStackNode @ 0x140590B00 (MiCreateKernelStackNode.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 WorkingSetSwapSupport; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  char v19; // di
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  __int64 *v24; // rbx
  __int64 v25; // r15
  unsigned int v26; // r12d
  unsigned __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rbp
  int v30; // eax
  int v31; // r8d
  __int64 v32; // rdx
  int v33; // eax
  char *v34; // rbx
  __int64 v35; // rdx
  __int64 result; // rax
  __int64 v37; // rcx
  bool v38; // zf
  __int64 v39; // rax
  int v40; // r10d
  __int64 v41; // rdx
  int v42; // r9d
  unsigned __int8 v43; // r8
  int v44; // r11d
  int v45; // r11d
  __int64 TransitionPte; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+30h] [rbp-78h]
  unsigned __int64 v49; // [rsp+38h] [rbp-70h]
  __int64 v50; // [rsp+40h] [rbp-68h]
  char *AnyMultiplexedVm; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h]
  __int64 v53; // [rsp+58h] [rbp-50h]
  char v54; // [rsp+B0h] [rbp+8h]
  __int64 v55; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v56; // [rsp+C0h] [rbp+18h]
  __int64 v57; // [rsp+C8h] [rbp+20h] BYREF

  v56 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  TransitionPte = v5;
  v53 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57 = v53 << 25 >> 16;
  v7 = (_QWORD *)v53;
  v55 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = (unsigned int)((__int64)(v5 - v53) >> 3) + 1;
  v52 = MiSwizzleInvalidPte(992LL, v55);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C51F48 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C51F48 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v55;
    v9 = 0x7FFFFFFFF8LL;
    v10 = 0xFFFFF68000000000uLL;
  }
  v50 = v9 & (v8 >> 9);
  v49 = v9 & (v5 >> 9);
  v47 = v50 + v10;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v54 = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiLockPageTableInternal(AnyMultiplexedVm, v47, 0LL);
  if ( v50 != v49 )
    MiLockPageTableInternal(AnyMultiplexedVm, v47 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1160));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1160));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v37);
  }
  v16 = TransitionPte;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(v7);
    v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 12) & 0xFFFFFFFFFFLL;
    v18 = 48 * v17 - 0x220000000000LL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, (__int64)v7);
    TransitionPte = MiMakeTransitionPte(v17, 31LL);
    v19 = TransitionPte;
    v20 = 0;
    v21 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_9;
        v38 = (v19 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_9;
        v38 = (v19 & 1) == 0;
      }
      if ( !v38 )
        v21 |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v7 = v21;
    if ( v20 )
      MiWritePteShadow((__int64)v7, v21);
    MiLockAndDecrementShareCount(v18, 0);
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v16 );
  v22 = v52;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1160));
  v23 = v55;
  v24 = (__int64 *)(v53 - 8);
  v25 = v57;
  v26 = v48;
  while ( 2 )
  {
    if ( (unsigned __int64)v24 >= v23 && (*(_BYTE *)v24 & 1) != 0 )
    {
      TransitionPte = MI_READ_PTE_LOCK_FREE(v24);
      v27 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 12) & 0xFFFFFFFFFFLL;
      v28 = 48 * v27 - 0x220000000000LL;
      v29 = 48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v55) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      v30 = MiPteInShadowRange(v24);
      if ( *(_WORD *)(v28 + 32) == 1 )
      {
        v31 = 0;
        v32 = v22;
        if ( !v30 )
          goto LABEL_21;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v31 = v45;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_60;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_60:
          if ( ((unsigned __int8)v22 & (unsigned __int8)v45) != 0 )
            v32 |= 0x8000000000000000uLL;
        }
LABEL_21:
        *v24 = v32;
        if ( v31 )
          MiWritePteShadow((__int64)v24, v32);
        *(_QWORD *)(v28 + 24) |= 0x4000000000000000uLL;
        MiSetPfnIdentity(48 * v27 - 0x220000000000LL, 0LL);
LABEL_24:
        v33 = MiDecrementShareCount(48 * v27 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v33 != 3 )
        {
          LODWORD(v57) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57);
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          MiDecrementShareCount(v29);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        ++v26;
        v25 -= 4096LL;
        --v24;
        continue;
      }
      v39 = MiMakeTransitionPte(v27, 31LL);
      v40 = 0;
      TransitionPte = v39;
      v41 = v39;
      if ( v42 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v40 = v44;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_54;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_54;
        }
        if ( (v43 & (unsigned __int8)v44) != 0 )
          v41 |= 0x8000000000000000uLL;
      }
LABEL_54:
      *v24 = v41;
      if ( v40 )
        MiWritePteShadow((__int64)v24, v41);
      goto LABEL_24;
    }
    break;
  }
  v34 = AnyMultiplexedVm;
  if ( v50 != v49 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v47 + 8);
  MiUnlockPageTableInternal((__int64)v34, v47);
  LOBYTE(v35) = v54;
  MiUnlockWorkingSetShared(v34, v35);
  return MiInsertTbFlushEntry(v56, v25, v26, 0LL);
}
