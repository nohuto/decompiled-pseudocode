/*
 * XREFs of ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0020EF0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C00230E4 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Grow(CLegacyTokenBuffer *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  CLegacyTokenBuffer **v7; // rdx

  v5 = -1073741801;
  v6 = operator new[](0x818uLL, 0x62744D54u, 256LL, a4);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 2068) = 0;
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
    v7 = (CLegacyTokenBuffer **)*((_QWORD *)this + 3);
    if ( *v7 != (CLegacyTokenBuffer *)((char *)this + 16) )
      __fastfail(3u);
    *(_QWORD *)v6 = (char *)this + 16;
    v5 = 0;
    *(_QWORD *)(v6 + 8) = v7;
    *v7 = (CLegacyTokenBuffer *)v6;
    *((_QWORD *)this + 3) = v6;
    *((_QWORD *)this + 262) = v6 + 20;
    *((_QWORD *)this + 261) = v6;
    *((_DWORD *)this + 526) = 2048;
  }
  return v5;
}
