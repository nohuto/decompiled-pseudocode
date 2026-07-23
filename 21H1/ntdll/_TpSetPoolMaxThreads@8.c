/*
 * XREFs of _TpSetPoolMaxThreads@8 @ 0x4B2B1D10
 * Callers:
 *     _LdrpEnableParallelLoading@4 @ 0x4B2AEBCB (_LdrpEnableParallelLoading@4.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _TpSetDefaultPoolMaxThreads@4 @ 0x4B383C20 (_TpSetDefaultPoolMaxThreads@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _TppETWPoolThreadMax@8 @ 0x4B384C53 (_TppETWPoolThreadMax@8.c)
 */

void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  int v2; // eax

  if ( !Pool || (MaxThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 9), WorkerFactoryThreadMaximum, &MaxThreads, 4u);
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478;
  if ( *(_BYTE *)v2 )
    TppETWPoolThreadMax(Pool, MaxThreads);
}
