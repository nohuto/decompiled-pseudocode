/*
 * XREFs of ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0008C04
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C00230E4 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0008958 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Create(struct CLegacyTokenBuffer **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new[](2112LL, 1953254740LL, 256LL);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 16;
    *(_QWORD *)(v4 + 2088) = v5;
    *(_BYTE *)(v4 + 2108) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 2068) = 0;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v4);
    *a1 = (struct CLegacyTokenBuffer *)v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
