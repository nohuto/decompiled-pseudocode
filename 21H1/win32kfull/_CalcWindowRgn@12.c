/*
 * XREFs of _CalcWindowRgn@12 @ 0x9B782
 * Callers:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     ?GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z @ 0x73A88 (-GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CalcWindowRgn(int a1, int a2, int a3)
{
  int v5; // eax

  SetRectRgnIndirect(a2, *(_DWORD *)(a1 + 20) + (a3 != 0 ? 68 : 52));
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 108);
  if ( v5 )
    return GreCombineRgn(a2, a2, v5, 1);
  else
    return 2;
}
