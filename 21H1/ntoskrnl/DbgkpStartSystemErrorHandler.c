/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x140883440
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x1403F4FB0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x140748B40 (EtwUnregister.c)
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
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
