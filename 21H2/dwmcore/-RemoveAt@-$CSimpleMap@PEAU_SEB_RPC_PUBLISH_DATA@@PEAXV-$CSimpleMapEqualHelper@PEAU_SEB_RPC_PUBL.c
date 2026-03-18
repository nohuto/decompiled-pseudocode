/*
 * XREFs of ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x18001F8E4
 * Callers:
 *     PubSebUnregisterRpc @ 0x18001F4E4 (PubSebUnregisterRpc.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18026C10C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // r10d
  errno_t v4; // eax
  errno_t v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = qword_1803D39A8;
  if ( a2 >= (int)qword_1803D39A8 )
    return 0LL;
  if ( a2 != (_DWORD)qword_1803D39A8 - 1 )
  {
    v4 = memmove_s(
           (void *const)(xmmword_1803D3998 + 8LL * a2),
           8LL * ((int)qword_1803D39A8 - a2),
           (const void *const)(xmmword_1803D3998 + 8LL * a2 + 8),
           8LL * ((int)qword_1803D39A8 - a2 - 1));
    if ( v4 )
    {
      if ( v4 == 12 )
        goto LABEL_26;
      if ( v4 == 22 || v4 == 34 )
        goto LABEL_25;
      if ( v4 != 80 )
        goto LABEL_24;
    }
    v5 = memmove_s(
           (void *const)(*(&xmmword_1803D3998 + 1) + 8 * v2),
           8LL * ((int)qword_1803D39A8 - (int)v2),
           (const void *const)(*(&xmmword_1803D3998 + 1) + 8 * v2 + 8),
           8LL * ((int)qword_1803D39A8 - (int)v2 - 1));
    if ( !v5 )
    {
LABEL_6:
      v3 = qword_1803D39A8;
      goto LABEL_7;
    }
    if ( v5 != 12 )
    {
      if ( v5 != 22 && v5 != 34 )
      {
        if ( v5 == 80 )
          goto LABEL_6;
LABEL_24:
        ATL::AtlThrowImpl(-2147467259);
      }
LABEL_25:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_26:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_7:
  v6 = _o__recalloc(xmmword_1803D3998, v3 - 1, 8LL);
  if ( v6 || (_DWORD)qword_1803D39A8 == 1 )
    xmmword_1803D3998 = v6;
  v7 = _o__recalloc(*(&xmmword_1803D3998 + 1), (int)qword_1803D39A8 - 1, 8LL);
  if ( v7 || (_DWORD)qword_1803D39A8 == 1 )
    *(&xmmword_1803D3998 + 1) = v7;
  result = 1LL;
  LODWORD(qword_1803D39A8) = qword_1803D39A8 - 1;
  return result;
}
