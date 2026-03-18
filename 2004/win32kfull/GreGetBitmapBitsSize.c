/*
 * XREFs of GreGetBitmapBitsSize @ 0x1C0066DD4
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C00669D0 (NtGdiCreateDIBSection.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00F2BF0 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C01071E0 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C021F8F8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B61EC (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x1C02B6E20 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ?noOverflowCJSCAN@@YAKKGGK@Z @ 0x1C0066E28 (-noOverflowCJSCAN@@YAKKGGK@Z.c)
 */

unsigned int __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned __int16 v4; // r8
  unsigned int v5; // ecx
  unsigned __int16 v6; // dx
  unsigned int v7; // r9d

  if ( *(_DWORD *)a1 == 12 )
  {
    v7 = *(unsigned __int16 *)(a1 + 6);
    v5 = *(unsigned __int16 *)(a1 + 4);
    v4 = *(_WORD *)(a1 + 10);
    v6 = *(_WORD *)(a1 + 8);
    return noOverflowCJSCAN(v5, v6, v4, v7);
  }
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 <= 0xA )
  {
    v3 = 1033;
    if ( _bittest(&v3, v2) )
    {
      v4 = *(_WORD *)(a1 + 14);
      v5 = *(_DWORD *)(a1 + 4);
      v6 = *(_WORD *)(a1 + 12);
      v7 = abs32(*(_DWORD *)(a1 + 8));
      return noOverflowCJSCAN(v5, v6, v4, v7);
    }
  }
  return *(_DWORD *)(a1 + 20);
}
