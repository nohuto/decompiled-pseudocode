/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___14 @ 0x180001B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___14()
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  return QueryPerformanceFrequency(&Frequency);
}
