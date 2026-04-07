/*
 * XREFs of ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x180049488
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800493F8 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::CFullScreenMagnifier(
        CFullScreenMagnifier *this,
        struct CVisual *a2)
{
  *(_QWORD *)this = &CFullScreenMagnifier::`vftable';
  *((_QWORD *)this + 3) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)((char *)this + 52) = xmmword_1800CF8F0;
  *(_OWORD *)((char *)this + 152) = xmmword_1800CF8F0;
  *(_OWORD *)((char *)this + 68) = xmmword_1800CF900;
  *(_OWORD *)((char *)this + 168) = xmmword_1800CF900;
  *(_OWORD *)((char *)this + 84) = xmmword_1800CF910;
  *(_OWORD *)((char *)this + 184) = xmmword_1800CF910;
  *(_OWORD *)((char *)this + 100) = xmmword_1800CF920;
  *(_OWORD *)((char *)this + 200) = xmmword_1800CF920;
  *(_OWORD *)((char *)this + 116) = xmmword_1800CF930;
  *(_OWORD *)((char *)this + 216) = xmmword_1800CF930;
  *(_OWORD *)((char *)this + 132) = xmmword_1800CF940;
  *((_DWORD *)this + 37) = 1065353216;
  *(_OWORD *)((char *)this + 232) = xmmword_1800CF940;
  *((_DWORD *)this + 62) = 1065353216;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  return this;
}
