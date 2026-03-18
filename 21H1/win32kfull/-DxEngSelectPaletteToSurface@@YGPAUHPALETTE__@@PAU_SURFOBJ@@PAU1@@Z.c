/*
 * XREFs of ?DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z @ 0xF6256
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     ??0EPALOBJ@@QAE@PAUHPALETTE__@@@Z @ 0xA9642 (--0EPALOBJ@@QAE@PAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QAE@XZ @ 0xAAD84 (--1EPALOBJ@@QAE@XZ.c)
 *     ?vRefPalette@XEPALOBJ@@QAEXXZ @ 0xADBF4 (-vRefPalette@XEPALOBJ@@QAEXXZ.c)
 */

int __fastcall DxEngSelectPaletteToSurface(int a1, HPALETTE a2)
{
  int v3; // edi
  _DWORD *v4; // esi
  _DWORD *v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a2);
  if ( a1 )
  {
    if ( v7 )
    {
      v4 = *(_DWORD **)(a1 + 72);
      *(_DWORD *)(a1 + 72) = v7;
      XEPALOBJ::vRefPalette((XEPALOBJ *)&v7);
      if ( v4 )
      {
        v3 = *v4;
        v6 = v4;
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v6);
      }
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
  return v3;
}
