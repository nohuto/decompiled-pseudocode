/*
 * XREFs of MiInitializeScrubPacket @ 0x1408DBFB0
 * Callers:
 *     MiScrubMemoryWorker @ 0x1408DC100 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiCreatePteCopyList @ 0x1402E5388 (MiCreatePteCopyList.c)
 *     MiReleaseScrubPacket @ 0x1408DC0B0 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 *a1)
{
  unsigned int v2; // edi
  unsigned int NextPageColor; // eax
  unsigned __int64 v4; // r9
  __int64 v6; // rsi
  PVOID Pool; // rax
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v10 = 0LL;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
    0,
    (__int64)&v10);
  NextPageColor = MiGetNextPageColor((__int64)&v10);
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(a1 + 6), NextPageColor, 8) )
    return 3221225626LL;
  MiCreatePteCopyList(0x100uLL, 0x100uLL, (__int64)(a1 + 22), v4);
  if ( *((_DWORD *)a1 + 45)
    && (v6 = *a1,
        a1[25] = 0LL,
        a1[27] = 0LL,
        a1[26] = 0LL,
        Pool = MiAllocatePool(64, 0x1000uLL, 0x6363454Du),
        (a1[25] = (__int64)Pool) != 0) )
  {
    if ( *((_DWORD *)a1 + 2) != -1 )
      a1[27] = MiReferencePageRuns(*(_QWORD *)(v6 + 48), 1u, v8, v9);
  }
  else
  {
    MiReleaseScrubPacket(a1);
    return (unsigned int)-1073741670;
  }
  return v2;
}
