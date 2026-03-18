/*
 * XREFs of ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4
 * Callers:
 *     _DwmSyncDesktopSwitch@12 @ 0xB257C (_DwmSyncDesktopSwitch@12.c)
 *     _DwmSyncCaptureSurfaceBits@44 @ 0xB368E (_DwmSyncCaptureSurfaceBits@44.c)
 *     _DwmSyncNotifyMinimizing@8 @ 0xB4E30 (_DwmSyncNotifyMinimizing@8.c)
 *     _DwmSyncHitTestQuery@40 @ 0xBF4BC (_DwmSyncHitTestQuery@40.c)
 *     _DwmSyncGetCompositionAttribute@16 @ 0xBFC92 (_DwmSyncGetCompositionAttribute@16.c)
 *     _DwmSyncFlushForceRenderAndWaitForBatch@8 @ 0x1D2B50 (_DwmSyncFlushForceRenderAndWaitForBatch@8.c)
 *     _DwmSyncGetTitleBarInfo@16 @ 0x1D2C74 (_DwmSyncGetTitleBarInfo@16.c)
 *     _DwmSyncMagnUpdateWindowSharedTextures@44 @ 0x1D2D8F (_DwmSyncMagnUpdateWindowSharedTextures@44.c)
 * Callees:
 *     <none>
 */

int __fastcall SyncLpcCheckNtStatus(int a1, int a2)
{
  int result; // eax

  if ( a1 < 0 )
    return a1;
  if ( a1 == 192 )
    return -1073741823;
  if ( a1 == 258 )
    return -1073741823;
  result = a1;
  if ( (*(unsigned __int16 *)(a2 + 4) & 0xFFFF00FF) != 2 )
    return -1073741823;
  return result;
}
