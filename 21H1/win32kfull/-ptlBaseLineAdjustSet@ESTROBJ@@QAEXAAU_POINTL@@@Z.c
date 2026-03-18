/*
 * XREFs of ?ptlBaseLineAdjustSet@ESTROBJ@@QAEXAAU_POINTL@@@Z @ 0x207CEA
 * Callers:
 *     ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3 (-GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z.c)
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z @ 0x22419E (-bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall ESTROBJ::ptlBaseLineAdjustSet(ESTROBJ *this, struct _POINTL *a2)
{
  LONG y; // eax
  unsigned int v3; // edx
  int v4; // edi
  int v5; // ebx

  *((_DWORD *)this + 50) = a2->x;
  y = a2->y;
  v3 = 0;
  *((_DWORD *)this + 51) = y;
  if ( (*((_DWORD *)this + 50) || y) && *(_DWORD *)this )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      if ( *(_DWORD *)(v5 + *((_DWORD *)this + 45)) == *((_DWORD *)this + 49) )
      {
        *(_DWORD *)(*((_DWORD *)this + 12) + v4 + 8) += *((_DWORD *)this + 50);
        *(_DWORD *)(*((_DWORD *)this + 12) + v4 + 12) += *((_DWORD *)this + 51);
        ++v3;
      }
      v5 += 4;
      v4 += 16;
    }
    while ( v3 < *(_DWORD *)this );
  }
}
