/*
 * XREFs of GetInputs @ 0x1800D4C08
 * Callers:
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800D4B70 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E34C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3528 (_Init_thread_header.c)
 */

_QWORD *__fastcall GetInputs(_QWORD *a1, int a2)
{
  __int64 v4; // rsi
  int v5; // edi
  int v6; // edi
  void *v7; // rax

  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_180348390 > *(_DWORD *)(v4 + 4) )
  {
    Init_thread_header(&dword_180348390);
    if ( dword_180348390 == -1 )
    {
      dword_180342AEE = 33620480;
      Init_thread_footer(&dword_180348390);
    }
  }
  if ( dword_180348394 > *(_DWORD *)(v4 + 4) )
  {
    Init_thread_header(&dword_180348394);
    if ( dword_180348394 == -1 )
    {
      word_180342AF6 = 513;
      Init_thread_footer(&dword_180348394);
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
        v7 = &unk_180342AF4;
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
  v7 = &unk_180342AEC;
LABEL_9:
  a1[1] = v7;
  return a1;
}
