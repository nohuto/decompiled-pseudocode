/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800B3C00
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1800B4190 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E31B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3218 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_1803493A8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1803493A8);
    if ( dword_1803493A8 == -1 )
    {
      qword_180343B3C = 8LL;
      dword_180343B34 = 1;
      dword_180343B38 = 1;
      xmmword_180343B14 = xmmword_1802DE000;
      word_180343B44 = 0;
      xmmword_180343B24 = xmmword_1802DE000;
      qword_180343B68 = 1LL;
      xmmword_180343B48 = xmmword_1802DE000;
      qword_180343B70 = 7LL;
      xmmword_180343B58 = xmmword_1802DE000;
      word_180343B78 = 0;
      xmmword_180343B7C = xmmword_1802DE000;
      dword_180343B9C = 1;
      xmmword_180343B8C = xmmword_1802DE000;
      dword_180343BA0 = 1;
      xmmword_180343BB0 = xmmword_1802DE000;
      qword_180343BA4 = 7LL;
      xmmword_180343BC0 = xmmword_1802DE000;
      word_180343BAC = 0;
      Init_thread_footer(&dword_1803493A8);
    }
  }
  return (char *)&unk_180343B00 + 52 * v1;
}
