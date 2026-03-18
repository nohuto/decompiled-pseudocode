/*
 * XREFs of KeIsImageIATProtected @ 0x14056A188
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 *     VfUtilIsProtectedDriver @ 0x140A81E5C (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsImageIATProtected(__int64 a1)
{
  return HIBYTE(*(unsigned __int16 *)(a1 + 110)) & 1;
}
