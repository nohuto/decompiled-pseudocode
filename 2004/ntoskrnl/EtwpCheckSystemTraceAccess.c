/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x14077F2A8
 * Callers:
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406365C4 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406C6E08 (EtwpCheckLoggerControlAccess.c)
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 832) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, a2, 0LL);
}
