/*
 * XREFs of AsiPopulateHashes @ 0x1405BEF4C
 * Callers:
 *     ApiSetComposeSchema @ 0x1405BE7D0 (ApiSetComposeSchema.c)
 * Callees:
 *     qsort @ 0x1403D2C30 (qsort.c)
 */

__int64 __fastcall AsiPopulateHashes(unsigned int *a1)
{
  size_t v1; // rdi
  __int64 *v2; // r14
  size_t v3; // rax
  unsigned int i; // ebp
  unsigned int v6; // r15d
  unsigned int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int16 *v13; // r12
  unsigned int v14; // ecx
  __int64 v15; // r13
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  char *v18; // rsi
  unsigned int v19; // r8d

  v1 = a1[3];
  v2 = qword_14003BF20;
  v3 = v1;
  for ( i = 0; i < 0x64; ++i )
  {
    v6 = *(_DWORD *)v2;
    v7 = 0;
    if ( (_DWORD)v1 )
    {
      v8 = 0LL;
      v9 = 0LL;
      do
      {
        v10 = 0;
        v11 = v9 + a1[4];
        v12 = v8 + a1[5];
        v13 = (unsigned __int16 *)((char *)a1 + *(unsigned int *)((char *)a1 + v11 + 4));
        v14 = *(unsigned int *)((char *)a1 + v11 + 12) >> 1;
        if ( v14 )
        {
          v15 = v14;
          do
          {
            v16 = *v13++;
            v17 = v16 + 32;
            if ( (unsigned __int16)(v16 - 65) > 0x19u )
              v17 = v16;
            v10 = v17 + v6 * v10;
            --v15;
          }
          while ( v15 );
        }
        *(unsigned int *)((char *)a1 + v12 + 4) = v7;
        v9 += 24LL;
        ++v7;
        *(unsigned int *)((char *)a1 + v12) = v10;
        v8 += 8LL;
      }
      while ( v7 < (unsigned int)v1 );
      v3 = v1;
    }
    v18 = (char *)a1 + a1[5];
    qsort(v18, v3, 8uLL, AsiSortHashTableHelper);
    if ( (unsigned int)v1 <= 1 )
    {
LABEL_15:
      a1[6] = v6;
      return 1LL;
    }
    v19 = 1;
    while ( *(_DWORD *)&v18[8 * v19 - 8] != *(_DWORD *)&v18[8 * v19] )
    {
      if ( ++v19 >= (unsigned int)v1 )
        goto LABEL_15;
    }
    v2 = (__int64 *)((char *)v2 + 4);
    v3 = v1;
  }
  return 0LL;
}
