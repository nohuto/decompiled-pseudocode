/*
 * XREFs of ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x180255F08
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180255464 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     <none>
 */

struct IRenderTargetBitmap *__fastcall CHolographicInteropTexture::BeginFrame(
        RTL_SRWLOCK *this,
        __int64 a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v6; // rbp

  v3 = this + 49;
  v4 = a3;
  AcquireSRWLockExclusive(this + 49);
  v6 = 0LL;
  if ( HIDWORD(this[28].Ptr) && (unsigned int)v4 < LODWORD(this[29].Ptr) )
  {
    if ( v4 >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
      JUMPOUT(0x180255FACLL);
    }
    _mm_lfence();
    v6 = *(_QWORD *)this[v4 + 24].Ptr;
    _mm_lfence();
    **((_DWORD **)this[v4 + 24].Ptr + 2) = 0;
  }
  ReleaseSRWLockExclusive(v3);
  return (struct IRenderTargetBitmap *)v6;
}
