/*
 * XREFs of PopBatteryInit @ 0x140A6C798
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_140C2384C = -1;
  qword_140C236E8 = (__int64)&qword_140C236E0;
  qword_140C236E0 = (__int64)&qword_140C236E0;
  qword_140C236F8 = (__int64)&qword_140C236F0;
  v0 = 4LL;
  qword_140C236F0 = (__int64)&qword_140C236F0;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C237E8;
  *(_OWORD *)&xmmword_140C23890 = 0LL;
  qword_140C236C8 = 0LL;
  xmmword_140C23868 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C238A0 = 0LL;
  xmmword_140C23890 = 0LL;
  *(_QWORD *)&xmmword_140C23868 = 0LL;
  xmmword_140C238B0 = 0LL;
  LOBYTE(xmmword_140C238A0) = 1;
  byte_140C23848 = 0;
  byte_140C2385C = 0;
  dword_140C23860 = 0;
  byte_140C23864 = 0;
  dword_140C23858 = 0;
  dword_140C23878 = 0;
  qword_140C23880 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C23748.Header.Lock = 8LL;
  stru_140C237C8.Header.WaitListHead.Blink = &stru_140C237C8.Header.WaitListHead;
  stru_140C237C8.Header.WaitListHead.Flink = &stru_140C237C8.Header.WaitListHead;
  qword_140C237A0 = (__int64)PopBatteryWakeDpc;
  stru_140C23748.Header.WaitListHead.Blink = &stru_140C23748.Header.WaitListHead;
  stru_140C23748.Header.WaitListHead.Flink = &stru_140C23748.Header.WaitListHead;
  LOWORD(stru_140C237C8.Header.Lock) = 1;
  stru_140C237C8.Header.Size = 6;
  stru_140C237C8.Header.SignalState = 0;
  qword_140C23888 = 0LL;
  dword_140C23788 = 275;
  qword_140C237A8 = 0LL;
  qword_140C237C0 = 0LL;
  qword_140C23798 = 0LL;
  stru_140C23748.DueTime.QuadPart = 0LL;
  stru_140C23748.Period = 0;
  stru_140C23748.Processor = 0;
  byte_140C236D8 = 0;
  dword_140C2373C = 0;
  *(_QWORD *)&stru_140C22B60.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C22B38 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C22B60.Header.WaitListHead;
  stru_140C22B60.Header.WaitListHead.Blink = &stru_140C22B60.Header.WaitListHead;
  stru_140C22B60.Header.WaitListHead.Flink = &stru_140C22B60.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C22B40 = 0LL;
  qword_140C22B58 = 0LL;
  qword_140C22B30 = 0LL;
  stru_140C22B60.DueTime.QuadPart = 0LL;
  stru_140C22B60.Period = 0;
  stru_140C22B60.Processor = 0;
  byte_140C237E0 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
