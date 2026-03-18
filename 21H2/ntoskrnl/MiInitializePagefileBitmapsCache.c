/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x14025F1A4
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x14025ED04 (MiRescanPagefileBitmaps.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  __int64 v1; // r14
  char v2; // bl
  __int64 v3; // r15
  __int64 v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  __int64 v8; // r8
  _QWORD *i; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax

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
    for ( i = *(_QWORD **)(v4 + 8); ; i = v10 )
    {
      v10 = v6;
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
  v11 = *(_QWORD *)v1;
  if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
  {
    if ( v11 )
      v11 ^= v1;
    else
      v11 = 0LL;
  }
  LOBYTE(v8) = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
      {
        if ( !v12 )
          break;
        v12 ^= v11;
      }
      if ( !v12 )
        break;
      v11 = v12;
    }
    LOBYTE(v8) = 1;
  }
  RtlRbInsertNodeEx(v1, v11, v8, v6);
  v14 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v14 )
      v14 ^= v3;
    else
      v14 = 0LL;
  }
  if ( v14 )
  {
    v13 = *((unsigned int *)v6 + 12);
    while ( 1 )
    {
      if ( (unsigned int)v13 >= *(_DWORD *)(v14 + 24) )
      {
        v15 = *(_QWORD *)(v14 + 8);
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_29;
          v15 ^= v14;
        }
        if ( !v15 )
        {
LABEL_29:
          v2 = 1;
          break;
        }
      }
      else
      {
        v15 = *(_QWORD *)v14;
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v15 )
            break;
          v15 ^= v14;
        }
        if ( !v15 )
          break;
      }
      v14 = v15;
    }
  }
  LOBYTE(v13) = v2;
  result = RtlRbInsertNodeEx(v3, v14, v13, v6 + 3);
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
