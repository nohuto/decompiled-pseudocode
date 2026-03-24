/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0001898
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1C006DEEC (VidSchSubmitPagingCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0080D90 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0086C40 (VidSchiSubmitPagingCommand.c)
 *     VidSchCreateSystemDevices @ 0x1C009922C (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D019C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D02E4 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D062C (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00D1EC0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00D2460 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00D39A0 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D3AA8 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 624);
  if ( a2 < *(_DWORD *)(a1 + 696) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
