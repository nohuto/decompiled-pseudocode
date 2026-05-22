/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___13 @ 0x180001AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___13()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_180208328 = Frequency.QuadPart;
  return result;
}
