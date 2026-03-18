/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x140379CE0
 * Callers:
 *     HalpAcpiPostSleep @ 0x14099138C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099175C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140991910 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A46FC (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A49EC (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
