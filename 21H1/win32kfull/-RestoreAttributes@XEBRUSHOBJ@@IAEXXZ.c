/*
 * XREFs of ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338
 * Callers:
 *     _GreExtCreatePen@44 @ 0xA90C4 (_GreExtCreatePen@44.c)
 *     _GreMarkDeletableBrush@4 @ 0xE9408 (_GreMarkDeletableBrush@4.c)
 *     ?cjGetBrushOrPen@@YGJPAXH0@Z @ 0x1FD0B9 (-cjGetBrushOrPen@@YGJPAXH0@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     ?GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z @ 0x21B8CC (-GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z @ 0x21BA5A (-GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z.c)
 *     _GreGetObjectBitmapHandle@8 @ 0x21E0A5 (_GreGetObjectBitmapHandle@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall XEBRUSHOBJ::RestoreAttributes(XEBRUSHOBJ *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // edx
  _DWORD *v3; // ecx

  if ( *((_DWORD *)this + 1) )
  {
    v1 = *(_DWORD **)this;
    v2 = v1 + 10;
    if ( (_DWORD *)v1[8] == v1 + 10 )
    {
      v3 = (_DWORD *)v1[9];
      *v3 = *v2;
      v3[1] = v2[1];
      *(_DWORD *)(*(_DWORD *)this + 32) = *(_DWORD *)(*(_DWORD *)this + 36);
    }
  }
  *((_DWORD *)this + 1) = 0;
}
