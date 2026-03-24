/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800452FC
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180045B6C (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E7910 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E7978 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_18034B320 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034B320);
    if ( dword_18034B320 == -1 )
    {
      qword_180345B3C = 8LL;
      dword_180345B34 = 1;
      dword_180345B38 = 1;
      xmmword_180345B14 = xmmword_1802E0050;
      word_180345B44 = 0;
      xmmword_180345B24 = xmmword_1802E0050;
      qword_180345B68 = 1LL;
      xmmword_180345B48 = xmmword_1802E0050;
      qword_180345B70 = 7LL;
      xmmword_180345B58 = xmmword_1802E0050;
      word_180345B78 = 0;
      xmmword_180345B7C = xmmword_1802E0050;
      dword_180345B9C = 1;
      xmmword_180345B8C = xmmword_1802E0050;
      dword_180345BA0 = 1;
      xmmword_180345BB0 = xmmword_1802E0050;
      qword_180345BA4 = 7LL;
      xmmword_180345BC0 = xmmword_1802E0050;
      word_180345BAC = 0;
      Init_thread_footer(&dword_18034B320);
    }
  }
  return (char *)&unk_180345B00 + 52 * v1;
}
