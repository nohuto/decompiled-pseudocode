/*
 * XREFs of _TpSetPoolWorkerThreadIdleTimeout@12 @ 0x4B2AEB80
 * Callers:
 *     _LdrpEnableParallelLoading@4 @ 0x4B2AEBCB (_LdrpEnableParallelLoading@4.c)
 * Callees:
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpSetPoolWorkerThreadIdleTimeout(int a1, int a2, int a3)
{
  if ( !a1 || a3 >= 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return ZwSetInformationWorkerFactory(*(_DWORD *)(a1 + 36), 2, &a2, 8);
}
