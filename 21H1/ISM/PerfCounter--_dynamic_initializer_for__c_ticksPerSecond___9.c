/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___9 @ 0x1800018C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___9()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_180209310 = Frequency.QuadPart;
  return result;
}
