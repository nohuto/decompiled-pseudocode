/*
 * XREFs of MmValidateUserCallTarget @ 0x1408D7FD8
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D10A0 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1406BD86C (MiValidateUserCallTarget.c)
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
