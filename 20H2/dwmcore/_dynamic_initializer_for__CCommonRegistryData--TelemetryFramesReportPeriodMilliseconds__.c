/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__ @ 0x1800033D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800DD6A8 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"TelemetryFramesReportPeriodMilliseconds", &v2, 0LL);
  v1 = 60000;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds = v1;
  return result;
}
