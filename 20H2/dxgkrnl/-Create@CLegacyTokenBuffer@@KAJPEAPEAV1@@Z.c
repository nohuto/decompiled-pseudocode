/*
 * XREFs of ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0012284
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C001DFCC (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0012208 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Create(struct CLegacyTokenBuffer **a1)
{
  unsigned int v1; // ebx
  char *v3; // rax
  char *v4; // rdi
  char *v5; // rax

  v1 = 0;
  *a1 = 0LL;
  v3 = (char *)operator new[](0x840uLL, 0x746C4D54u, PagedPool);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 16;
    *((_QWORD *)v4 + 261) = v5;
    v4[2108] = 0;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 517) = 0;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
    CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v4);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    *a1 = (struct CLegacyTokenBuffer *)v4;
  else
    return (unsigned int)-1073741801;
  return v1;
}
