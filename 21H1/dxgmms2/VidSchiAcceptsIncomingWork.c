/*
 * XREFs of VidSchiAcceptsIncomingWork @ 0x1C0008B78
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C007EE90 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchTerminateAdapter @ 0x1C00D3F70 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiAcceptsIncomingWork(__int64 a1)
{
  return ((*(_DWORD *)(a1 + 304) - 1) & 0xFFFFFFFD) == 0;
}
