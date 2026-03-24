/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1402D5A60
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402D5F60 (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiOutSwapKernelStackPage @ 0x14035C6E0 (MiOutSwapKernelStackPage.c)
 *     MiCreateKernelStackNode @ 0x140535D48 (MiCreateKernelStackNode.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rsi
  int v22; // edi
  unsigned __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rbp
  char v26; // di
  int v27; // r15d
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rsi
  unsigned __int64 v32; // r13
  _BYTE *v33; // r14
  __int64 v34; // r15
  unsigned int v35; // r12d
  unsigned __int64 v36; // rbx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rbp
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 result; // rax
  __int64 v52; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  bool v54; // zf
  struct _LIST_ENTRY *v55; // rdx
  __int64 v56; // rax
  int v57; // r10d
  __int64 v58; // r8
  __int64 v59; // rdx
  int v60; // r9d
  int v61; // r11d
  unsigned int v62; // r11d
  __int64 TransitionPte; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v64; // [rsp+28h] [rbp-A0h]
  int v65; // [rsp+30h] [rbp-98h] BYREF
  __int64 v66; // [rsp+38h] [rbp-90h]
  __int64 v67; // [rsp+40h] [rbp-88h]
  __int64 v68; // [rsp+48h] [rbp-80h]
  unsigned __int64 v69; // [rsp+50h] [rbp-78h]
  __int64 v70; // [rsp+58h] [rbp-70h]
  __int64 AnyMultiplexedVm; // [rsp+60h] [rbp-68h]
  __int64 v72; // [rsp+68h] [rbp-60h]
  __int64 v73; // [rsp+70h] [rbp-58h]
  unsigned __int8 v74; // [rsp+D0h] [rbp+8h]
  int v75; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v77; // [rsp+E8h] [rbp+20h] BYREF

  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v77 = v5;
  v73 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v67 = v73 << 25 >> 16;
  v7 = (_QWORD *)v73;
  v66 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v68 = (unsigned int)((__int64)(v5 - v73) >> 3) + 1;
  v72 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C4E648 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C4E648 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v66;
    v9 = 0x7FFFFFFFF8LL;
    v10 = 0xFFFFF68000000000uLL;
  }
  v70 = v9 & (v8 >> 9);
  v69 = v9 & (v5 >> 9);
  v64 = v70 + v10;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4LL);
  v74 = MiLockWorkingSetShared(AnyMultiplexedVm, v16, v17, v18);
  MiLockPageTableInternal(AnyMultiplexedVm, v64, 0LL);
  if ( v70 != v69 )
    MiLockPageTableInternal(AnyMultiplexedVm, v64 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v52);
  }
  v20 = MiPteInShadowRange(&TransitionPte, v19);
  v21 = v77;
  v22 = v20;
  v75 = v20;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(v7);
    v23 = TransitionPte;
    if ( v22
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (TransitionPte & 1) != 0
      && ((TransitionPte & 0x20) == 0 || (TransitionPte & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
          v23 = TransitionPte | 0x20;
      }
    }
    v24 = (v23 >> 12) & 0xFFFFFFFFFLL;
    v25 = 48 * v24 - 0x58000000000LL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, v7);
    TransitionPte = MiMakeTransitionPte(v24, 31LL);
    v26 = TransitionPte;
    v27 = 0;
    v28 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v7, v29) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_10;
        v54 = (v26 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_10;
        v54 = (v26 & 1) == 0;
      }
      if ( !v54 )
        v28 |= 0x8000000000000000uLL;
    }
LABEL_10:
    *v7 = v28;
    if ( v27 )
      MiWritePteShadow((__int64)v7, v28, v30);
    MiLockAndDecrementShareCount(v25, 0LL);
    v22 = v75;
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v21 );
  v31 = v72;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
  v32 = v66;
  v33 = (_BYTE *)(v73 - 8);
  v34 = v67;
  v35 = v68;
  if ( v73 - 8 >= (unsigned __int64)v66 )
  {
    do
    {
      if ( (*v33 & 1) == 0 )
        break;
      v36 = MI_READ_PTE_LOCK_FREE(v33);
      TransitionPte = v36;
      if ( v75
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v55 )
        {
          if ( ((__int64)*(&v55->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
            v36 |= 0x20uLL;
        }
      }
      v38 = 0xFFFFFFFFFLL;
      v39 = (v36 >> 12) & 0xFFFFFFFFFLL;
      v40 = 0xFFFFFA8000000000uLL;
      v41 = 48 * v39 - 0x58000000000LL;
      v42 = 48 * (*(_QWORD *)(v41 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      LODWORD(v77) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v77, v40, v38, v37);
        while ( *(__int64 *)(v41 + 24) < 0 );
      }
      v43 = MiPteInShadowRange(v33, v40);
      if ( *(_WORD *)(v41 + 32) != 1 )
      {
        v56 = MiMakeTransitionPte(v39, 31LL);
        v57 = 0;
        TransitionPte = v56;
        v58 = v56;
        v59 = v56;
        if ( !v60 )
          goto LABEL_73;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v57 = v61;
          if ( HIBYTE(word_140C4E008) )
          {
LABEL_73:
            *(_QWORD *)v33 = v59;
            if ( v57 )
              MiWritePteShadow((__int64)v33, v59, v58);
            goto LABEL_25;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_73;
        }
        if ( ((unsigned __int8)v58 & (unsigned __int8)v61) != 0 )
          v59 |= 0x8000000000000000uLL;
        goto LABEL_73;
      }
      v44 = 0LL;
      v45 = v31;
      if ( v43 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v44 = v62;
          if ( !HIBYTE(word_140C4E008) )
            goto LABEL_79;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_79:
          if ( ((unsigned __int8)v31 & (unsigned __int8)v62) != 0 )
            v45 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v33 = v45;
      if ( (_DWORD)v44 )
        MiWritePteShadow((__int64)v33, v45, v44);
      *(_QWORD *)(v41 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v41 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
LABEL_25:
      v46 = MiDecrementShareCount(48 * v39 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v46 != 3 )
      {
        v65 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v65, v47, v48, v49);
          while ( *(__int64 *)(v42 + 24) < 0 );
        }
        MiDecrementShareCount(v42);
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v34 -= 4096LL;
      ++v35;
      v33 -= 8;
    }
    while ( (unsigned __int64)v33 >= v32 );
  }
  v50 = AnyMultiplexedVm;
  if ( v70 != v69 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v64 + 8);
  MiUnlockPageTableInternal(v50, v64);
  MiUnlockWorkingSetShared(v50, v74);
  return MiInsertTbFlushEntry(a3, v34, v35, 0LL);
}
