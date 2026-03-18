/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403B7624
 * Callers:
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C15E88 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C15EB8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C15EF0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C15F00 = (__int64)WheapProcessWorkQueueItem;
  qword_140C15E90 = 0LL;
  dword_140C15EA0 = 275;
  qword_140C15EC0 = (__int64)&WheapWorkQueue;
  qword_140C15ED8 = 0LL;
  qword_140C15EB0 = 0LL;
  qword_140C15EF8 = (__int64)&WheapWorkQueue;
  qword_140C15EE0 = 0LL;
  return result;
}
