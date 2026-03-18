/*
 * XREFs of ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800BCFB4
 * Callers:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180003CA0 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x180004700 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000A3E8 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180068790 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A9060 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z @ 0x1800C8EA0 (-UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z @ 0x1800CD274 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___ @ 0x1800E6D34 (CComposition--ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801F844C (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::_IsInTree(const struct CVisual **this, const struct CVisual *a2, char a3)
{
  char result; // al
  const struct CVisual *v4; // r9

  result = 0;
  v4 = a2;
  while ( a2 && (!a3 || (*((_BYTE *)a2 + 95) & 2) != 0 && (*((_BYTE *)a2 + 94) & 4) == 0) )
  {
    if ( a2 == this[7] )
      return 1;
    if ( v4 )
    {
      v4 = (const struct CVisual *)*((_QWORD *)v4 + 10);
      if ( v4 )
      {
        if ( a2 == v4 )
          return result;
        v4 = (const struct CVisual *)*((_QWORD *)v4 + 10);
        if ( a2 == v4 )
          return result;
      }
    }
    a2 = (const struct CVisual *)*((_QWORD *)a2 + 10);
  }
  return result;
}
