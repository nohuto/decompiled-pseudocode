/*
 * XREFs of ?IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z @ 0x89762
 * Callers:
 *     ?GetRealizationInfo@RFONTOBJ@@QAEHPAUtagFONT_REALIZATION_INFO2@@@Z @ 0x619DC (-GetRealizationInfo@RFONTOBJ@@QAEHPAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     ?dpNtmi@PFEOBJ@@QAEKXZ @ 0x89722 (-dpNtmi@PFEOBJ@@QAEKXZ.c)
 *     _vIFIMetricsToEnumLogFontExDvW@8 @ 0xDBF4C (_vIFIMetricsToEnumLogFontExDvW@8.c)
 * Callees:
 *     <none>
 */

char __thiscall IsVariableFont(_DWORD *this)
{
  int v1; // eax
  char v2; // dl
  int v4; // eax

  if ( (this[12] & 0x4000001) == 0 )
    return 0;
  if ( this[1] <= 0xCu )
    return 0;
  v1 = this[49];
  if ( !v1 )
    return 0;
  v2 = 0;
  if ( *(_DWORD *)((char *)this + v1 + 4) )
  {
    v4 = *(_DWORD *)((char *)this + v1);
    if ( v4 == 134248052 || v4 == 134248035 )
      return 1;
  }
  return v2;
}
