/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1402B81E8
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x140267EB0 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x1403BF9B8 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x1402B83F8 (RtlFindNextClearRunUlong.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  int v5; // r15d
  __int64 *v6; // r13
  int v7; // r12d
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ecx
  __int64 v28; // rax
  _DWORD v29[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+38h] [rbp-30h]
  int v31; // [rsp+80h] [rbp+18h] BYREF

  v29[1] = 0;
  v31 = 0;
  v5 = a3 & 0x1F;
  v6 = a5;
  v7 = a3 - v5;
  v9 = (unsigned __int64)(unsigned int)(a3 - v5) >> 5;
  v10 = *a5;
  v30 = *(_QWORD *)(a2 + 8) + 4 * v9;
  v29[0] = v5 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)v29, v5, v9, -1, (__int64)&v31);
    v13 = result;
    if ( !(_DWORD)result )
      break;
    v5 = v31 + result;
    v14 = *(_DWORD *)(v10 + 52);
    v15 = v7 + v31;
    if ( v13 <= v14 )
    {
      if ( *(_DWORD *)(a1 + 140) > v13 )
        v13 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v13;
    }
    else
    {
      if ( v14 )
      {
        RtlRbRemoveNode(a1 + 144, v10, v9, v12);
        RtlRbRemoveNode(a1 + 160, v10 + 24, v25, v26);
        v27 = *(_DWORD *)(a1 + 140);
        if ( v27 <= *(_DWORD *)(v10 + 52) )
          v27 = *(_DWORD *)(v10 + 52);
        *(_DWORD *)(a1 + 140) = v27;
      }
      else
      {
        v16 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || (v17 = *(_QWORD **)(v10 + 8), *v17 != v10) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
      }
      v18 = a1 + 144;
      *(_DWORD *)(v10 + 52) = v13;
      *(_DWORD *)(v10 + 48) = v15;
      v19 = *(_QWORD *)(a1 + 144);
      if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v19 )
        v19 ^= v18;
      LOBYTE(v9) = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v13, v15) < *(_QWORD *)(v19 + 48) )
          {
            v20 = *(_QWORD *)v19;
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v20 )
                break;
              v20 ^= v19;
            }
            if ( !v20 )
              break;
          }
          else
          {
            v20 = *(_QWORD *)(v19 + 8);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_22;
              v20 ^= v19;
            }
            if ( !v20 )
            {
LABEL_22:
              LOBYTE(v9) = 1;
              break;
            }
          }
          v19 = v20;
        }
      }
      RtlRbInsertNodeEx(a1 + 144, v19, v9, v10);
      v22 = a1 + 160;
      v23 = *(_QWORD *)(a1 + 160);
      if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v23 )
        v23 ^= v22;
      LOBYTE(v21) = 0;
      if ( v23 )
      {
        v21 = *(unsigned int *)(v10 + 48);
        while ( 1 )
        {
          if ( (unsigned int)v21 < *(_DWORD *)(v23 + 24) )
          {
            v24 = *(_QWORD *)v23;
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_38;
              v24 ^= v23;
            }
            if ( !v24 )
            {
LABEL_38:
              LOBYTE(v21) = 0;
              break;
            }
          }
          else
          {
            v24 = *(_QWORD *)(v23 + 8);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_39;
              v24 ^= v23;
            }
            if ( !v24 )
            {
LABEL_39:
              LOBYTE(v21) = 1;
              break;
            }
          }
          v23 = v24;
        }
      }
      RtlRbInsertNodeEx(v22, v23, v21, v10 + 24);
      ++*(_DWORD *)(a1 + 128);
      v10 = *(_QWORD *)(a1 + 176);
      if ( v10 == a1 + 176 )
      {
        v28 = *(_QWORD *)(a1 + 152);
        if ( (v28 & 1) != 0 )
        {
          if ( v28 == 1 )
            v10 = 0LL;
          else
            v10 = v28 ^ (v18 | 1);
        }
        else
        {
          v10 = *(_QWORD *)(a1 + 152);
        }
      }
    }
  }
  *v6 = v10;
  return result;
}
