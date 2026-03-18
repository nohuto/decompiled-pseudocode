/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C00ACF44
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0010570 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0010F38 (ACPIBuildPdo.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002CD00 (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00ACFB4 (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00B7904 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
