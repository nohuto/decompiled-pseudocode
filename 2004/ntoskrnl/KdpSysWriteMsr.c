/*
 * XREFs of KdpSysWriteMsr @ 0x14050CA50
 * Callers:
 *     KdSystemDebugControl @ 0x1408B6A60 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
