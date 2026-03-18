/*
 * XREFs of ViInitSystemPhase1 @ 0x140A72E0C
 * Callers:
 *     VerifierInitSystem @ 0x140A72B04 (VerifierInitSystem.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1407906C0 (PsSetCreateProcessNotifyRoutine.c)
 *     VfPendingInitPhase1 @ 0x1409D87AC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409E3230 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1409E3588 (VfSettingsMiscellaneousChecksInitPhase1.c)
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
