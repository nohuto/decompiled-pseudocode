/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x1800199A0
 * Callers:
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18000BEC0 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18000E3E4 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180013444 (-CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180013500 (-CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180013B94 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x1800162DC (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x1800163E4 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18003279C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18009BE18 (-Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800B5DA0 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this)
{
  CVisual *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 21) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 32) = 0x7FFFFFFF;
  *((_DWORD *)this + 34) = 0x7FFFFFFF;
  *((_DWORD *)this + 33) = 0x7FFFFFFF;
  *((_DWORD *)this + 35) = 0x7FFFFFFF;
  result = this;
  *((_DWORD *)this + 48) = -2;
  *((_QWORD *)this + 5) = this;
  return result;
}
