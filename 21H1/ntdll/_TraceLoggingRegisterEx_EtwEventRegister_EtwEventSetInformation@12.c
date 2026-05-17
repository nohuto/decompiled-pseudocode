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

unsigned int __thiscall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD v8[4]; // [esp+Ch] [ebp-14h] BYREF

  v3 = (_DWORD *)(this[1] - 16);
  v8[0] = *v3++;
  v8[1] = *v3++;
  v8[2] = *v3;
  v8[3] = v3[1];
  this[8] = 0;
  v4 = this + 6;
  this[9] = 0;
  v5 = EtwEventRegister(v8, (int)_tlgEnableCallback, (int)this, (int)(this + 6));
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(*v4, v4[1], 2, this[1], *(unsigned __int16 *)this[1]);
  }
  return v6;
}
