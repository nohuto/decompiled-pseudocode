/*
 * XREFs of PsGetCurrentProcess @ 0x14023A4B0
 * Callers:
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiInitializeMdlBatchPages @ 0x140313C8C (MiInitializeMdlBatchPages.c)
 *     KiLockExtendedServiceTable @ 0x1403D88C8 (KiLockExtendedServiceTable.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087AF5C (CmFcpInitializeChangeSubscription.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
