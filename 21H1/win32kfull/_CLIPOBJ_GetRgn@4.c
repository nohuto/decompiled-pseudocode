/*
 * XREFs of _CLIPOBJ_GetRgn@4 @ 0x1CCC71
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ @ 0x22A08 (-hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ.c)
 */

HANDLE __stdcall CLIPOBJ_GetRgn(CLIPOBJ *pco)
{
  struct HOBJ__ *v1; // edi
  struct OBJECT *v3[2]; // [esp+8h] [ebp-8h] BYREF

  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v3);
  v1 = 0;
  if ( !v3[0]
    || !RGNOBJ::bCopy((RGNOBJ *)v3, pco != 0 ? (struct RGNOBJ *)&pco[2] : 0)
    || (v1 = RGNOBJ::hrgnAssociate(v3)) == 0 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v3);
  }
  if ( v3[1] == (struct OBJECT *)1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v3);
  return v1;
}
