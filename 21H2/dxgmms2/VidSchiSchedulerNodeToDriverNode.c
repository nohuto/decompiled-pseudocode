/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C0031824
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0080D90 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D019C (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C00D1EC0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00D2460 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00D39A0 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 624);
  if ( a2 < *(_DWORD *)(a1 + 696) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 8LL);
}
