/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ @ 0x22A08
 * Callers:
 *     _NtGdiCreateRoundRectRgn@24 @ 0x2245E (_NtGdiCreateRoundRectRgn@24.c)
 *     ?GrepSfmGetDirtyRgn@@YGJPAVSFMLOGICALSURFACE@@_KPAPAUHRGN__@@222PAU_POINTL@@PAH4@Z @ 0x227E8 (-GrepSfmGetDirtyRgn@@YGJPAVSFMLOGICALSURFACE@@_KPAPAUHRGN__@@222PAU_POINTL@@PAH4@Z.c)
 *     _CLIPOBJ_GetRgn@4 @ 0x1CCC71 (_CLIPOBJ_GetRgn@4.c)
 *     _NtGdiCreateEllipticRgn@16 @ 0x1FDFC4 (_NtGdiCreateEllipticRgn@16.c)
 *     _NtGdiPathToRegion@4 @ 0x211A5D (_NtGdiPathToRegion@4.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 */

struct HOBJ__ *__thiscall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // eax
  struct HOBJ__ *result; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v1 = *this;
  v3 = 0;
  result = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v3, v1, 4u, 0);
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
  return result;
}
