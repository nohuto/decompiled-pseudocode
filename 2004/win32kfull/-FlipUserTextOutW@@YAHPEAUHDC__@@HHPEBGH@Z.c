/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011241C
 * Callers:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0062C10 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0112300 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     GreSetGraphicsMode @ 0x1C02BFEA4 (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, int a2, int a3, unsigned __int16 *a4)
{
  unsigned int v8; // ebx
  int TextAlign; // eax
  int v11; // ebp

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      TextAlign = GreGetTextAlign(a1);
      v11 = TextAlign;
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
      v8 = GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1, v11);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
  }
  return v8;
}
