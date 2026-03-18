/*
 * XREFs of ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014CF4C
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0243EB4 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244694 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244954 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     xxxGetControlBrush @ 0x1C0146454 (xxxGetControlBrush.c)
 */

__int64 __fastcall xxxGetColorObjects(struct tagWND *a1, unsigned __int64 a2)
{
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29A )
    return xxxGetControlBrush(a1);
  else
    return xxxDefWindowProc(a1, 0x137u, a2, *(_QWORD *)a1);
}
