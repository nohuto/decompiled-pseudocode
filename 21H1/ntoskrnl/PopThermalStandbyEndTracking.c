/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1403875F0
 * Callers:
 *     PopThermalSxEntry @ 0x1403869D8 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C1368 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x140569CE0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x140569D60 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x14056DED4 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C22DFC;
  result = 0LL;
  byte_140C22DFC = 0;
  if ( byte_140C22DFD )
  {
    byte_140C22DFD = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22E00) / 0x989680uLL, a3);
  }
  return result;
}
