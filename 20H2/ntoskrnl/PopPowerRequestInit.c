/*
 * XREFs of PopPowerRequestInit @ 0x140A73554
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlInitializeGenericTableAvl @ 0x14023FD70 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObCreateObjectType @ 0x14078B3B0 (ObCreateObjectType.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A73758 (PopStatsInitPowerRequestLibrary.c)
 */

__int64 PopPowerRequestInit()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF

  qword_140C24DF8 = 0LL;
  PopPowerRequestLock = 0LL;
  DestinationString = 0LL;
  PopPowerRequestSpinLock = 0LL;
  PopPowerRequestObjectCount = 0LL;
  PopSpecialPowerRequestObjectCount = 0LL;
  memset(v3, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  BYTE2(v3[0]) |= 0x14u;
  v3[8] = PopClosePowerRequestObject;
  LOWORD(v3[0]) = 120;
  v3[9] = PopDeletePowerRequestObject;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 152;
  LODWORD(v3[1]) = 402;
  *(_OWORD *)((char *)&v3[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v3[3]) = 2031616;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( v0 >= 0 )
  {
    PopCallbackWorkItem.Parameter = 0LL;
    PopCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerRequestCallbackWorker;
    PopCallbackWorkItem.List.Flink = 0LL;
    qword_140C24E98 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = (__int64)&PopPowerRequestObjectList;
    qword_140C24EA8 = (__int64)&PopSpecialPowerRequestObjectList;
    PopSpecialPowerRequestObjectList = (__int64)&PopSpecialPowerRequestObjectList;
    qword_140C24EB8 = (__int64)&PopPowerRequestCallbacks;
    PopPowerRequestCallbacks = (__int64)&PopPowerRequestCallbacks;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestFree,
      0LL);
    *(_QWORD *)&PopExecutionRequiredTimer.Header.Lock = 8LL;
    qword_140C24D30 = 0LL;
    PopExecutionRequiredTimer.Header.WaitListHead.Blink = &PopExecutionRequiredTimer.Header.WaitListHead;
    PopExecutionRequiredTimer.Header.WaitListHead.Flink = &PopExecutionRequiredTimer.Header.WaitListHead;
    qword_140C24D98 = (__int64)PopExecutionRequiredTimeoutCallback;
    PopExecutionRequiredTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopExecutionRequiredTimeoutWorkerRoutine;
    PopExecutionRequiredContext = 0LL;
    PopExecutionRequiredTimer.DueTime.QuadPart = 0LL;
    PopExecutionRequiredTimer.Period = 0;
    PopExecutionRequiredTimer.Processor = 0;
    PopExecutionRequiredTimeoutDpc = 275;
    qword_140C24DA0 = 0LL;
    qword_140C24DB8 = 0LL;
    qword_140C24D90 = 0LL;
    PopExecutionRequiredTimeoutWorker.Parameter = 0LL;
    PopExecutionRequiredTimeoutWorker.List.Flink = 0LL;
    PopStatsInitPowerRequestLibrary();
  }
  return (unsigned int)v0;
}
