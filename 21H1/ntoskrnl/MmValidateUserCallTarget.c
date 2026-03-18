/*
 * XREFs of MmValidateUserCallTarget @ 0x1408D3528
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x1408CC5F0 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x1402A5920 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1406E9D74 (MiValidateUserCallTarget.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // r8d
  unsigned __int64 v1; // r9

  if ( MiIsProcessCfgEnabled() )
    return MiValidateUserCallTarget(
             v1,
             KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + (v0 != 0 ? 472LL : 440LL));
  else
    return 1LL;
}
