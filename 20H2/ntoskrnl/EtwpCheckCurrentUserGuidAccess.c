/*
 * XREFs of EtwpCheckCurrentUserGuidAccess @ 0x140943CF0
 * Callers:
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140719768 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckCurrentUserGuidAccess(unsigned int *a1, ACCESS_MASK a2)
{
  return EtwpCheckGuidAccess(a1, a2, 0LL);
}
