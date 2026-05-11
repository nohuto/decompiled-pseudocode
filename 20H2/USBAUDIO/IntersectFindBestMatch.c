/*
 * XREFs of IntersectFindBestMatch @ 0x1C00259FC
 * Callers:
 *     IntersectFindDataRange @ 0x1C0025B8C (IntersectFindDataRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectFindBestMatch(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebp
  unsigned int v5; // r15d
  _QWORD *v8; // r11
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int *v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 *v17; // r8
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  _QWORD *v21; // r8
  __int64 v22; // r11
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // r8
  unsigned int v26; // r10d
  unsigned int v27; // r8d
  _QWORD *v28; // rax
  unsigned int v29; // r8d
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v8 = a1;
    v9 = a2;
    v10 = a2;
    do
    {
      v11 = *v8;
      v12 = *(_DWORD *)(*v8 + 108LL);
      if ( v12 )
      {
        *(_DWORD *)(v11 + 100) = 0;
        v13 = *(unsigned int **)(v11 + 120);
        v14 = v12;
        do
        {
          v15 = *v13;
          if ( *v13 <= a3 && v15 > *(_DWORD *)(v11 + 100) )
            *(_DWORD *)(v11 + 100) = v15;
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      else
      {
        v16 = a3;
        if ( *(_DWORD *)(v11 + 80) < a3 )
          v16 = *(_DWORD *)(v11 + 80);
        *(_DWORD *)(v11 + 100) = v16;
      }
      ++v8;
      --v10;
    }
    while ( v10 );
    v17 = a1;
    do
    {
      v18 = *v17;
      v19 = v3;
      ++v17;
      v3 = *(_DWORD *)(v18 + 100);
      if ( v3 <= v19 )
        v3 = v19;
      --v9;
    }
    while ( v9 );
  }
  v20 = a2;
  if ( a2 )
  {
    v21 = a1;
    v22 = a2;
    v23 = a2;
    do
    {
      if ( *(_DWORD *)(*v21 + 100LL) < v3 )
      {
        *v21 = 0LL;
        --v20;
      }
      ++v21;
      --v23;
    }
    while ( v23 );
    v24 = a1;
    do
    {
      v25 = *v24;
      v26 = v4;
      if ( *v24 )
      {
        v4 = *(_DWORD *)(v25 + 64);
        if ( v4 <= v26 )
          v4 = v26;
        if ( *(_DWORD *)(v25 + 104) > v5 )
          v5 = *(_DWORD *)(v25 + 104);
      }
      ++v24;
      --v22;
    }
    while ( v22 );
  }
  v27 = 0;
  if ( a2 )
  {
    v28 = a1;
    do
    {
      if ( v20 <= 1 )
        break;
      if ( *v28 && *(_DWORD *)(*v28 + 64LL) < v4 )
      {
        *v28 = 0LL;
        --v20;
      }
      ++v27;
      ++v28;
    }
    while ( v27 < a2 );
  }
  v29 = 0;
  if ( a2 )
  {
    v30 = a1;
    do
    {
      if ( v20 <= 1 )
        break;
      if ( *v30 && *(_DWORD *)(*v30 + 104LL) < v5 )
      {
        *v30 = 0LL;
        --v20;
      }
      ++v29;
      ++v30;
    }
    while ( v29 < a2 );
  }
  v31 = 0LL;
  if ( a2 )
  {
    v32 = a1;
    do
    {
      if ( *v32 )
        break;
      v31 = (unsigned int)(v31 + 1);
      ++v32;
    }
    while ( (unsigned int)v31 < a2 );
  }
  return a1[v31];
}
