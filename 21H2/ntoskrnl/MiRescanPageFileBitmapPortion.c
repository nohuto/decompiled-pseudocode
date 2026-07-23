/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1402363F8
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x140255E50 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x1403BFDE4 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x140236608 (RtlFindNextClearRunUlong.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  int v5; // r15d
  __int64 *v6; // r13
  int v7; // r12d
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  BOOLEAN v19; // r8
  unsigned __int64 v20; // rax
  _RTL_RB_TREE *v21; // rcx
  __int64 v22; // rdx
  BOOLEAN v23; // r8
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  _DWORD v27[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+80h] [rbp+18h] BYREF

  v27[1] = 0;
  v29 = 0;
  v5 = a3 & 0x1F;
  v6 = a5;
  v7 = a3 - v5;
  v9 = (unsigned __int64)(unsigned int)(a3 - v5) >> 5;
  v10 = *a5;
  v28 = *(_QWORD *)(a2 + 8) + 4 * v9;
  v27[0] = v5 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)v27, v5, v9, -1, (__int64)&v29);
    v12 = result;
    if ( !(_DWORD)result )
      break;
    v5 = v29 + result;
    v13 = *(_DWORD *)(v10 + 52);
    v14 = v7 + v29;
    if ( v12 <= v13 )
    {
      if ( *(_DWORD *)(a1 + 140) > v12 )
        v12 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v12;
    }
    else
    {
      if ( v13 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v10);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(v10 + 24));
        v25 = *(_DWORD *)(a1 + 140);
        if ( v25 <= *(_DWORD *)(v10 + 52) )
          v25 = *(_DWORD *)(v10 + 52);
        *(_DWORD *)(a1 + 140) = v25;
      }
      else
      {
        v15 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || (v16 = *(_QWORD **)(v10 + 8), *v16 != v10) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      v17 = a1 + 144;
      *(_DWORD *)(v10 + 52) = v12;
      *(_DWORD *)(v10 + 48) = v14;
      v18 = *(_QWORD *)(a1 + 144);
      if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v18 )
        v18 ^= v17;
      v19 = 0;
      if ( v18 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v12, v14) < *(_QWORD *)(v18 + 48) )
          {
            v20 = *(_QWORD *)v18;
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v20 )
                break;
              v20 ^= v18;
            }
            if ( !v20 )
              break;
          }
          else
          {
            v20 = *(_QWORD *)(v18 + 8);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_22;
              v20 ^= v18;
            }
            if ( !v20 )
            {
LABEL_22:
              v19 = 1;
              break;
            }
          }
          v18 = v20;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v18, v19, (PRTL_BALANCED_NODE)v10);
      v21 = (_RTL_RB_TREE *)(a1 + 160);
      v22 = *(_QWORD *)(a1 + 160);
      if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v22 )
        v22 ^= (unsigned __int64)v21;
      v23 = 0;
      if ( v22 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v10 + 48) < *(_DWORD *)(v22 + 24) )
          {
            v24 = *(_QWORD *)v22;
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_37;
              v24 ^= v22;
            }
            if ( !v24 )
            {
LABEL_37:
              v23 = 0;
              break;
            }
          }
          else
          {
            v24 = *(_QWORD *)(v22 + 8);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_38;
              v24 ^= v22;
            }
            if ( !v24 )
            {
LABEL_38:
              v23 = 1;
              break;
            }
          }
          v22 = v24;
        }
      }
      RtlRbInsertNodeEx(v21, (PRTL_BALANCED_NODE)v22, v23, (PRTL_BALANCED_NODE)(v10 + 24));
      ++*(_DWORD *)(a1 + 128);
      v10 = *(_QWORD *)(a1 + 176);
      if ( v10 == a1 + 176 )
      {
        v26 = *(_QWORD *)(a1 + 152);
        if ( (v26 & 1) != 0 )
        {
          if ( v26 == 1 )
            v10 = 0LL;
          else
            v10 = v26 ^ (v17 | 1);
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
