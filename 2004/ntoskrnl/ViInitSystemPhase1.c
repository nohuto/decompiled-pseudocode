/*
 * XREFs of ViInitSystemPhase1 @ 0x140A6C52C
 * Callers:
 *     VerifierInitSystem @ 0x140A6C224 (VerifierInitSystem.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1407825A0 (PsSetCreateProcessNotifyRoutine.c)
 *     VfPendingInitPhase1 @ 0x1409D278C (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409DD210 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1409DD568 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

__int64 ViInitSystemPhase1()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1();
    VfPendingInitPhase1();
  }
  PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
  result = (unsigned int)ViImageExecutionOptions;
  ViFaultsProcessNotifyRoutineSet = 1;
  if ( ViImageExecutionOptions == 1 )
    _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, 1u);
  return result;
}
