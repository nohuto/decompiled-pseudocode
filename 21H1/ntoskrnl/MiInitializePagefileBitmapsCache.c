/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x1403BBB84
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiRescanPagefileBitmaps @ 0x1403BB9C4 (MiRescanPagefileBitmaps.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

char __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  __int64 v1; // r14
  bool v2; // bl
  __int64 v3; // r15
  __int64 v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *i; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char result; // al

  v1 = a1 + 144;
  v2 = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = a1 + 160;
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = a1 + 176;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v6 = *(_QWORD **)(a1 + 192);
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v7 = v6 + 3577;
  memset(v6, 0, 0x7000uLL);
  if ( v6 < v6 + 3577 )
  {
    for ( i = *(_QWORD **)(v4 + 8); ; i = v9 )
    {
      v9 = v6;
      if ( *i != v4 )
        __fastfail(3u);
      *v6 = v4;
      v6[1] = i;
      *i = v6;
      *(_QWORD *)(v4 + 8) = v6;
      v6 += 7;
      if ( v6 >= v7 )
        break;
    }
  }
  *((_DWORD *)v6 + 13) = -1;
  *((_DWORD *)v6 + 12) = -1;
  v10 = *(_QWORD *)v1;
  if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
  {
    if ( v10 )
      v10 ^= v1;
    else
      v10 = 0LL;
  }
  v11 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
      {
        if ( !v12 )
          break;
        v12 ^= v10;
      }
      if ( !v12 )
        break;
      v10 = v12;
    }
    v11 = 1;
  }
  RtlRbInsertNodeEx((unsigned __int64 *)v1, v10, v11, (unsigned __int64)v6);
  v13 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v13 )
      v13 ^= v3;
    else
      v13 = 0LL;
  }
  if ( v13 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v6 + 12) < *(_DWORD *)(v13 + 24) )
      {
        v14 = *(_QWORD *)v13;
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v14 )
            break;
          v14 ^= v13;
        }
        if ( !v14 )
          break;
      }
      else
      {
        v14 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_26;
          v14 ^= v13;
        }
        if ( !v14 )
        {
LABEL_26:
          v2 = 1;
          break;
        }
      }
      v13 = v14;
    }
  }
  result = RtlRbInsertNodeEx((unsigned __int64 *)v3, v13, v2, (unsigned __int64)(v6 + 3));
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
