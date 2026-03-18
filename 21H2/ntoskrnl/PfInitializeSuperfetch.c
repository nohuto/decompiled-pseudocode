/*
 * XREFs of PfInitializeSuperfetch @ 0x140B23A48
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x14085071C (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x14085094C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140B23B40 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140B23CDC (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140B23F80 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C54598);
  PfpScenCtxInitialize((__int64)&qword_140C54520);
  PfpScenCtxStart((__int64)&qword_140C54520);
  ExInitializePushLock(&stru_140C54640);
  ExWaitForRundownProtectionRelease(&stru_140C54640);
  ExRundownCompleted(&stru_140C54640);
  qword_140C54648 = 0LL;
  qword_140C54650 = 0LL;
  dword_140C54668 |= 1u;
  qword_140C54660 = (__int64)&qword_140C54658;
  qword_140C54658 = (__int64)&qword_140C54658;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C54340, 4u, 1u);
  return 0LL;
}
