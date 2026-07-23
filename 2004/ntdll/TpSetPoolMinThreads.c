/*
 * XREFs of TpSetPoolMinThreads @ 0x180083410
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     NtSetInformationWorkerFactory @ 0x1800A01E0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x180112674 (TppETWPoolThreadMin.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl TpSetPoolMinThreads(PTP_POOL Pool, ULONG MinThreads)
{
  __int64 v2; // r8
  int v4; // edi
  __int64 v5; // rdx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MinThreads;
  if ( !Pool
    || (MinThreads & 0x80000000) != 0
    || (*(_QWORD *)&MinThreads = NtCurrentPeb()->Ldr, *(_BYTE *)(*(_QWORD *)&MinThreads + 72LL)) )
  {
    TppRaiseInvalidParameter(Pool, *(_QWORD *)&MinThreads, v2);
    return -1073741811;
  }
  else
  {
    v4 = NtSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMinimum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v5 = 2147353478LL;
    if ( *(_BYTE *)v5 )
    {
      if ( v4 >= 0 )
        TppETWPoolThreadMin(Pool, WorkerFactoryInformation);
    }
    return v4;
  }
}
