/*
 * XREFs of MmValidateUserCallTarget @ 0x1408D4878
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x1408CD940 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14024C8F0 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x14070DBA4 (MiValidateUserCallTarget.c)
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
