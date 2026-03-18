/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x14025EDC8
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x14025ED04 (MiRescanPagefileBitmaps.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1402E22B0 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x14025EFDC (RtlFindNextClearRunUlong.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 *v5; // r13
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // r12d
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  _DWORD v25[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v27 = 0;
  v25[1] = 0;
  v7 = a3 & 0x1F;
  v8 = *a5;
  v9 = a3 - v7;
  v26 = *(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)(unsigned int)(a3 - v7) >> 5);
  v25[0] = v7 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)v25, v7, a3, -1, (__int64)&v27);
    v11 = result;
    if ( !(_DWORD)result )
      break;
    v7 = v27 + result;
    v12 = *(_DWORD *)(v8 + 52);
    v13 = v9 + v27;
    if ( v11 <= v12 )
    {
      if ( *(_DWORD *)(a1 + 140) > v11 )
        v11 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v11;
    }
    else
    {
      if ( v12 )
      {
        RtlRbRemoveNode(a1 + 144, v8);
        RtlRbRemoveNode(a1 + 160, v8 + 24);
        v23 = *(_DWORD *)(a1 + 140);
        if ( v23 <= *(_DWORD *)(v8 + 52) )
          v23 = *(_DWORD *)(v8 + 52);
        *(_DWORD *)(a1 + 140) = v23;
      }
      else
      {
        v14 = *(_QWORD *)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v15 = *(_QWORD **)(v8 + 8), *v15 != v8) )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
      }
      v16 = a1 + 144;
      *(_DWORD *)(v8 + 52) = v11;
      *(_DWORD *)(v8 + 48) = v13;
      v17 = *(_QWORD *)(a1 + 144);
      if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v17 )
        v17 ^= v16;
      LOBYTE(a3) = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v11, v13) < *(_QWORD *)(v17 + 48) )
          {
            v18 = *(_QWORD *)v17;
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v18 )
                break;
              v18 ^= v17;
            }
            if ( !v18 )
              break;
          }
          else
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_22;
              v18 ^= v17;
            }
            if ( !v18 )
            {
LABEL_22:
              LOBYTE(a3) = 1;
              break;
            }
          }
          v17 = v18;
        }
      }
      RtlRbInsertNodeEx(a1 + 144, v17, a3, v8);
      v20 = a1 + 160;
      v21 = *(_QWORD *)(a1 + 160);
      if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v21 )
        v21 ^= v20;
      LOBYTE(v19) = 0;
      if ( v21 )
      {
        v19 = *(unsigned int *)(v8 + 48);
        while ( 1 )
        {
          if ( (unsigned int)v19 >= *(_DWORD *)(v21 + 24) )
          {
            v22 = *(_QWORD *)(v21 + 8);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_38;
              v22 ^= v21;
            }
            if ( !v22 )
            {
LABEL_38:
              LOBYTE(v19) = 1;
              break;
            }
          }
          else
          {
            v22 = *(_QWORD *)v21;
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_45;
              v22 ^= v21;
            }
            if ( !v22 )
            {
LABEL_45:
              LOBYTE(v19) = 0;
              break;
            }
          }
          v21 = v22;
        }
      }
      RtlRbInsertNodeEx(v20, v21, v19, v8 + 24);
      ++*(_DWORD *)(a1 + 128);
      v8 = *(_QWORD *)(a1 + 176);
      if ( v8 == a1 + 176 )
      {
        v24 = *(_QWORD *)(a1 + 152);
        if ( (v24 & 1) != 0 )
        {
          if ( v24 == 1 )
            v8 = 0LL;
          else
            v8 = v24 ^ (v16 | 1);
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 152);
        }
      }
    }
  }
  *v5 = v8;
  return result;
}
