/*
 * XREFs of ??0CVisualSurface@@QEAA@PEAVCComposition@@@Z @ 0x18016D06C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CVisualSurface *__fastcall CVisualSurface::CVisualSurface(CVisualSurface *this, struct CComposition *a2)
{
  CVisualSurface *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisualSurface::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 2;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_QWORD *)this + 13) = (char *)this + 120;
  *((_QWORD *)this + 14) = (char *)this + 152;
  result = this;
  *((_WORD *)this + 76) = 0;
  return result;
}
