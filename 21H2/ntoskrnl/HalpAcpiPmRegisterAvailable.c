/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14037C570
 * Callers:
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140996EFC (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x1409970B0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A929C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A958C (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
