/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00035DC
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000103C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0021488 (ProcLibTraceNoPayloadEvent.c)
 */

char ProcLibTraceHiddenProcessorDegradedOperation()
{
  char result; // al
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  result = ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
  if ( (unsigned int)dword_1C0014068 > 5 )
  {
    result = tlgKeywordOn();
    if ( result )
      return tlgWriteTransfer_EtwWriteTransfer(v1, (unsigned __int8 *)dword_1C001204B, v2, v3, 2u, &v4);
  }
  return result;
}
