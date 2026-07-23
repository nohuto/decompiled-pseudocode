/*
 * XREFs of TpSetPoolMaxThreads @ 0x180061620
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x180061518 (LdrpEnableParallelLoading.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111A00 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     NtSetInformationWorkerFactory @ 0x1800A01E0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMax @ 0x1801125F4 (TppETWPoolThreadMax.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MaxThreads;
  if ( !Pool
    || (MaxThreads & 0x80000000) != 0
    || (*(_QWORD *)&MaxThreads = NtCurrentPeb()->Ldr, *(_BYTE *)(*(_QWORD *)&MaxThreads + 72LL)) )
  {
    TppRaiseInvalidParameter(Pool, *(_QWORD *)&MaxThreads, v2);
  }
  else
  {
    NtSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
      TppETWPoolThreadMax(Pool, WorkerFactoryInformation);
  }
}
