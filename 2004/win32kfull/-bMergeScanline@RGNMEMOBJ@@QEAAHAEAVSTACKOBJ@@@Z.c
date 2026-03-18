/*
 * XREFs of ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B9564
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02B9E70 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02B9248 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C02B9DB8 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bMergeScanline(RGNMEMOBJ *this, struct STACKOBJ *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  struct STACKOBJ *v4; // r9
  int v6; // r8d
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  unsigned int *v11; // r9
  unsigned int v12; // edx
  _DWORD *v13; // r8
  unsigned int *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int *v17; // r8
  int v18; // ecx
  int v19; // r10d
  unsigned int v20; // r13d
  signed int v21; // r8d
  unsigned int *v22; // rbx
  unsigned int *v23; // r14
  unsigned int v24; // ecx
  __int64 v25; // r12
  int v26; // edx
  unsigned int v27; // edx
  unsigned int v29; // r8d
  signed int v30; // eax
  unsigned int *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // eax
  _DWORD *v34; // rdx
  signed int v35; // eax
  signed int v36; // eax
  int v37; // [rsp+60h] [rbp+8h]

  v2 = 0LL;
  v3 = *((_QWORD *)a2 + 1);
  v4 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)this + 80LL);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v6 != 16 )
  {
    v19 = 8 * v7;
    v37 = 8 * v7;
    v20 = 8 * v7 + 16;
    if ( v20 > v8 - v6 )
    {
      if ( !RGNOBJ::bExpand(this, v20 + v8 + 4832) )
        return 0LL;
      v4 = a2;
      v19 = v37;
    }
    v21 = *(_DWORD *)v3;
    v22 = *(unsigned int **)(*(_QWORD *)this + 88LL);
    v23 = *(unsigned int **)(*(_QWORD *)this + 40LL);
    while ( v21 > (int)v22[1] )
      v22 += *v22 + 4;
    v24 = v22[1];
    if ( v21 != v24 )
    {
      v22[-*(v22 - 1) - 2] = v21;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( *(_DWORD *)v3 < *(_DWORD *)(*(_QWORD *)this + 100LL) )
        *(_DWORD *)(*(_QWORD *)this + 100LL) = *(_DWORD *)v3;
      goto LABEL_23;
    }
    if ( v24 + 1 != v22[2] )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      *(_DWORD *)(*(_QWORD *)this + 108LL) = *(_DWORD *)v3 + 1;
      v22[1] = *(_DWORD *)v3 + 1;
      goto LABEL_23;
    }
    v25 = *((_QWORD *)v4 + 2);
    v20 = v19;
    *(_DWORD *)v25 = v24;
    v26 = *(_DWORD *)(v3 + 4) + (*v22 >> 1);
    *(_DWORD *)(v25 + 4) = v26;
    v27 = 8 * v26 + 24;
    if ( v27 > *(_DWORD *)(v25 + 8) )
    {
      if ( !(unsigned int)STACKOBJ::bExpandScanline(v4, v27, 0) )
        return 0LL;
      v25 = *((_QWORD *)a2 + 2);
    }
    vMergeSpans(
      (struct _SPAN *)(v22 + 3),
      (struct _SPAN *)&v22[*v22 + 3],
      (struct _SPAN *)(v3 + 24),
      (struct _SPAN *)(v3 + 8 * (*(unsigned int *)(v3 + 4) + 3LL)),
      (struct _SPAN *)(v25 + 24));
    v3 = v25;
LABEL_23:
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v23 + v20;
    while ( v23 > v22 )
    {
      --v23;
      *(unsigned int *)((char *)v23 + v20) = *v23;
    }
    v29 = 2 * *(_DWORD *)(v3 + 4);
    *v22 = v29;
    v22[1] = *(_DWORD *)v3;
    v30 = *(_DWORD *)v3;
    v31 = (unsigned int *)(v3 + 24);
    v22[2] = v30 + 1;
    if ( v29 )
    {
      do
      {
        v32 = (unsigned int)(v2 + 1);
        v22[v2 + 3] = *v31;
        v2 = (unsigned int)(v2 + 2);
        v33 = v31[1];
        v31 += 2;
        v22[v32 + 3] = v33;
      }
      while ( (unsigned int)v2 < v29 );
    }
    v22[v2 + 3] = v29;
    v34 = *(_DWORD **)this;
    v35 = v22[3];
    if ( *(_DWORD *)(*(_QWORD *)this + 96LL) > v35 )
    {
      v34[24] = v35;
      v34 = *(_DWORD **)this;
    }
    v36 = v22[v29 + 2];
    if ( v34[26] < v36 )
    {
      v34[26] = v36;
      v34 = *(_DWORD **)this;
    }
    v34[20] += v20;
    return 1LL;
  }
  v9 = 2 * v7;
  v10 = 8 * v7 + 48;
  if ( v10 > v8 && !RGNOBJ::bExpand(this, 8 * v7 + 4880) )
    return 0LL;
  v11 = (unsigned int *)(v3 + 24);
  v12 = 0;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = v10;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 3;
  v13 = *(_DWORD **)(*(_QWORD *)this + 88LL);
  v13[2] = *(_DWORD *)v3;
  v14 = (_DWORD *)((char *)v13 + (unsigned int)(4 * *v13 + 16));
  *v14 = v9;
  v14[1] = *(_DWORD *)v3;
  for ( v14[2] = *(_DWORD *)v3 + 1; v12 < v9; v14[v16 + 3] = *(v11 - 1) )
  {
    v15 = *v11;
    v11 += 2;
    v14[v12 + 3] = v15;
    v16 = v12 + 1;
    v12 += 2;
  }
  v14[v12 + 3] = v9;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = *(_DWORD *)v3;
  *(_DWORD *)(*(_QWORD *)this + 108LL) = *(_DWORD *)v3 + 1;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = v14[3];
  *(_DWORD *)(*(_QWORD *)this + 104LL) = v14[v9 + 2];
  v17 = &v14[*v14 + 4];
  *v17 = 0;
  v18 = *(_DWORD *)v3 + 1;
  *((_QWORD *)v17 + 1) = 0x7FFFFFFFLL;
  v17[1] = v18;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v17 + 4;
  return 1LL;
}
