/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000811C
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C0008598 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00085C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C002D10C (ProcLibTraceNoPayloadEvent.c)
 */

__int64 ProcLibTraceHiddenProcessorDegradedOperation()
{
  __int64 result; // rax
  __int64 v1; // rcx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  result = ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
  if ( (unsigned int)dword_1C0017038 > 5 )
  {
    result = tlgKeywordOn(v1, 0x400000000000LL);
    if ( (_BYTE)result )
      return tlgWriteTransfer_EtwWriteTransfer(v2, (int)&dword_1C001350B, v3, v4, 2u, &v5);
  }
  return result;
}
