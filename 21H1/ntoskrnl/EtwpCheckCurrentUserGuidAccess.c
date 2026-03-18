/*
 * XREFs of EtwpCheckCurrentUserGuidAccess @ 0x14093CCB4
 * Callers:
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x14067F0D0 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckCurrentUserGuidAccess(unsigned int *a1, ACCESS_MASK a2)
{
  return EtwpCheckGuidAccess(a1, a2, 0LL);
}
