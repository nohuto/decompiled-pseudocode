/*
 * XREFs of MiCopyImageExtentContents @ 0x140540374
 * Callers:
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiFlowThroughInsertNode @ 0x14024E3EC (MiFlowThroughInsertNode.c)
 *     MiInitializeTransitionPfn @ 0x14025C1CC (MiInitializeTransitionPfn.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiEndingOffsetWithLock @ 0x1403274E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiFillPageWithImageExtentContents @ 0x140540D94 (MiFillPageWithImageExtentContents.c)
 */

LONG __fastcall MiCopyImageExtentContents(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // r15
  _QWORD *v16; // rbp
  unsigned int v17; // r8d
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v23; // [rsp+70h] [rbp+8h]

  v7 = a5;
  v12 = 48 * a5 - 0x58000000000LL;
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5, (__int64)a2, (__int64)a3, a4);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
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
  MiInitializeTransitionPfn(v7, a3, v14);
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
  *(_WORD *)(v12 + 32) = 1;
  *(_BYTE *)(v12 + 34) |= 0x20u;
  *(_QWORD *)v12 = (a1 + 32) & -(__int64)(a1 != 0);
  *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = *a2;
  v23 = *a2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*a2 + 72));
  ++*(_QWORD *)(v15 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  if ( (a4 & 1) != 0 )
  {
    v16 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v16 == 1 )
    {
      MiAdvanceFaultList(v16);
      *(_DWORD *)(a1 + 192) |= 8u;
    }
  }
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  *(_QWORD *)(a1 + 232) = a3;
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x80u;
  if ( a7 )
    v17 = *(_DWORD *)(a7 + 64);
  else
    v17 = -1;
  v18 = MiStartingOffset(a2, (unsigned __int64)a3, v17);
  MiEndingOffsetWithLock(a2);
  *(_QWORD *)(a1 + 240) = a3;
  *(_QWORD *)(a1 + 248) = v12;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v23;
  *(_QWORD *)(a1 + 96) = v18;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = v7;
  *(_QWORD *)(a1 + 88) = 4096LL;
  *(_DWORD *)(a1 + 184) = 4096;
  if ( v14 != -1 )
    MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x58000000000LL), v19);
  v21 = a6;
  MiObtainProtoReference(a6, 0LL, v19, v20);
  *(_QWORD *)(a1 + 160) = v21;
  MiUnlockProtoPoolPage(v21, 2u);
  MiFillPageWithImageExtentContents(*(_QWORD *)(*(_QWORD *)(v23 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL, 1);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
