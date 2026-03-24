/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C00AD264
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00107D0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0011198 (ACPIBuildPdo.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002CF60 (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00AD2D4 (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00B7C24 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
