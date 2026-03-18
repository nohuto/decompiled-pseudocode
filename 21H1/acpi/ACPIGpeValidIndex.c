/*
 * XREFs of ACPIGpeValidIndex @ 0x1C0019EE0
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00156A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0017084 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0019EA8 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C002671C (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorConnect @ 0x1C0060990 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIValidateGPEEventIndex @ 0x1C0055F5C (ACPIValidateGPEEventIndex.c)
 */

char __fastcall ACPIGpeValidIndex(__int64 a1)
{
  char result; // al

  if ( (unsigned int)a1 < 8 * (unsigned int)*((unsigned __int16 *)AcpiInformation + 43) )
    return 1;
  result = ACPIValidateGPEEventIndex(
             a1,
             *((unsigned __int16 *)AcpiInformation + 50),
             *((unsigned __int16 *)AcpiInformation + 49));
  if ( result )
    return 1;
  return result;
}
