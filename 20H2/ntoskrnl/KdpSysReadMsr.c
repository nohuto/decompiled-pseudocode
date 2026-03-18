/*
 * XREFs of KdpSysReadMsr @ 0x140510294
 * Callers:
 *     KdSystemDebugControl @ 0x1408BC680 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1409BB4F4 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
