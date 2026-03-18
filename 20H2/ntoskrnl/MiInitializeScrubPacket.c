/*
 * XREFs of MiInitializeScrubPacket @ 0x1408DE690
 * Callers:
 *     MiScrubMemoryWorker @ 0x1408DE7E0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiCreatePteCopyList @ 0x1402910E8 (MiCreatePteCopyList.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     MiCreateUltraThreadContext @ 0x140333FE4 (MiCreateUltraThreadContext.c)
 *     MiGetNextPageColor @ 0x140336AE8 (MiGetNextPageColor.c)
 *     MiReleaseScrubPacket @ 0x1408DE790 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 *a1)
{
  unsigned int v2; // edi
  unsigned int NextPageColor; // eax
  __int64 v5; // rsi
  PVOID Pool; // rax
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v9 = 0LL;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
    0,
    (__int64)&v9);
  NextPageColor = MiGetNextPageColor((__int64)&v9);
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(a1 + 6), NextPageColor, 8) )
    return 3221225626LL;
  MiCreatePteCopyList(0x100uLL, 0x100uLL, (__int64)(a1 + 22));
  if ( *((_DWORD *)a1 + 45)
    && (v5 = *a1,
        a1[25] = 0LL,
        a1[27] = 0LL,
        a1[26] = 0LL,
        Pool = MiAllocatePool(64, 0x1000uLL, 0x6363454Du),
        (a1[25] = (__int64)Pool) != 0) )
  {
    if ( *((_DWORD *)a1 + 2) != -1 )
      a1[27] = MiReferencePageRuns(*(_QWORD *)(v5 + 48), 1u, v7, v8);
  }
  else
  {
    MiReleaseScrubPacket(a1);
    return (unsigned int)-1073741670;
  }
  return v2;
}
