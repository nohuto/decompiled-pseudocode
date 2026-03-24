/*
 * XREFs of ?Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z @ 0x1C001CA08
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002FB0 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C001C9B8 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CLegacyTokenBuffer::TokenBlock::Create(
        struct CLegacyTokenBuffer::TokenBlock *a1,
        struct CLegacyTokenBuffer::TokenBlock **a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rax
  struct CLegacyTokenBuffer::TokenBlock **v6; // rcx

  *a2 = 0LL;
  v4 = -1073741801;
  v5 = operator new[](0x818uLL, 0x62744D54u, PagedPool);
  if ( v5 )
  {
    v5[4] = 0;
    v5[517] = 0;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
    v6 = (struct CLegacyTokenBuffer::TokenBlock **)*((_QWORD *)a1 + 1);
    if ( *v6 != a1 )
      __fastfail(3u);
    *(_QWORD *)v5 = a1;
    v4 = 0;
    *((_QWORD *)v5 + 1) = v6;
    *v6 = (struct CLegacyTokenBuffer::TokenBlock *)v5;
    *((_QWORD *)a1 + 1) = v5;
    *a2 = (struct CLegacyTokenBuffer::TokenBlock *)v5;
  }
  return v4;
}
