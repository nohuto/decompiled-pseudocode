/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14038A720
 * Callers:
 *     PopThermalSxEntry @ 0x140389B08 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C4998 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14056DD60 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056DDE0 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x140571F54 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C22CDC;
  result = 0LL;
  byte_140C22CDC = 0;
  if ( byte_140C22CDD )
  {
    byte_140C22CDD = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22CE0) / 0x989680uLL, a3);
  }
  return result;
}
