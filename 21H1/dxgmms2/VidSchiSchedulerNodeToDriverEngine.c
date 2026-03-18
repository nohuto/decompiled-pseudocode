/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0001614
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1C00684BC (VidSchSubmitPagingCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C007F400 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0084EA0 (VidSchiSubmitPagingCommand.c)
 *     VidSchCreateSystemDevices @ 0x1C0095C74 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D15EC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D1734 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D1A7C (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00D3240 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00D37E0 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00D4CF4 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D4DFC (VidSchiSubmitHwPagingCommand.c)
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
