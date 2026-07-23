/*
 * XREFs of MiConvertRunsToPages @ 0x1408CFF84
 * Callers:
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiConvertRunsToPages(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned int v8; // eax
  _QWORD *v9; // r8
  __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned int v12; // r10d
  __int64 *v13; // r11
  unsigned __int64 v14; // rdi
  unsigned int v15; // edx
  unsigned int v16; // eax
  _QWORD *result; // rax
  _QWORD *v18; // r9
  unsigned int v19; // eax
  __int64 v20; // r11
  __int64 *v21; // rcx
  __int64 v22; // r10
  __int64 v23; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v25; // rax

  v4 = 0;
  v5 = 0LL;
  v8 = *(_DWORD *)(a1 + 4);
  if ( v8 )
  {
    v9 = (_QWORD *)(a1 + 8);
    v10 = v8;
    do
    {
      v11 = v9[1];
      v5 += v11;
      if ( v4 <= 1 )
      {
        if ( *v9 == 0x8000000000000000uLL )
        {
          v4 = -1;
        }
        else
        {
          v12 = 0;
          v13 = MiLargePageSizes;
          do
          {
            v14 = *v13;
            if ( !(*v9 % (unsigned __int64)*v13) && !(v11 % v14) )
              break;
            v15 = v12 + 1;
            v16 = v12 + 1;
            if ( v4 > v12 )
              v16 = v4;
            v4 = v16;
            if ( v14 == 512 )
              break;
            ++v13;
            ++v12;
          }
          while ( v15 < 3 );
        }
      }
      v9 += 2;
      --v10;
    }
    while ( v10 );
    if ( v4 > 1 )
      v4 = -1;
  }
  *a2 = v5;
  *a3 = v4;
  result = MiAllocatePool(64, 8 * v5, 0x6546694Du);
  v18 = result;
  if ( result )
  {
    v19 = *(_DWORD *)(a1 + 4);
    v20 = 0LL;
    if ( v19 )
    {
      v21 = (__int64 *)(a1 + 16);
      v22 = v19;
      do
      {
        v23 = *v21;
        for ( i = *(v21 - 1); v23; --v23 )
        {
          v18[v20] = i;
          v25 = i + 1;
          ++v20;
          if ( i == 0x8000000000000000uLL )
            v25 = 0x8000000000000000uLL;
          i = v25;
        }
        v21 += 2;
        --v22;
      }
      while ( v22 );
    }
    return v18;
  }
  return result;
}
