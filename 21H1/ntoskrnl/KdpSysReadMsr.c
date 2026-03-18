/*
 * XREFs of KdpSysReadMsr @ 0x14050C314
 * Callers:
 *     KdSystemDebugControl @ 0x1408B5740 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
