/*
 * XREFs of _DecPaintCount@4 @ 0xAA80E
 * Callers:
 *     _ClrFTrueVis@4 @ 0x1CDFA (_ClrFTrueVis@4.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 *     _xxxDoPaint@8 @ 0x6BD40 (_xxxDoPaint@8.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z @ 0x73A88 (-GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall DecPaintCount(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = this[2];
  if ( (*(_DWORD *)(v1 + 320))-- == 1 )
  {
    *(_WORD *)(*(_DWORD *)(v1 + 244) + 6) &= ~0x20u;
    result = *(_DWORD *)(v1 + 244);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
