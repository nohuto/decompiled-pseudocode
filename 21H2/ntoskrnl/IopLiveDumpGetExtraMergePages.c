/*
 * XREFs of IopLiveDumpGetExtraMergePages @ 0x1408982F0
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     <none>
 */

char __fastcall IopLiveDumpGetExtraMergePages(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v5; // r11
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // r11d
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r13
  char v17; // r8
  unsigned __int64 v18; // rdi
  int v19; // r14d
  unsigned __int64 v20; // rax
  int v21; // ebp
  bool v22; // cf
  signed __int64 *v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+0h] [rbp-68h]
  __int64 v27; // [rsp+8h] [rbp-60h]

  v5 = a1[30];
  v7 = a1[24];
  if ( v5 == v7 && a1[34] == a1[25] )
  {
LABEL_34:
    *a4 = 0;
    return 0;
  }
  v8 = a1[28];
  v9 = v7 - v5;
  v10 = a1[27];
  v11 = 0;
  v12 = 0LL;
  v13 = a1[25] - a1[34];
  v14 = v8 % (unsigned int)BufferChunkSizeInBytes;
  v15 = a1[32] % (unsigned __int64)(unsigned int)BufferChunkSizeInBytes;
  v26 = v10 + v8 / (unsigned int)BufferChunkSizeInBytes;
  v27 = v10 + a1[32] / (unsigned __int64)(unsigned int)BufferChunkSizeInBytes;
  v16 = (unsigned int)BufferChunkSizeInBytes;
  if ( ((unsigned int)BufferChunkSizeInBytes - v14) >> 12 <= v9 )
    v9 = ((unsigned int)BufferChunkSizeInBytes - v14) >> 12;
  if ( ((unsigned int)BufferChunkSizeInBytes - v15) >> 12 <= v13 )
    v13 = ((unsigned int)BufferChunkSizeInBytes - v15) >> 12;
  v17 = 1;
  while ( 1 )
  {
    v18 = 0LL;
    if ( v9 )
    {
      v19 = 1;
      v18 = *(_QWORD *)((a1[29] + 8 * v12) % v16 + *(_QWORD *)(a1[94] + 8 * ((a1[29] + 8 * v12) / v16 + a1[27]))) >> 12;
    }
    else
    {
      v19 = 0;
    }
    v20 = 0LL;
    if ( v13 )
    {
      v21 = 1;
      v20 = *(_QWORD *)((a1[33] + 8 * (unsigned __int64)(unsigned int)v12) % v16
                      + *(_QWORD *)(a1[94] + 8 * ((a1[33] + 8 * (unsigned __int64)(unsigned int)v12) / v16 + a1[27]))) >> 12;
    }
    else
    {
      v21 = 0;
    }
    if ( v11 )
      break;
    if ( !v19 )
    {
      if ( !v21 )
        goto LABEL_33;
      v11 = 1;
      break;
    }
    if ( v21 )
    {
      v11 = 2 - (v20 < v18);
      break;
    }
    v11 = 2;
LABEL_19:
    if ( !v19 )
      goto LABEL_33;
    if ( !v21 )
      goto LABEL_23;
    v22 = v20 < v18;
LABEL_22:
    if ( v22 )
      goto LABEL_33;
LABEL_23:
    if ( v11 == 1 )
    {
      *(_QWORD *)(a2 + 8LL * (unsigned int)v12) = v20;
      --v13;
      v23 = (signed __int64 *)a1[80];
    }
    else
    {
      *(_QWORD *)(a2 + 8LL * (unsigned int)v12) = v18;
      --v9;
      v23 = (signed __int64 *)a1[78];
      v20 = v18;
    }
    _bittestandset64(v23, v20);
    v12 = (unsigned int)(v12 + 1);
  }
  if ( v11 != 1 )
    goto LABEL_19;
  if ( v21 )
  {
    if ( !v19 )
      goto LABEL_23;
    v22 = v18 < v20;
    goto LABEL_22;
  }
LABEL_33:
  if ( !(_DWORD)v12 )
    goto LABEL_34;
  v25 = a1[94];
  if ( v11 == 1 )
  {
    *a5 = v27;
    *a3 = *(_QWORD *)(v25 + 8 * v27) + v15;
    if ( v13 || a1[35] == v27 )
      v17 = 0;
    a1[34] += (unsigned int)v12;
    a1[32] += (unsigned int)((_DWORD)v12 << 12);
    a1[33] += 8LL * (unsigned int)v12;
  }
  else
  {
    *a5 = v26;
    *a3 = *(_QWORD *)(v25 + 8 * v26) + v14;
    if ( v9 || a1[31] == v26 )
      v17 = 0;
    a1[30] += (unsigned int)v12;
    a1[28] += (unsigned int)((_DWORD)v12 << 12);
    a1[29] += 8LL * (unsigned int)v12;
  }
  *a4 = v12;
  return v17;
}
