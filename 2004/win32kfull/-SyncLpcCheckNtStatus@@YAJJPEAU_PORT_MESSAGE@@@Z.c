/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C003E158
 * Callers:
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C003DF10 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C003E010 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncDesktopSwitch @ 0x1C004C134 (DwmSyncDesktopSwitch.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0057260 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C0058B3C (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncHitTestQuery @ 0x1C00BAB30 (DwmSyncHitTestQuery.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C01125E0 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0276760 (DwmSyncMagnUpdateWindowSharedTextures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SyncLpcCheckNtStatus(int a1, struct _PORT_MESSAGE *a2)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return (unsigned int)a1;
  if ( a1 == 192 )
    return 3221225473LL;
  if ( a1 == 258 )
    return 3221225473LL;
  result = (unsigned int)a1;
  if ( ((unsigned __int16)a2->u2.s2.Type & 0xFFFF00FF) != 2 )
    return 3221225473LL;
  return result;
}
