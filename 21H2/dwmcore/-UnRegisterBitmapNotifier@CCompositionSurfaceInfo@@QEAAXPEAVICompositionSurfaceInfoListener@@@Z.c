/*
 * XREFs of ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1800C76C4
 * Callers:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800C7524 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C78C0 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C7704 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 */

void __fastcall CCompositionSurfaceInfo::UnRegisterBitmapNotifier(
        CCompositionSurfaceInfo *this,
        struct ICompositionSurfaceInfoListener *a2)
{
  struct ICompositionSurfaceInfoListener **i; // rdx

  for ( i = (struct ICompositionSurfaceInfoListener **)*((_QWORD *)this + 6);
        i != *((struct ICompositionSurfaceInfoListener ***)this + 7);
        ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 48,
        ((__int64)i - *((_QWORD *)this + 6)) >> 3);
      return;
    }
  }
}
