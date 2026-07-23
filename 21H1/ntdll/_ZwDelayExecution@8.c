/*
 * XREFs of _ZwDelayExecution@8 @ 0x4B2F2CC0
 * Callers:
 *     _LdrpInitMuiCrits@8 @ 0x4B2B8C84 (_LdrpInitMuiCrits@8.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     _EtwpWaitForBufferReferenceCount@4 @ 0x4B2EDFCF (_EtwpWaitForBufferReferenceCount@4.c)
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _InitSecurityCookie@0 @ 0x4B331309 (_InitSecurityCookie@0.c)
 *     _GetShipAssertBuffer@0 @ 0x4B33B3F0 (_GetShipAssertBuffer@0.c)
 *     _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9 (_RtlLockHeapManagerForCloning@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  return Wow64SystemServiceCall();
}
