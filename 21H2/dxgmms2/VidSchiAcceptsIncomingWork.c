/*
 * XREFs of VidSchiAcceptsIncomingWork @ 0x1C0009598
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C0080820 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchTerminateAdapter @ 0x1C00D2C00 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiAcceptsIncomingWork(__int64 a1)
{
  return ((*(_DWORD *)(a1 + 304) - 1) & 0xFFFFFFFD) == 0;
}
