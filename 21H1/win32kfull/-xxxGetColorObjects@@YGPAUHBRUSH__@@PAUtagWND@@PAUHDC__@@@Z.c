/*
 * XREFs of ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A
 * Callers:
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YGXPAUtagSBWND@@@Z @ 0x1A28A9 (-DrawCtlThumb@@YGXPAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A2EF2 (-xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A30D9 (-xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxGetControlBrush@12 @ 0xBFA3E (_xxxGetControlBrush@12.c)
 */

int __fastcall xxxGetColorObjects(int *a1, int a2)
{
  if ( (*(_WORD *)(a1[5] + 30) & 0x3FFF) == 0x29A )
    return xxxGetControlBrush(a1, a2, 311);
  else
    return xxxDefWindowProc((int)a1, 311, a2, *a1);
}
