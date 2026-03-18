/*
 * XREFs of PsGetCurrentProcess @ 0x1402BFB80
 * Callers:
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     MiInitializeMdlBatchPages @ 0x1403347C4 (MiInitializeMdlBatchPages.c)
 *     KiLockExtendedServiceTable @ 0x1403DB558 (KiLockExtendedServiceTable.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     CmFcpInitializeChangeSubscription @ 0x140880ACC (CmFcpInitializeChangeSubscription.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
