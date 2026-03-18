/*
 * XREFs of EtwpCheckCurrentUserGuidAccess @ 0x14093DF30
 * Callers:
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406365C4 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckCurrentUserGuidAccess(__int64 a1, ACCESS_MASK a2)
{
  return EtwpCheckGuidAccess(a1, a2, 0LL);
}
