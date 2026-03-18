/*
 * XREFs of ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x1800D4490
 * Callers:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800D43C8 (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x180060B4C (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 */

__int64 __fastcall CBackdropVisualImage::Initialize(CBackdropVisualImage *this)
{
  bool v2; // zf
  __int64 v3; // rcx

  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 87;
  *((_DWORD *)this + 41) = 1;
  CCachedVisualImage::ChoosePixelFormat(this);
  v2 = *((_BYTE *)this + 1953) == 0;
  *((_BYTE *)this + 1776) = 1;
  if ( !v2 )
    *((_QWORD *)this + 204) = this;
  v3 = *((_QWORD *)this + 223);
  *((_BYTE *)this + 1912) = 1;
  if ( (*(_BYTE *)(v3 + 272) & 1) == 0
    || (v2 = (*(_BYTE *)(v3 + 102) & 8) == 0, *((_BYTE *)this + 1912) = (*(_BYTE *)(v3 + 102) & 8) != 0, !v2) )
  {
    if ( (**(_DWORD **)(v3 + 232) & 0x200000) != 0 )
      *((_BYTE *)this + 1912) = *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v3) + 303);
  }
  return 0LL;
}
