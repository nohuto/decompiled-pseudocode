/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8
 * Callers:
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiInitializeTransitionPfn @ 0x14031CA0C (MiInitializeTransitionPfn.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033AA6C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x14033AC04 (MiTryLockLeafPage.c)
 *     MiHandleInPageError @ 0x140357D0C (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x14035D7CC (MiFlowThroughInsertNode.c)
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
  unsigned __int64 v16; // rcx
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
  __int64 v30; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // [rsp+20h] [rbp-10h] BYREF
  __int64 v36; // [rsp+28h] [rbp-8h]
  int v37; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v38; // [rsp+78h] [rbp+48h]
  __int64 v39; // [rsp+80h] [rbp+50h] BYREF

  v38 = a2;
  v7 = a5;
  v39 = 0LL;
  v35 = 0LL;
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
    if ( qword_140C4DD40 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C4DD40;
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
  v36 = *a2;
  v15 = (volatile LONG *)(v36 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
  ++*(_QWORD *)(v36 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  v16 = v38[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v16) & 0xFFFFFFFFF000LL) != 0 )
    v17 = MiTryLockProtoPoolPageAtDpc(v16, 0xFFFFFFFFF000LL, &v35, (__int64)&v39);
  else
    v17 = MiTryLockLeafPage((__int64 *)v16, 0xFFFFFFFFF000LL, &v39);
  v21 = v17;
  if ( v17 < 0 )
    goto LABEL_30;
  v22 = v39;
  if ( (*(_BYTE *)(v39 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v35 )
    {
      LOBYTE(v18) = 2;
      MiUnlockProtoPoolPage(v35, v18);
    }
    v22 = v39;
    v21 = -1073740023;
  }
  if ( v21 < 0 )
  {
LABEL_30:
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v37, v18, v19, v20);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiHandleInPageError(v12);
    MiRemoveLockedPageChargeAndDecRef(v12, v32, v33, v34);
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
    v26 = v38;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 280) = 4325432;
    *(_QWORD *)(a1 + 304) = 0LL;
    *(_QWORD *)(a1 + 312) = 4096LL;
    *(_QWORD *)(a1 + 320) = v7;
    v27 = MiStartingOffset(v26, a3, *(_DWORD *)(v25 + 64));
    *(_QWORD *)(a1 + 248) = v12;
    v28 = a6;
    *(_QWORD *)(a1 + 96) = v27;
    v29 = v36;
    *(_QWORD *)(a1 + 240) = a3;
    *(_QWORD *)(a1 + 208) = v29;
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_DWORD *)(a1 + 184) = 4096;
    MiObtainProtoReference(v28, 1LL);
    *(_QWORD *)(a1 + 160) = v28;
    MiCopyPage(v7, v23, 0LL, 68);
    if ( v14 != -1 )
      MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x58000000000LL));
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v35 )
    {
      LOBYTE(v30) = 2;
      MiUnlockProtoPoolPage(v35, v30);
    }
    LOBYTE(v30) = 2;
    MiUnlockProtoPoolPage(v28, v30);
    __incgsdword(0x2E98u);
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 4096LL;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
}
