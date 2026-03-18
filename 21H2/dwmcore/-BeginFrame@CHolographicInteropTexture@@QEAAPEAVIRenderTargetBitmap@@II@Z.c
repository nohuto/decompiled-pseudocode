/*
 * XREFs of ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x18029B0F8
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x18029A484 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
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

  v3 = this + 51;
  v4 = a3;
  AcquireSRWLockExclusive(this + 51);
  v6 = 0LL;
  if ( HIDWORD(this[30].Ptr) && (unsigned int)v4 < LODWORD(this[31].Ptr) )
  {
    if ( v4 >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
      JUMPOUT(0x18029B19CLL);
    }
    _mm_lfence();
    v6 = *(_QWORD *)this[v4 + 26].Ptr;
    _mm_lfence();
    **((_DWORD **)this[v4 + 26].Ptr + 2) = 0;
  }
  ReleaseSRWLockExclusive(v3);
  return (struct IRenderTargetBitmap *)v6;
}
