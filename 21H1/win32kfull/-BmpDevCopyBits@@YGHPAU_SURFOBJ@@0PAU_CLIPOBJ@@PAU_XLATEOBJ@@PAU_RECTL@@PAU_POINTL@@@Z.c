/*
 * XREFs of ?BmpDevCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x1F9AA2
 * Callers:
 *     <none>
 * Callees:
 *     ?BmpDevBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1F993A (-BmpDevBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ.c)
 */

struct _SURFOBJ *__stdcall BmpDevCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  return BmpDevBitBlt(a1, a2, 0, a3, a4, a5, a6, 0, 0, 0, 0xCCCCu);
}
