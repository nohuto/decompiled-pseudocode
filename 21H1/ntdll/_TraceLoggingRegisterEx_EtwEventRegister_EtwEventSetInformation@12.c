/*
 * XREFs of _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1
 * Callers:
 *     _CentennialIssueTracker_EnsureRegistration@0 @ 0x4B2A8230 (_CentennialIssueTracker_EnsureRegistration@0.c)
 *     _LibLoaderTelemetryInitOnce@12 @ 0x4B2ADCF0 (_LibLoaderTelemetryInitOnce@12.c)
 *     _LdrpResReportResourceAccessInternalInitOnce@12 @ 0x4B2AE030 (_LdrpResReportResourceAccessInternalInitOnce@12.c)
 *     _RtlInitializeHeapLogging@0 @ 0x4B2AE064 (_RtlInitializeHeapLogging@0.c)
 *     _RtlpCapChkTelemetryRunOnce@12 @ 0x4B2F2670 (_RtlpCapChkTelemetryRunOnce@12.c)
 *     _VsmEnclaveTelemetryInitOnce@12 @ 0x4B330EF0 (_VsmEnclaveTelemetryInitOnce@12.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _EtwEventSetInformation@20 @ 0x4B2B0A60 (_EtwEventSetInformation@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

unsigned int __thiscall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(char *CallbackContext, int a2)
{
  unsigned int *v3; // esi
  REGHANDLE *v4; // edi
  NTSTATUS v5; // eax
  NTSTATUS v6; // esi
  GUID ProviderId; // [esp+Ch] [ebp-14h] BYREF

  v3 = (unsigned int *)(*((_DWORD *)CallbackContext + 1) - 16);
  ProviderId.Data1 = *v3++;
  *(_DWORD *)&ProviderId.Data2 = *v3++;
  *(_DWORD *)ProviderId.Data4 = *v3;
  *(_DWORD *)&ProviderId.Data4[4] = v3[1];
  *((_DWORD *)CallbackContext + 8) = 0;
  v4 = (REGHANDLE *)(CallbackContext + 24);
  *((_DWORD *)CallbackContext + 9) = 0;
  v5 = EtwEventRegister(&ProviderId, _tlgEnableCallback, CallbackContext, (PREGHANDLE)CallbackContext + 3);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      *v4,
      (EVENT_INFO_CLASS)2,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  }
  return v6;
}
