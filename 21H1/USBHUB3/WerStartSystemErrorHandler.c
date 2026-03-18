/*
 * XREFs of WerStartSystemErrorHandler @ 0x1C0041FB8
 * Callers:
 *     WerKernelSubmitReport @ 0x1C00421BC (WerKernelSubmitReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 */

__int64 WerStartSystemErrorHandler()
{
  int v0; // ebx
  __int64 result; // rax
  int v2; // [rsp+40h] [rbp-38h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  RegHandle = 0LL;
  v2 = 0;
  v0 = 0;
  if ( (int)ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, 1LL, 0LL, &v2, 4) >= 0 && v2 )
    v0 = (int)ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0LL, 0LL, 0LL, 0, 0) >= 0;
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    EventDescriptor = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) && EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0 )
      ++v0;
    EtwUnregister(RegHandle);
  }
  result = 3221225600LL;
  if ( v0 )
    return 0LL;
  return result;
}
