/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x140554090
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x140552D54 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140553164 (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x1405735F0 (KeFrozenProcessorCount.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  return BugCheckProgressEfiSafeToCall
      && (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1
      && !BugCheckProgressEfiCalled
      && !(unsigned __int8)off_140C01F90[0]();
}
