/*
 * XREFs of MiOutPageSingleKernelStack @ 0x140351830
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiOutSwapKernelStackPage @ 0x1402CC034 (MiOutSwapKernelStackPage.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402CCB68 (MiGetWorkingSetSwapSupport.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiCreateKernelStackNode @ 0x140530228 (MiCreateKernelStackNode.c)
 */

unsigned __int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
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
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // r8
  __int64 v28; // rsi
  unsigned __int64 v29; // r13
  _BYTE *v30; // r14
  unsigned __int64 v31; // r15
  unsigned int v32; // r12d
  unsigned __int64 v33; // rbx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rbp
  BOOL v40; // eax
  int v41; // r8d
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r9
  char *v46; // rbx
  unsigned __int64 result; // rax
  __int64 v48; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  bool v50; // zf
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  int v53; // r10d
  __int64 v54; // rdx
  int v55; // r9d
  unsigned __int8 v56; // r8
  int v57; // r11d
  int v58; // r11d
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
  unsigned __int8 v70; // [rsp+D0h] [rbp+8h]
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
  v15 = *(_QWORD *)(qword_140C4E588 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C4E588 + 8 * v13), a2);
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
  v70 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v60, 0LL);
  if ( v66 != v65 )
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v60 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v48);
  }
  v16 = MiPteInShadowRange((unsigned __int64)&TransitionPte);
  v17 = v73;
  v18 = v16;
  v71 = v16;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
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
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, (__int64)v7);
    TransitionPte = MiMakeTransitionPte(v20, 31);
    v22 = TransitionPte;
    v23 = 0;
    v24 = TransitionPte;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_10;
        v50 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_10;
        v50 = (v22 & 1) == 0;
      }
      if ( !v50 )
        v24 |= 0x8000000000000000uLL;
    }
LABEL_10:
    *v7 = v24;
    if ( v23 )
      MiWritePteShadow((__int64)v7, v24);
    MiLockAndDecrementShareCount(v21, 0LL, v25, v26);
    v18 = v71;
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v17 );
  v28 = v68;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
  v29 = v62;
  v30 = (_BYTE *)(v69 - 8);
  v31 = v63;
  v32 = v64;
  if ( v69 - 8 >= (unsigned __int64)v62 )
  {
    do
    {
      if ( (*v30 & 1) == 0 )
        break;
      v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v30);
      TransitionPte = v33;
      if ( v71
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v51 )
        {
          if ( ((__int64)*(&v51->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
            v33 |= 0x20uLL;
        }
      }
      v35 = 0xFFFFFFFFFLL;
      v36 = (v33 >> 12) & 0xFFFFFFFFFLL;
      v37 = 0xFFFFFA8000000000uLL;
      v38 = 48 * v36 - 0x58000000000LL;
      v39 = 48 * (*(_QWORD *)(v38 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      LODWORD(v73) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v73, v37, v35, v34);
        while ( *(__int64 *)(v38 + 24) < 0 );
      }
      v40 = MiPteInShadowRange((unsigned __int64)v30);
      if ( *(_WORD *)(v38 + 32) != 1 )
      {
        v52 = MiMakeTransitionPte(v36, 31);
        v53 = 0;
        TransitionPte = v52;
        v54 = v52;
        if ( !v55 )
          goto LABEL_73;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v53 = v57;
          if ( HIBYTE(word_140C4DF48) )
          {
LABEL_73:
            *(_QWORD *)v30 = v54;
            if ( v53 )
              MiWritePteShadow((__int64)v30, v54);
            goto LABEL_25;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_73;
        }
        if ( (v56 & (unsigned __int8)v57) != 0 )
          v54 |= 0x8000000000000000uLL;
        goto LABEL_73;
      }
      v41 = 0;
      v42 = v28;
      if ( v40 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v41 = v58;
          if ( !HIBYTE(word_140C4DF48) )
            goto LABEL_79;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_79:
          if ( ((unsigned __int8)v28 & (unsigned __int8)v58) != 0 )
            v42 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v30 = v42;
      if ( v41 )
        MiWritePteShadow((__int64)v30, v42);
      *(_QWORD *)(v38 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v38 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
LABEL_25:
      v43 = MiDecrementShareCount(48 * v36 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v43 != 3 )
      {
        v61 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v61, v44, v27, v45);
          while ( *(__int64 *)(v39 + 24) < 0 );
        }
        MiDecrementShareCount(v39);
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v31 -= 4096LL;
      ++v32;
      v30 -= 8;
    }
    while ( (unsigned __int64)v30 >= v29 );
  }
  v46 = AnyMultiplexedVm;
  if ( v66 != v65 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v60 + 8, v27);
  MiUnlockPageTableInternal((__int64)v46, v60, v27);
  MiUnlockWorkingSetShared((__int64)v46, v70);
  return MiInsertTbFlushEntry(a3, v31, v32, 0);
}
