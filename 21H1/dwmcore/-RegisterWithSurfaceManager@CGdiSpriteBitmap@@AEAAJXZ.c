/*
 * XREFs of ?RegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAJXZ @ 0x18008F184
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  __int64 *v1; // r8
  __int64 v2; // rdx
  __int64 **v3; // rax

  if ( !*((_BYTE *)this + 125) )
  {
    v1 = (__int64 *)((char *)this + 168);
    v2 = *((_QWORD *)g_pComposition + 12) + 176LL;
    v3 = *(__int64 ***)(*((_QWORD *)g_pComposition + 12) + 184LL);
    if ( *v3 != (__int64 *)v2 )
      __fastfail(3u);
    *v1 = v2;
    *((_QWORD *)this + 22) = v3;
    *v3 = v1;
    *(_QWORD *)(v2 + 8) = v1;
    *((_BYTE *)this + 125) = 1;
  }
  return 0LL;
}
