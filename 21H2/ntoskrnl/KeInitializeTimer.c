/*
 * XREFs of KeInitializeTimer @ 0x14024C980
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     CcInitializeTelemetry @ 0x140AF2E9C (CcInitializeTelemetry.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimer(PKTIMER Timer)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
}
