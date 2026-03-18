/*
 * XREFs of _XLATEOBJ_hGetColorTransform@4 @ 0x225847
 * Callers:
 *     _NtGdiXLATEOBJ_hGetColorTransform@4 @ 0x21B531 (_NtGdiXLATEOBJ_hGetColorTransform@4.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall XLATEOBJ_hGetColorTransform(XLATEOBJ *pxlo)
{
  int v1; // ecx
  int v2; // eax
  void *v3; // esi

  if ( !pxlo )
    return 0;
  if ( (pxlo[2].cEntries & 2) == 0 )
    return 0;
  v1 = *(_DWORD *)&pxlo[2].iSrcType;
  if ( !v1 )
    return 0;
  v2 = HmgShareLockCheck(v1, 14);
  if ( !v2 )
    return 0;
  v3 = *(void **)(v2 + 16);
  DEC_SHARE_REF_CNT(v2);
  return v3;
}
