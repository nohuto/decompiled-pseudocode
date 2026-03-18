/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0012118
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0068340 (VidSchiCheckNodeTimeout.c)
 *     VidSchSubmitPagingCommand @ 0x1C007780C (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C00848E0 (VidSchiSubmitPagingCommand.c)
 *     VidSchCreateSystemDevices @ 0x1C0095D94 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D0FCC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D1114 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D145C (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00D2C20 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00D31C0 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00D46E0 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D47E8 (VidSchiSubmitHwPagingCommand.c)
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
