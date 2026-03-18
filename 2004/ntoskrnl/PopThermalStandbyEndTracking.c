/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140388560
 * Callers:
 *     PopThermalSxEntry @ 0x140387948 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C2228 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14056A330 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056A3B0 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x14056E524 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C22C7C;
  result = 0LL;
  byte_140C22C7C = 0;
  if ( byte_140C22C7D )
  {
    byte_140C22C7D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22C80) / 0x989680uLL, a3);
  }
  return result;
}
