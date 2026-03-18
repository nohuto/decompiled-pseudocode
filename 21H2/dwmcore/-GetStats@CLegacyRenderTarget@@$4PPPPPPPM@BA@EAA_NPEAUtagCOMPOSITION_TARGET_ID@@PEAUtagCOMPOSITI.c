/*
 * XREFs of ?GetStats@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180106090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacyRenderTarget::GetStats(
        __int64 a1,
        struct tagCOMPOSITION_TARGET_ID *a2,
        struct tagCOMPOSITION_TARGET_STATS *a3)
{
  return CLegacyRenderTarget::GetStats((CLegacyRenderTarget *)(a1 - *(int *)(a1 - 4) - 16), a2, a3);
}
