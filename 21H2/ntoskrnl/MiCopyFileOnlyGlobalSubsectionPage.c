/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8
 * Callers:
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiHandleInPageError @ 0x1402201C4 (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x14024E3EC (MiFlowThroughInsertNode.c)
 *     MiInitializeTransitionPfn @ 0x14025C1CC (MiInitializeTransitionPfn.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiTryLockLeafPage @ 0x14030E6C8 (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14030FA04 (MiTryLockProtoPoolPageAtDpc.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

__int64 __fastcall MiCopyFileOnlyGlobalSubsectionPage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  volatile LONG *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  __int64 v22; // rcx
  ULONG_PTR v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v34; // [rsp+20h] [rbp-10h] BYREF
  __int64 v35; // [rsp+28h] [rbp-8h]
  int v36; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v37; // [rsp+78h] [rbp+48h]
  __int64 v38; // [rsp+80h] [rbp+50h] BYREF

  v37 = a2;
  v7 = a5;
  v38 = 0LL;
  v34 = 0LL;
  v12 = 48 * a5 - 0x58000000000LL;
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5, (__int64)a2, a3, a4);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v13 & 0x400) != 0 )
  {
    v14 = -1LL;
  }
  else
  {
    if ( qword_140C4DF80 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C4DF80;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(v7, (__int64 *)a3, v14);
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
  *(_WORD *)(v12 + 32) = 1;
  *(_BYTE *)(v12 + 34) |= 0x20u;
  *(_QWORD *)v12 = (a1 + 32) & -(__int64)(a1 != 0);
  *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v35 = *a2;
  v15 = (volatile LONG *)(v35 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v35 + 72));
  ++*(_QWORD *)(v35 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  v16 = v37[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v16) & 0xFFFFFFFFF000LL) != 0 )
    v17 = MiTryLockProtoPoolPageAtDpc((__int64 *)v16, 0xFFFFFFFFF000LL, &v34, &v38);
  else
    v17 = MiTryLockLeafPage((__int64 *)v16, 0xFFFFFFFFF000LL, &v38);
  v21 = v17;
  if ( v17 < 0 )
    goto LABEL_30;
  v22 = v38;
  if ( (*(_BYTE *)(v38 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v34 )
      MiUnlockProtoPoolPage(v34, 2u);
    v22 = v38;
    v21 = -1073740023;
  }
  if ( v21 < 0 )
  {
LABEL_30:
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v36, v18, v19, v20);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiHandleInPageError(v12);
    MiRemoveLockedPageChargeAndDecRef(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return (unsigned int)v21;
  }
  else
  {
    v23 = (v22 + 0x58000000000LL) / 48;
    if ( (a4 & 1) != 0 )
    {
      v24 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *(_BYTE *)v24 == 1 )
      {
        MiAdvanceFaultList(v24);
        *(_DWORD *)(a1 + 192) |= 8u;
      }
    }
    *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
    *(_QWORD *)(a1 + 232) = a3;
    if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
      *(_DWORD *)(a1 + 192) |= 0x80u;
    v25 = a7;
    v26 = v37;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 280) = 4325432;
    *(_QWORD *)(a1 + 304) = 0LL;
    *(_QWORD *)(a1 + 312) = 4096LL;
    *(_QWORD *)(a1 + 320) = v7;
    v27 = MiStartingOffset(v26, a3, *(_DWORD *)(v25 + 64));
    *(_QWORD *)(a1 + 248) = v12;
    v28 = a6;
    *(_QWORD *)(a1 + 96) = v27;
    v29 = v35;
    *(_QWORD *)(a1 + 240) = a3;
    *(_QWORD *)(a1 + 208) = v29;
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_DWORD *)(a1 + 184) = 4096;
    MiObtainProtoReference(v28, 1LL, v30, v31);
    *(_QWORD *)(a1 + 160) = v28;
    MiCopyPage(v7, v23, 0LL, 68);
    if ( v14 != -1 )
      MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x58000000000LL), v32);
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v34 )
      MiUnlockProtoPoolPage(v34, 2u);
    MiUnlockProtoPoolPage(v28, 2u);
    __incgsdword(0x2E98u);
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 4096LL;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
}
