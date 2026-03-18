/*
 * XREFs of VidSchiAcceptsIncomingWork @ 0x1C00083A8
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C0067DD0 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchTerminateAdapter @ 0x1C00D3950 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiAcceptsIncomingWork(__int64 a1)
{
  return ((*(_DWORD *)(a1 + 304) - 1) & 0xFFFFFFFD) == 0;
}
