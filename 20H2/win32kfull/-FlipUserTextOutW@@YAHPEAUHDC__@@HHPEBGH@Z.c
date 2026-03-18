/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011393C
 * Callers:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C008FBB4 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0113820 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02BE944 (GreSetGraphicsMode.c)
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
