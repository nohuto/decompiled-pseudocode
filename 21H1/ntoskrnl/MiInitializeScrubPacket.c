/*
 * XREFs of MiInitializeScrubPacket @ 0x1408D7500
 * Callers:
 *     MiScrubMemoryWorker @ 0x1408D7650 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408D76C0 (MiScrubProcesses.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x1402244A8 (MiCreatePteCopyList.c)
 *     MiGetNextPageColor @ 0x140280344 (MiGetNextPageColor.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     MiReleaseScrubPacket @ 0x1408D7600 (MiReleaseScrubPacket.c)
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
