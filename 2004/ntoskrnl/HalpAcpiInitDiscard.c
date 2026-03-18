/*
 * XREFs of HalpAcpiInitDiscard @ 0x140A5B1E8
 * Callers:
 *     HalpAcpiInitSystem @ 0x14099CAD0 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140A5B3A0 (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140C00AC8 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140C008A0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
