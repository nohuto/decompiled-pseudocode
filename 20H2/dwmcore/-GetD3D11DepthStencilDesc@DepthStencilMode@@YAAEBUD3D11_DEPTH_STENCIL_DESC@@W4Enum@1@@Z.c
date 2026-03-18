/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x180051E9C
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x18005270C (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E34C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3528 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_180348398 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180348398);
    if ( dword_180348398 == -1 )
    {
      qword_180342B3C = 8LL;
      dword_180342B34 = 1;
      dword_180342B38 = 1;
      xmmword_180342B14 = xmmword_1802DCF50;
      word_180342B44 = 0;
      xmmword_180342B24 = xmmword_1802DCF50;
      qword_180342B68 = 1LL;
      xmmword_180342B48 = xmmword_1802DCF50;
      qword_180342B70 = 7LL;
      xmmword_180342B58 = xmmword_1802DCF50;
      word_180342B78 = 0;
      xmmword_180342B7C = xmmword_1802DCF50;
      dword_180342B9C = 1;
      xmmword_180342B8C = xmmword_1802DCF50;
      dword_180342BA0 = 1;
      xmmword_180342BB0 = xmmword_1802DCF50;
      qword_180342BA4 = 7LL;
      xmmword_180342BC0 = xmmword_1802DCF50;
      word_180342BAC = 0;
      Init_thread_footer(&dword_180348398);
    }
  }
  return (char *)&unk_180342B00 + 52 * v1;
}
