/*
 * XREFs of ?FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z @ 0x91098
 * Callers:
 *     ?DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z @ 0x8FEF0 (-DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x907DA (-DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 * Callees:
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     _GreSetGraphicsMode@8 @ 0x226087 (_GreSetGraphicsMode@8.c)
 */

int __userpurge FlipUserTextOutW@<eax>(
        ERECTL *a1@<edx>,
        HDC a2@<ecx>,
        struct XDCOBJ *a3,
        unsigned __int16 *a4,
        int a5,
        const unsigned __int16 *a6,
        int a7)
{
  int v8; // esi
  int v10; // eax

  if ( (GreGetLayout(a2) & 1) == 0 )
    return GreExtTextOutWInternal(a2, a1, a3, 0, 0, a4, (struct tagRECT *)1, 0, 0, 0);
  v10 = *a4;
  if ( v10 != 97 && v10 != 98 )
    return GreExtTextOutWInternal(a2, a1, a3, 0, 0, a4, (struct tagRECT *)1, 0, 0, 0);
  v8 = 0;
  if ( GreSetGraphicsMode(a2) )
  {
    if ( (GreGetTextAlign(a2) & 6) != 6 )
      GreSetTextAlign(a2);
    v8 = GreExtTextOutWInternal(a2, a1, a3, 0, 0, a4, (struct tagRECT *)1, 0, 0, 0);
    GreSetGraphicsMode(a2);
    GreSetTextAlign(a2);
  }
  return v8;
}
