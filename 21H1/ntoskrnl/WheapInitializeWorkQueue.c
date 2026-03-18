/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403B67F4
 * Callers:
 *     WheaInitialize @ 0x140A5B63C (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C15E68 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C15E98 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C15ED0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C15EE0 = (__int64)WheapProcessWorkQueueItem;
  qword_140C15E70 = 0LL;
  dword_140C15E80 = 275;
  qword_140C15EA0 = (__int64)&WheapWorkQueue;
  qword_140C15EB8 = 0LL;
  qword_140C15E90 = 0LL;
  qword_140C15ED8 = (__int64)&WheapWorkQueue;
  qword_140C15EC0 = 0LL;
  return result;
}
