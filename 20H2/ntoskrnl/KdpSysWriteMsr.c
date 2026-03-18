/*
 * XREFs of KdpSysWriteMsr @ 0x140510380
 * Callers:
 *     KdSystemDebugControl @ 0x1408BC680 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1409BB4F4 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
