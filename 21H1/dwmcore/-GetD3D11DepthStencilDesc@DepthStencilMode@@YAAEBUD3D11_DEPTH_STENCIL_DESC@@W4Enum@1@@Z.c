/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800A0E10
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1800A02CC (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_18034D400 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034D400);
    if ( dword_18034D400 == -1 )
    {
      qword_180347B3C = 8LL;
      dword_180347B34 = 1;
      dword_180347B38 = 1;
      xmmword_180347B14 = xmmword_1802E0ED8;
      word_180347B44 = 0;
      xmmword_180347B24 = xmmword_1802E0ED8;
      qword_180347B68 = 1LL;
      xmmword_180347B48 = xmmword_1802E0ED8;
      qword_180347B70 = 7LL;
      xmmword_180347B58 = xmmword_1802E0ED8;
      word_180347B78 = 0;
      xmmword_180347B7C = xmmword_1802E0ED8;
      dword_180347B9C = 1;
      xmmword_180347B8C = xmmword_1802E0ED8;
      dword_180347BA0 = 1;
      xmmword_180347BB0 = xmmword_1802E0ED8;
      qword_180347BA4 = 7LL;
      xmmword_180347BC0 = xmmword_1802E0ED8;
      word_180347BAC = 0;
      Init_thread_footer(&dword_18034D400);
    }
  }
  return (char *)&unk_180347B00 + 52 * v1;
}
