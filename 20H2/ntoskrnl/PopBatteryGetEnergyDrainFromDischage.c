/*
 * XREFs of PopBatteryGetEnergyDrainFromDischage @ 0x1405723CC
 * Callers:
 *     PopCalculateCsSummary @ 0x14056E490 (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x14056F8E4 (PopDiagTraceCsResiliencyExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopBatteryGetEnergyDrainFromDischage(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (xmmword_140C23614 & 0x40000000) == 0 && a2 < a1 && a2 )
    return a1 - a2;
  return v2;
}
