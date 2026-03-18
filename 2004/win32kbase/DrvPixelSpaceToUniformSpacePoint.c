/*
 * XREFs of DrvPixelSpaceToUniformSpacePoint @ 0x1C0015AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C0012C90 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 */

__int64 __fastcall DrvPixelSpaceToUniformSpacePoint(int *a1, int *a2)
{
  return TransformPointWithUniformSpaceMapping(*(struct _MDEV **)(gpDispInfo + 16), a1, a2, 0);
}
