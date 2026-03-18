/*
 * XREFs of ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368
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
 *     ?bSaveAttributes@XEBRUSHOBJ@@IAEHXZ @ 0xA939C (-bSaveAttributes@XEBRUSHOBJ@@IAEHXZ.c)
 */

BRUSHSELOBJ *__thiscall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  int v3; // eax

  *((_DWORD *)this + 1) = 0;
  v3 = HmgShareLockCheck(a2, 16);
  *(_DWORD *)this = v3;
  if ( v3 && !XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(_DWORD *)this);
    *(_DWORD *)this = 0;
  }
  return this;
}
