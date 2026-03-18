/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x140884760
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x1403F6240 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x14074CF60 (EtwUnregister.c)
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  BOOL v1; // edi
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  RegHandle = 0LL;
  v1 = 0;
  ZwQueryWnfStateNameInformation((__int64)&WNF_WER_SERVICE_START, 1LL);
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    EventDescriptor = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) )
      v1 = EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
