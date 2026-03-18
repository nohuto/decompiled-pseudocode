/*
 * XREFs of PpmWmiInit @ 0x140A70C38
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void (*PpmWmiInit())()
{
  void (*result)(); // rax

  PpmWmiIdleAccountingDpc = 275;
  *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
  PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
  PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
  result = PpmWmiIdleAccountingProcedure;
  qword_140C208B8 = (__int64)PpmWmiIdleAccountingProcedure;
  PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
  PpmWmiIdleAccountingTimer.Period = 0;
  PpmWmiIdleAccountingTimer.Processor = 0;
  qword_140C208C0 = 0LL;
  qword_140C208D8 = 0LL;
  qword_140C208B0 = 0LL;
  return result;
}
