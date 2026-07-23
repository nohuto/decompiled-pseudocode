/*
 * XREFs of KdpSysWriteMsr @ 0x1405120F0
 * Callers:
 *     KdSystemDebugControl @ 0x1408B9CC0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
