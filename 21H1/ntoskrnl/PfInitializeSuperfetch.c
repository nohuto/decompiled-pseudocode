/*
 * XREFs of PfInitializeSuperfetch @ 0x140A6667C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402C0830 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x1403F4650 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1407A989C (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1407AA92C (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1407AAB9C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140A66774 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A66910 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140A66BB4 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C50298);
  PfpScenCtxInitialize((__int64)&qword_140C50220);
  PfpScenCtxStart((__int64)&qword_140C50220);
  ExInitializePushLock(&stru_140C50340);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50340);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50340);
  qword_140C50348 = 0LL;
  qword_140C50350 = 0LL;
  dword_140C50368 |= 1u;
  qword_140C50360 = (__int64)&qword_140C50358;
  qword_140C50358 = (__int64)&qword_140C50358;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C50040, 4u, 1u);
  return 0LL;
}
