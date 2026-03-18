/*
 * XREFs of GetInputs @ 0x1800CD568
 * Callers:
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800CD4D0 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 */

_QWORD *__fastcall GetInputs(_QWORD *a1, int a2)
{
  __int64 v4; // rsi
  int v5; // edi
  int v6; // edi
  void *v7; // rax

  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18034D3F8 > *(_DWORD *)(v4 + 4) )
  {
    Init_thread_header(&dword_18034D3F8);
    if ( dword_18034D3F8 == -1 )
    {
      dword_180347AEE = 33620480;
      Init_thread_footer(&dword_18034D3F8);
    }
  }
  if ( dword_18034D3FC > *(_DWORD *)(v4 + 4) )
  {
    Init_thread_header(&dword_18034D3FC);
    if ( dword_18034D3FC == -1 )
    {
      word_180347AF6 = 513;
      Init_thread_footer(&dword_18034D3FC);
    }
  }
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
        *a1 = 2LL;
        v7 = &unk_180347AF4;
        goto LABEL_9;
      }
      if ( v6 != 1 )
      {
        *a1 = 0LL;
        a1[1] = 0LL;
        return a1;
      }
      *a1 = 3LL;
    }
    else
    {
      *a1 = 2LL;
    }
  }
  else
  {
    *a1 = 1LL;
  }
  v7 = &unk_180347AEC;
LABEL_9:
  a1[1] = v7;
  return a1;
}
