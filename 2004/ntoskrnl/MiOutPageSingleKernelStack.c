/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1402F5850
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402F237C (MiGetWorkingSetSwapSupport.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiOutSwapKernelStackPage @ 0x14030DC74 (MiOutSwapKernelStackPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCreateKernelStackNode @ 0x140530878 (MiCreateKernelStackNode.c)
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  unsigned __int64 v30; // r13
  _BYTE *v31; // r14
  unsigned __int64 v32; // r15
  unsigned int v33; // r12d
  unsigned __int64 v34; // rbx
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rbp
  BOOL v41; // eax
  __int64 v42; // rcx
  int v43; // r8d
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  char *v49; // rbx
  unsigned __int64 result; // rax
  __int64 v51; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  bool v53; // zf
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r9
  int v58; // r10d
  __int64 v59; // rdx
  unsigned __int8 v60; // r8
  int v61; // r11d
  int v62; // r11d
  __int64 TransitionPte; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v64; // [rsp+28h] [rbp-A0h]
  int v65; // [rsp+30h] [rbp-98h] BYREF
  __int64 v66; // [rsp+38h] [rbp-90h]
  __int64 v67; // [rsp+40h] [rbp-88h]
  __int64 v68; // [rsp+48h] [rbp-80h]
  unsigned __int64 v69; // [rsp+50h] [rbp-78h]
  __int64 v70; // [rsp+58h] [rbp-70h]
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-68h]
  __int64 v72; // [rsp+68h] [rbp-60h]
  __int64 v73; // [rsp+70h] [rbp-58h]
  unsigned __int8 v74; // [rsp+D0h] [rbp+8h]
  BOOL v75; // [rsp+D8h] [rbp+10h]
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
  v15 = *(_QWORD *)(qword_140C4E448 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C4E448 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v66;
    v9 = 0x7FFFFFFFF8LL;
    v10 = 0xFFFFF68000000000uLL;
  }
  v70 = v9 & (v8 >> 9);
  v69 = v9 & (v5 >> 9);
  v64 = v70 + v10;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v74 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v64, 0LL);
  if ( v70 != v69 )
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v64 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v51);
  }
  v16 = MiPteInShadowRange((unsigned __int64)&TransitionPte);
  v17 = v77;
  v18 = v16;
  v75 = v16;
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
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, v7);
    TransitionPte = MiMakeTransitionPte(v20, 31);
    v22 = TransitionPte;
    v23 = 0;
    v24 = TransitionPte;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v26, v25, v27, v28) )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_10;
        v53 = (v22 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_10;
        v53 = (v22 & 1) == 0;
      }
      if ( !v53 )
        v24 |= 0x8000000000000000uLL;
    }
LABEL_10:
    *v7 = v24;
    if ( v23 )
      MiWritePteShadow(v7, v24);
    MiLockAndDecrementShareCount(v21, 0);
    v18 = v75;
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v17 );
  v29 = v72;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
  v30 = v66;
  v31 = (_BYTE *)(v73 - 8);
  v32 = v67;
  v33 = v68;
  if ( v73 - 8 >= (unsigned __int64)v66 )
  {
    do
    {
      if ( (*v31 & 1) == 0 )
        break;
      v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v31);
      TransitionPte = v34;
      if ( v75
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v54 )
        {
          if ( ((__int64)*(&v54->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
            v34 |= 0x20uLL;
        }
      }
      v36 = 0xFFFFFFFFFLL;
      v37 = (v34 >> 12) & 0xFFFFFFFFFLL;
      v38 = 0xFFFFFA8000000000uLL;
      v39 = 48 * v37 - 0x58000000000LL;
      v40 = 48 * (*(_QWORD *)(v39 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      LODWORD(v77) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v77, v38, v36, v35);
        while ( *(__int64 *)(v39 + 24) < 0 );
      }
      v41 = MiPteInShadowRange((unsigned __int64)v31);
      if ( *(_WORD *)(v39 + 32) != 1 )
      {
        v55 = MiMakeTransitionPte(v37, 31);
        v58 = 0;
        TransitionPte = v55;
        v59 = v55;
        if ( !(_DWORD)v57 )
          goto LABEL_73;
        if ( (unsigned int)MiPteHasShadow(v56, v55, v55, v57) )
        {
          v58 = v61;
          if ( HIBYTE(word_140C4DE08) )
          {
LABEL_73:
            *(_QWORD *)v31 = v59;
            if ( v58 )
              MiWritePteShadow(v31, v59);
            goto LABEL_25;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_73;
        }
        if ( (v60 & (unsigned __int8)v61) != 0 )
          v59 |= 0x8000000000000000uLL;
        goto LABEL_73;
      }
      v43 = 0;
      v44 = v29;
      if ( v41 )
      {
        if ( (unsigned int)MiPteHasShadow(v42, v29, 0LL, v41) )
        {
          v43 = v62;
          if ( !HIBYTE(word_140C4DE08) )
            goto LABEL_79;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_79:
          if ( ((unsigned __int8)v29 & (unsigned __int8)v62) != 0 )
            v44 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v31 = v44;
      if ( v43 )
        MiWritePteShadow(v31, v44);
      *(_QWORD *)(v39 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v39 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
LABEL_25:
      v45 = MiDecrementShareCount(48 * v37 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v45 != 3 )
      {
        v65 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v65, v46, v47, v48);
          while ( *(__int64 *)(v40 + 24) < 0 );
        }
        MiDecrementShareCount(v40);
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v32 -= 4096LL;
      ++v33;
      v31 -= 8;
    }
    while ( (unsigned __int64)v31 >= v30 );
  }
  v49 = AnyMultiplexedVm;
  if ( v70 != v69 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v64 + 8);
  MiUnlockPageTableInternal((__int64)v49, v64);
  MiUnlockWorkingSetShared((__int64)v49, v74);
  return MiInsertTbFlushEntry(a3, v32, v33, 0);
}
