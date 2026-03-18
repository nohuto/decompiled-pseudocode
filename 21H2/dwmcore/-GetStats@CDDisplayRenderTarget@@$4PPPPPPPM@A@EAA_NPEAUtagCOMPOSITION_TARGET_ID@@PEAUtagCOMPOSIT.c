/*
 * XREFs of ?GetStats@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180106050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::GetStats(
        __int64 a1,
        struct tagCOMPOSITION_TARGET_ID *a2,
        struct tagCOMPOSITION_TARGET_STATS *a3)
{
  return CDDisplayRenderTarget::GetStats((CDDisplayRenderTarget *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
