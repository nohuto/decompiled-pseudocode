/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007AAC0
 * Callers:
 *     ?GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z @ 0x1C007AA30 (-GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z.c)
 *     GreExtCreateRegion @ 0x1C007C1C0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C5824 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0083BD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // rbx
  struct HOBJ__ *result; // rax

  v1 = *this;
  result = HmgInsertObjectInternal(*this, 1u, 4u);
  if ( result )
  {
    if ( v1 )
      _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
  }
  return result;
}
