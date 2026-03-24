/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14037CA20
 * Callers:
 *     HalpAcpiPostSleep @ 0x140995B2C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140995EFC (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x1409960B0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A836C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A865C (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
