/*
 * XREFs of GetInputs @ 0x1800D99D8
 * Callers:
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800D9940 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E7910 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E7978 (_Init_thread_header.c)
 */

_QWORD *__fastcall GetInputs(_QWORD *a1, int a2)
{
  __int64 v4; // rsi
  int v5; // edi
  int v6; // edi
  void *v7; // rax

  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18034B318 > *(_DWORD *)(v4 + 4) )
  {
    Init_thread_header(&dword_18034B318);
    if ( dword_18034B318 == -1 )
    {
      dword_180345AEE = 33620480;
      Init_thread_footer(&dword_18034B318);
    }
  }
  if ( dword_18034B31C > *(_DWORD *)(v4 + 4) )
  {
    Init_thread_header(&dword_18034B31C);
    if ( dword_18034B31C == -1 )
    {
      word_180345AF6 = 513;
      Init_thread_footer(&dword_18034B31C);
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
        v7 = &unk_180345AF4;
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
  v7 = &unk_180345AEC;
LABEL_9:
  a1[1] = v7;
  return a1;
}
