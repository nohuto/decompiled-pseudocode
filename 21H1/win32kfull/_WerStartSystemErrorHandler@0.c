/*
 * XREFs of _WerStartSystemErrorHandler@0 @ 0x1B9DAB
 * Callers:
 *     _WerKernelSubmitReportForHungProcess@12 @ 0x1B9A56 (_WerKernelSubmitReportForHungProcess@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall WerStartSystemErrorHandler()
{
  int v0; // esi
  int v2; // [esp+Ch] [ebp-24h] BYREF
  ULONGLONG RegHandle; // [esp+10h] [ebp-20h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [esp+18h] [ebp-18h] BYREF

  RegHandle = 0LL;
  v0 = 0;
  v2 = 0;
  if ( (int)ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, 1, 0, &v2, 4) >= 0 && v2 )
    v0 = ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0, 0, 0, 0, 0, 0) >= 0;
  if ( EtwRegister(&ProviderId, 0, 0, &RegHandle) >= 0 )
  {
    memset(&EventDescriptor, 0, sizeof(EventDescriptor));
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) && EtwWrite(RegHandle, &EventDescriptor, 0, 0, 0) >= 0 )
      ++v0;
    EtwUnregister(RegHandle);
  }
  return v0 != 0 ? 0 : -1073741696;
}
