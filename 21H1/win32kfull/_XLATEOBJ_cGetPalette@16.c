/*
 * XREFs of _XLATEOBJ_cGetPalette@16 @ 0x2257C0
 * Callers:
 *     _NtGdiXLATEOBJ_cGetPalette@16 @ 0x21B468 (_NtGdiXLATEOBJ_cGetPalette@16.c)
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z @ 0xAD8F8 (-ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall XLATEOBJ_cGetPalette(XLATEOBJ *pxlo, ULONG iPal, ULONG cPal, ULONG *pPal)
{
  ULONG v4; // esi
  ULONG *iUniq; // eax
  ULONG *pulXlate; // edx
  ULONG *v7; // ecx

  v4 = 0;
  if ( !pxlo )
    return v4;
  if ( iPal == 4 )
  {
    pulXlate = pxlo[1].pulXlate;
  }
  else
  {
    if ( iPal != 5 )
    {
      if ( iPal == 1 )
        iUniq = pxlo[1].pulXlate;
      else
        iUniq = (ULONG *)pxlo[2].iUniq;
      iPal = (ULONG)iUniq;
      if ( iUniq )
        return XEPALOBJ::ulGetEntries((XEPALOBJ *)&iPal, 0, cPal, (struct tagPALETTEENTRY *)pPal, 1);
      return v4;
    }
    pulXlate = (ULONG *)pxlo[2].iUniq;
  }
  if ( pulXlate && !pulXlate[5] && cPal == 3 )
  {
    v7 = pPal;
    v4 = 3;
    *pPal = *(_DWORD *)pulXlate[19];
    v7[1] = *(_DWORD *)(pulXlate[19] + 4);
    v7[2] = *(_DWORD *)(pulXlate[19] + 8);
  }
  return v4;
}
