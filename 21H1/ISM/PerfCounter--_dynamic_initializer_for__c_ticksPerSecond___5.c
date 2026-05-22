/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___5 @ 0x180001840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___5()
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  return QueryPerformanceFrequency(&Frequency);
}
