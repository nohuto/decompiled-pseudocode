/*
 * XREFs of PsGetCurrentProcess @ 0x140293500
 * Callers:
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiInitializeMdlBatchPages @ 0x140342FCC (MiInitializeMdlBatchPages.c)
 *     KiLockExtendedServiceTable @ 0x1403D7A88 (KiLockExtendedServiceTable.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     MiValidateExistingImage @ 0x14063B24C (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     CmFcpInitializeChangeSubscription @ 0x140879C6C (CmFcpInitializeChangeSubscription.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
