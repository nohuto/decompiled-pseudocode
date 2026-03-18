/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403BA0C4
 * Callers:
 *     WheaInitialize @ 0x140A61A3C (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C15F08 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C15F38 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C15F70 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C15F80 = (__int64)WheapProcessWorkQueueItem;
  qword_140C15F10 = 0LL;
  dword_140C15F20 = 275;
  qword_140C15F40 = (__int64)&WheapWorkQueue;
  qword_140C15F58 = 0LL;
  qword_140C15F30 = 0LL;
  qword_140C15F78 = (__int64)&WheapWorkQueue;
  qword_140C15F60 = 0LL;
  return result;
}
