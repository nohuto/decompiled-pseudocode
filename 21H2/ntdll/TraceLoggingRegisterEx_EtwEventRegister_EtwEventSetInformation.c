/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A9C
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007E2C4 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180083EB0 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x1800857F0 (RtlpCapChkTelemetryRunOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180085FF0 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x1800D04C0 (VsmEnclaveTelemetryInitOnce.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventSetInformation @ 0x180042AF0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x180042E80 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(__int64 *a1)
{
  __int128 v2; // xmm0
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_OWORD *)(a1[1] - 16);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v6 = v2;
  v3 = EtwEventRegister((int)&v6, (__int64)tlgEnableCallback, (__int64)a1, (__int64)(a1 + 4));
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(a1[4], 2, a1[1], *(unsigned __int16 *)a1[1]);
  }
  return v4;
}
