/*
 * XREFs of _GreGetAspectRatioFilter@8 @ 0x1EBA7A
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 */

int __stdcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v4; // esi
  int v5; // ecx
  unsigned int v6; // eax
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = a2;
  if ( a2 )
  {
    v4 = 0;
    memset(v7, 0, sizeof(v7));
    XDCOBJ::vLock((XDCOBJ *)v7, a1);
    v5 = v7[0];
    if ( v7[0] )
    {
      a2 = *(_DWORD **)(v7[0] + 36);
      if ( (*(_BYTE *)(*(_DWORD *)(v7[0] + 1020) + 256) & 1) != 0 )
      {
        *v2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a2);
        v6 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a2);
        v5 = v7[0];
        v4 = v6;
      }
      else
      {
        *v2 = 0;
      }
      v2[1] = v4;
      v4 = 1;
    }
    else
    {
      EngSetLastError(6u);
      v5 = v7[0];
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    return v4;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0;
  }
}
