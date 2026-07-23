/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x14088A2B0
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x1403FAE10 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // [rsp+40h] [rbp-38h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  RegHandle = 0LL;
  v3 = 0;
  v1 = 0;
  if ( ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, WnfInfoSubscribersPresent, 0LL, &v3, 4u) >= 0 && v3 )
    v1 = ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    EventDescriptor = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) && EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0 )
      ++v1;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
