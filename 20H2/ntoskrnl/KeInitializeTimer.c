/*
 * XREFs of KeInitializeTimer @ 0x140202F10
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140A1E354 (CcInitializeBcbProfiler.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
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
