/*
 * XREFs of ?PostTextOut@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208DF9
 * Callers:
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

void __thiscall RFONTOBJ::PostTextOut(RFONTOBJ *this, struct XDCOBJ *a2)
{
  _DWORD *i; // edx
  int v4; // eax

  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 36) + 24) & 0x8080) == 0x80 && !*(_DWORD *)(*(_DWORD *)this + 64) )
  {
    a2 = (struct XDCOBJ *)ghsemPrintKView;
    GreAcquireSemaphore(ghsemPrintKView);
    for ( i = (_DWORD *)gpPrintKViewList; i; i = (_DWORD *)i[5] )
    {
      if ( *i == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 84) + 56) )
      {
        v4 = i[2];
        if ( v4 )
          i[2] = v4 - 1;
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&a2);
  }
}
