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

int __stdcall TpSetPoolMaxThreads(int a1, int a2)
{
  int result; // eax

  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  ZwSetInformationWorkerFactory(*(_DWORD *)(a1 + 36), 5, &a2, 4);
  if ( RtlGetCurrentServiceSessionId() )
    result = (int)NtCurrentPeb()->SharedData + 556;
  else
    result = 2147353478;
  if ( *(_BYTE *)result )
    return TppETWPoolThreadMax(a1, a2);
  return result;
}
