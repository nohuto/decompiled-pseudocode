/*
 * XREFs of _TpSetPoolMinThreads@8 @ 0x4B2ED0C0
 * Callers:
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _TppETWPoolThreadMin@8 @ 0x4B384CB2 (_TppETWPoolThreadMin@8.c)
 */

NTSTATUS __cdecl TpSetPoolMinThreads(PTP_POOL Pool, ULONG MinThreads)
{
  int v2; // edi
  int v3; // ecx

  if ( !Pool || (MinThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  v2 = ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 9), WorkerFactoryThreadMinimum, &MinThreads, 4u);
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478;
  if ( *(_BYTE *)v3 && v2 >= 0 )
    TppETWPoolThreadMin(Pool, MinThreads);
  return v2;
}
