/*
 * XREFs of ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x180404FC0
 * Callers:
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180403700 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDragVisual::_SetWindowRgn(CDragVisual *this)
{
  HRGN RectRgn; // rax
  HRGN v3; // rbx

  if ( !*((_BYTE *)this + 280) )
  {
    RectRgn = CreateRectRgn(
                _mm_cvtsi128_si32(*((__m128i *)this + 13)) - *((_DWORD *)this + 48),
                *((_DWORD *)this + 49) + HIDWORD(*((_QWORD *)this + 26)),
                (unsigned int)*((_QWORD *)this + 27) - *((_DWORD *)this + 48),
                *((_DWORD *)this + 49) + HIDWORD(*((_OWORD *)this + 13)));
    v3 = RectRgn;
    if ( RectRgn && SetWindowRgn(*((HWND *)this + 19), RectRgn, 1) )
    {
      *((_BYTE *)this + 280) = 1;
      v3 = 0LL;
    }
    if ( v3 )
      DeleteObject(v3);
  }
}
