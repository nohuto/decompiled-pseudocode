/*
 * XREFs of PopBatteryInit @ 0x140A6CA68
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_140C2328C = -1;
  qword_140C23128 = (__int64)&qword_140C23120;
  qword_140C23120 = (__int64)&qword_140C23120;
  qword_140C23138 = (__int64)&qword_140C23130;
  v0 = 4LL;
  qword_140C23130 = (__int64)&qword_140C23130;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C23228;
  *(_OWORD *)&xmmword_140C232D0 = 0LL;
  qword_140C23108 = 0LL;
  xmmword_140C232A8 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C232E0 = 0LL;
  xmmword_140C232D0 = 0LL;
  *(_QWORD *)&xmmword_140C232A8 = 0LL;
  xmmword_140C232F0 = 0LL;
  LOBYTE(xmmword_140C232E0) = 1;
  byte_140C23288 = 0;
  byte_140C2329C = 0;
  dword_140C232A0 = 0;
  byte_140C232A4 = 0;
  dword_140C23298 = 0;
  dword_140C232B8 = 0;
  qword_140C232C0 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C23188.Header.Lock = 8LL;
  stru_140C23208.Header.WaitListHead.Blink = &stru_140C23208.Header.WaitListHead;
  stru_140C23208.Header.WaitListHead.Flink = &stru_140C23208.Header.WaitListHead;
  qword_140C231E0 = (__int64)PopBatteryWakeDpc;
  stru_140C23188.Header.WaitListHead.Blink = &stru_140C23188.Header.WaitListHead;
  stru_140C23188.Header.WaitListHead.Flink = &stru_140C23188.Header.WaitListHead;
  LOWORD(stru_140C23208.Header.Lock) = 1;
  stru_140C23208.Header.Size = 6;
  stru_140C23208.Header.SignalState = 0;
  qword_140C232C8 = 0LL;
  dword_140C231C8 = 275;
  qword_140C231E8 = 0LL;
  qword_140C23200 = 0LL;
  qword_140C231D8 = 0LL;
  stru_140C23188.DueTime.QuadPart = 0LL;
  stru_140C23188.Period = 0;
  stru_140C23188.Processor = 0;
  byte_140C23118 = 0;
  dword_140C2317C = 0;
  *(_QWORD *)&stru_140C22920.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C228F8 = (__int64)PopBatteryRefreshStatus;
  result = &stru_140C22920.Header.WaitListHead;
  stru_140C22920.Header.WaitListHead.Blink = &stru_140C22920.Header.WaitListHead;
  stru_140C22920.Header.WaitListHead.Flink = &stru_140C22920.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C22900 = 0LL;
  qword_140C22918 = 0LL;
  qword_140C228F0 = 0LL;
  stru_140C22920.DueTime.QuadPart = 0LL;
  stru_140C22920.Period = 0;
  stru_140C22920.Processor = 0;
  byte_140C23220 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
