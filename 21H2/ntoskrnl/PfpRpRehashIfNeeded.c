/*
 * XREFs of PfpRpRehashIfNeeded @ 0x1406F17C0
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x1406F0FC0 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpRehashIfNeeded(__int64 a1, void **a2, unsigned int a3)
{
  unsigned int v4; // r10d
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // eax
  int v9; // eax
  char *v11; // rbx
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  void *v19; // rdx
  char i; // cl
  __int64 v21; // [rsp+20h] [rbp+8h]

  v4 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = 2 * (v7 >> 5);
  if ( *(_DWORD *)a1 >= v8 )
  {
    v6 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
    if ( !v8 )
      v6 = 64;
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( v9 && v6 <= a3 )
  {
    v11 = (char *)*a2;
    v12 = a3;
    if ( ((a3 - 1) & a3) != 0 )
    {
      for ( i = -1; a3; a3 >>= 1 )
        ++i;
      v12 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    v13 = (unsigned int)v12;
    if ( v11 > &v11[8 * v12] )
      v13 = 0LL;
    if ( v13 )
      memset64(v11, a1 | 1, v13);
    v14 = 0;
    v15 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v16 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v17 = *(_QWORD **)(v16 + 8LL * v14);
          if ( ((unsigned __int8)v17 & 1) != 0 )
            break;
          *(_QWORD *)(v16 + 8LL * v14) = *v17;
          v21 = v15 & v17[1];
          v18 = (37
               * (BYTE6(v21)
                + 37
                * (BYTE5(v21)
                 + 37
                 * (BYTE4(v21)
                  + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
               + HIBYTE(v21)) & (unsigned int)(v12 - 1);
          *v17 = *(_QWORD *)&v11[8 * v18];
          *(_QWORD *)&v11[8 * v18] = v17;
        }
        ++v14;
      }
      while ( v14 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v19 = *(void **)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v12);
    *(_QWORD *)(a1 + 8) = v11;
    *(_DWORD *)(a1 + 4) = v7;
    *a2 = v19;
  }
  LOBYTE(v4) = v7 >= 0x20;
  return v4;
}
