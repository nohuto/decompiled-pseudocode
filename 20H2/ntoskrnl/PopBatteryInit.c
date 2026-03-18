/*
 * XREFs of PopBatteryInit @ 0x140A73348
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_140C2374C = -1;
  qword_140C235E8 = (__int64)&qword_140C235E0;
  qword_140C235E0 = (__int64)&qword_140C235E0;
  qword_140C235F8 = (__int64)&qword_140C235F0;
  v0 = 4LL;
  qword_140C235F0 = (__int64)&qword_140C235F0;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C236E8;
  *(_OWORD *)&xmmword_140C23790 = 0LL;
  qword_140C235C8 = 0LL;
  xmmword_140C23768 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C237A0 = 0LL;
  xmmword_140C23790 = 0LL;
  *(_QWORD *)&xmmword_140C23768 = 0LL;
  xmmword_140C237B0 = 0LL;
  LOBYTE(xmmword_140C237A0) = 1;
  byte_140C23748 = 0;
  byte_140C2375C = 0;
  dword_140C23760 = 0;
  byte_140C23764 = 0;
  dword_140C23758 = 0;
  dword_140C23778 = 0;
  qword_140C23780 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C23648.Header.Lock = 8LL;
  stru_140C236C8.Header.WaitListHead.Blink = &stru_140C236C8.Header.WaitListHead;
  stru_140C236C8.Header.WaitListHead.Flink = &stru_140C236C8.Header.WaitListHead;
  qword_140C236A0 = (__int64)PopBatteryWakeDpc;
  stru_140C23648.Header.WaitListHead.Blink = &stru_140C23648.Header.WaitListHead;
  stru_140C23648.Header.WaitListHead.Flink = &stru_140C23648.Header.WaitListHead;
  LOWORD(stru_140C236C8.Header.Lock) = 1;
  stru_140C236C8.Header.Size = 6;
  stru_140C236C8.Header.SignalState = 0;
  qword_140C23788 = 0LL;
  dword_140C23688 = 275;
  qword_140C236A8 = 0LL;
  qword_140C236C0 = 0LL;
  qword_140C23698 = 0LL;
  stru_140C23648.DueTime.QuadPart = 0LL;
  stru_140C23648.Period = 0;
  stru_140C23648.Processor = 0;
  byte_140C235D8 = 0;
  dword_140C2363C = 0;
  *(_QWORD *)&stru_140C22A40.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C22A18 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C22A40.Header.WaitListHead;
  stru_140C22A40.Header.WaitListHead.Blink = &stru_140C22A40.Header.WaitListHead;
  stru_140C22A40.Header.WaitListHead.Flink = &stru_140C22A40.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C22A20 = 0LL;
  qword_140C22A38 = 0LL;
  qword_140C22A10 = 0LL;
  stru_140C22A40.DueTime.QuadPart = 0LL;
  stru_140C22A40.Period = 0;
  stru_140C22A40.Processor = 0;
  byte_140C236E0 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
