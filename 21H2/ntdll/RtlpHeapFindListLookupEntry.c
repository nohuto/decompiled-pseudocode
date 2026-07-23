/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x18001EC28
 * Callers:
 *     RtlpFindUCREntry @ 0x18000EB94 (RtlpFindUCREntry.c)
 *     RtlpFindEntry @ 0x18001E25C (RtlpFindEntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 *v5; // rsi
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // eax
  int v13; // r13d
  int v14; // ecx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // eax
  int v18; // edi
  __int64 v19; // rcx
  __int64 *i; // rdi
  int v21; // ecx
  __int64 v23; // r8
  unsigned int *v24; // r9
  unsigned int v25; // edx
  int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  int v29; // [rsp+38h] [rbp-28h]
  int v30; // [rsp+48h] [rbp-18h]
  int v31; // [rsp+58h] [rbp-8h]
  char v32; // [rsp+B0h] [rbp+50h]

  v32 = a3;
  v5 = *(__int64 **)(a2 + 32);
  v6 = a4 - *(_DWORD *)(a2 + 24);
  v7 = 0LL;
  v10 = v5[1];
  if ( v5 == (__int64 *)v10 )
    return v5;
  if ( a3 )
  {
    v11 = v10 - 16;
    v12 = *(_DWORD *)(v10 - 16 + 8);
    LOWORD(v29) = v12;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v29 = v12 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
        RtlpLogHeapFailure(3, a1, v11, 0, 0LL, 0LL);
    }
    v13 = a5;
    a3 = v32;
    v14 = a5 - (unsigned __int16)v29;
  }
  else
  {
    v13 = a5;
    v14 = a5 - *(_DWORD *)(v10 + 40);
  }
  if ( v14 > 0 )
    return v5;
  v15 = *v5;
  if ( a3 )
  {
    v16 = v15 - 16;
    v17 = *(_DWORD *)(v15 - 16 + 8);
    LOWORD(v30) = v17;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v30 = v17 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
        RtlpLogHeapFailure(3, a1, v16, 0, 0LL, 0LL);
    }
    a3 = v32;
    v18 = v13 - (unsigned __int16)v30;
  }
  else
  {
    v18 = v13 - *(_DWORD *)(v15 + 40);
  }
  if ( v18 <= 0 )
    return (__int64 *)*v5;
  if ( *(_QWORD *)a2 || a4 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v23 = v6 >> 5;
    v24 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v23);
    v25 = *v24 & (-1 << (v6 & 0x1F));
    if ( v25 )
      goto LABEL_32;
    do
    {
      if ( (unsigned int)v23 > ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
        break;
      ++v24;
      LODWORD(v23) = v23 + 1;
      v25 = *v24;
    }
    while ( !*v24 );
    if ( v25 )
    {
LABEL_32:
      if ( (_WORD)v25 )
      {
        if ( (_BYTE)v25 )
          v26 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v25];
        else
          v26 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v25)] + 8;
      }
      else if ( (v25 & 0xFF0000) != 0 )
      {
        v26 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v25)] + 16;
      }
      else
      {
        v26 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v25 >> 24] + 24;
      }
      v27 = 32 * v23 + v26;
      v28 = 2 * v27;
      if ( !*(_DWORD *)(a2 + 12) )
        v28 = v27;
      return *(__int64 **)(*(_QWORD *)(a2 + 48) + 8LL * v28);
    }
  }
  else
  {
    v19 = 2 * v6;
    if ( !*(_DWORD *)(a2 + 12) )
      v19 = v6;
    for ( i = *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v19); v5 != i; i = (__int64 *)*i )
    {
      if ( a3 )
      {
        v31 = *((_DWORD *)i - 2);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v31 = *((_DWORD *)i - 2) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v31) != ((unsigned __int8)v31 ^ (unsigned __int8)(BYTE1(v31) ^ BYTE2(v31))) )
            RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
        }
        a3 = v32;
        v21 = v13 - (unsigned __int16)v31;
      }
      else
      {
        v21 = v13 - *((_DWORD *)i + 10);
      }
      if ( v21 <= 0 )
        return i;
    }
  }
  return (__int64 *)v7;
}
