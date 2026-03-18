/*
 * XREFs of ?GetStats@CHolographicInteropTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x18010AC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHolographicInteropTarget::GetStats(
        __int64 a1,
        struct tagCOMPOSITION_TARGET_ID *a2,
        struct tagCOMPOSITION_TARGET_STATS *a3)
{
  return CHolographicInteropTarget::GetStats((CHolographicInteropTarget *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
