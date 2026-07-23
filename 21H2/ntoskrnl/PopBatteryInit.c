/*
 * XREFs of PopBatteryInit @ 0x140A712C8
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_140C23DCC = -1;
  qword_140C23C68 = (__int64)&qword_140C23C60;
  qword_140C23C60 = (__int64)&qword_140C23C60;
  qword_140C23C78 = (__int64)&qword_140C23C70;
  v0 = 4LL;
  qword_140C23C70 = (__int64)&qword_140C23C70;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C23D68;
  *(_OWORD *)&xmmword_140C23E10 = 0LL;
  qword_140C23C48 = 0LL;
  xmmword_140C23DE8 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C23E20 = 0LL;
  xmmword_140C23E10 = 0LL;
  *(_QWORD *)&xmmword_140C23DE8 = 0LL;
  xmmword_140C23E30 = 0LL;
  LOBYTE(xmmword_140C23E20) = 1;
  byte_140C23DC8 = 0;
  byte_140C23DDC = 0;
  dword_140C23DE0 = 0;
  byte_140C23DE4 = 0;
  dword_140C23DD8 = 0;
  dword_140C23DF8 = 0;
  qword_140C23E00 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C23CC8.Header.Lock = 8LL;
  stru_140C23D48.Header.WaitListHead.Blink = &stru_140C23D48.Header.WaitListHead;
  stru_140C23D48.Header.WaitListHead.Flink = &stru_140C23D48.Header.WaitListHead;
  qword_140C23D20 = (__int64)PopBatteryWakeDpc;
  stru_140C23CC8.Header.WaitListHead.Blink = &stru_140C23CC8.Header.WaitListHead;
  stru_140C23CC8.Header.WaitListHead.Flink = &stru_140C23CC8.Header.WaitListHead;
  LOWORD(stru_140C23D48.Header.Lock) = 1;
  stru_140C23D48.Header.Size = 6;
  stru_140C23D48.Header.SignalState = 0;
  qword_140C23E08 = 0LL;
  dword_140C23D08 = 275;
  qword_140C23D28 = 0LL;
  qword_140C23D40 = 0LL;
  qword_140C23D18 = 0LL;
  stru_140C23CC8.DueTime.QuadPart = 0LL;
  stru_140C23CC8.Period = 0;
  stru_140C23CC8.Processor = 0;
  byte_140C23C58 = 0;
  dword_140C23CBC = 0;
  *(_QWORD *)&stru_140C22BE0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C22BB8 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C22BE0.Header.WaitListHead;
  stru_140C22BE0.Header.WaitListHead.Blink = &stru_140C22BE0.Header.WaitListHead;
  stru_140C22BE0.Header.WaitListHead.Flink = &stru_140C22BE0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C22BC0 = 0LL;
  qword_140C22BD8 = 0LL;
  qword_140C22BB0 = 0LL;
  stru_140C22BE0.DueTime.QuadPart = 0LL;
  stru_140C22BE0.Period = 0;
  stru_140C22BE0.Processor = 0;
  byte_140C23D60 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
