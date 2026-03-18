/*
 * XREFs of _GetWndSBDisableFlags@8 @ 0xC1ECC
 * Callers:
 *     _xxxDrawScrollBar@12 @ 0xC1AFC (_xxxDrawScrollBar@12.c)
 *     ?HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z @ 0x1A2A4A (-HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A2EF2 (-xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall GetWndSBDisableFlags(int a1, int a2)
{
  int *v2; // eax
  int v3; // eax

  v2 = *(int **)(a1 + 84);
  if ( v2 )
  {
    v3 = *v2;
    if ( a2 )
      v3 >>= 2;
    return v3 & 3;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x5A7);
    return 0;
  }
}
