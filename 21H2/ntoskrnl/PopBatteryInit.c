/*
 * XREFs of PopBatteryInit @ 0x140A702C8
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_140C237AC = -1;
  qword_140C23648 = (__int64)&qword_140C23640;
  qword_140C23640 = (__int64)&qword_140C23640;
  qword_140C23658 = (__int64)&qword_140C23650;
  v0 = 4LL;
  qword_140C23650 = (__int64)&qword_140C23650;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C23748;
  *(_OWORD *)&xmmword_140C237F0 = 0LL;
  qword_140C23628 = 0LL;
  xmmword_140C237C8 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C23800 = 0LL;
  xmmword_140C237F0 = 0LL;
  *(_QWORD *)&xmmword_140C237C8 = 0LL;
  xmmword_140C23810 = 0LL;
  LOBYTE(xmmword_140C23800) = 1;
  byte_140C237A8 = 0;
  byte_140C237BC = 0;
  dword_140C237C0 = 0;
  byte_140C237C4 = 0;
  dword_140C237B8 = 0;
  dword_140C237D8 = 0;
  qword_140C237E0 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C236A8.Header.Lock = 8LL;
  stru_140C23728.Header.WaitListHead.Blink = &stru_140C23728.Header.WaitListHead;
  stru_140C23728.Header.WaitListHead.Flink = &stru_140C23728.Header.WaitListHead;
  qword_140C23700 = (__int64)PopBatteryWakeDpc;
  stru_140C236A8.Header.WaitListHead.Blink = &stru_140C236A8.Header.WaitListHead;
  stru_140C236A8.Header.WaitListHead.Flink = &stru_140C236A8.Header.WaitListHead;
  LOWORD(stru_140C23728.Header.Lock) = 1;
  stru_140C23728.Header.Size = 6;
  stru_140C23728.Header.SignalState = 0;
  qword_140C237E8 = 0LL;
  dword_140C236E8 = 275;
  qword_140C23708 = 0LL;
  qword_140C23720 = 0LL;
  qword_140C236F8 = 0LL;
  stru_140C236A8.DueTime.QuadPart = 0LL;
  stru_140C236A8.Period = 0;
  stru_140C236A8.Processor = 0;
  byte_140C23638 = 0;
  dword_140C2369C = 0;
  *(_QWORD *)&stru_140C22B80.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C22B58 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C22B80.Header.WaitListHead;
  stru_140C22B80.Header.WaitListHead.Blink = &stru_140C22B80.Header.WaitListHead;
  stru_140C22B80.Header.WaitListHead.Flink = &stru_140C22B80.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C22B60 = 0LL;
  qword_140C22B78 = 0LL;
  qword_140C22B50 = 0LL;
  stru_140C22B80.DueTime.QuadPart = 0LL;
  stru_140C22B80.Period = 0;
  stru_140C22B80.Processor = 0;
  byte_140C23740 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
