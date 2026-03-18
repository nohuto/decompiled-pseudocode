/*
 * XREFs of MmValidateUserCallTarget @ 0x1408DA6B8
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D3780 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14023300C (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1406C16F8 (MiValidateUserCallTarget.c)
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
