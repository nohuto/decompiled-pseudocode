/*
 * XREFs of ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x180256F64
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180256294 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::EndFrame(RTL_SRWLOCK *this, __int64 a2, unsigned int a3, char a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rsi

  v4 = this + 49;
  v5 = a3;
  AcquireSRWLockExclusive(this + 49);
  if ( HIDWORD(this[28].Ptr) && (unsigned int)v5 < LODWORD(this[29].Ptr) )
  {
    if ( v5 >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
    }
    *((_BYTE *)this[v5 + 24].Ptr + 88) = a4;
  }
  ReleaseSRWLockExclusive(v4);
}
