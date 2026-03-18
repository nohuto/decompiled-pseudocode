/*
 * XREFs of KdpSysWriteMsr @ 0x140565E20
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140A6FB80 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
