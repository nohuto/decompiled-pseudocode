/*
 * XREFs of sub_1800CEA1C @ 0x1800CEA1C
 * Callers:
 *     sub_1800CE62C @ 0x1800CE62C (sub_1800CE62C.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     sub_1800CE114 @ 0x1800CE114 (sub_1800CE114.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800CEA1C(_QWORD *a1, __int64 a2, char a3, size_t *a4, _QWORD *a5)
{
  _QWORD *v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // r13
  __int64 v10; // rbx
  char v11; // si
  const void **v12; // rax
  const void *v13; // rdx
  const void *v14; // rcx
  size_t v15; // r15
  size_t v16; // r8
  int v17; // esi
  const void *v18; // rdx
  const void *v19; // rcx
  size_t v20; // r15
  size_t v21; // rsi
  size_t v22; // r8
  int v23; // eax
  __int64 *v24; // rbx
  __int64 result; // rax
  const void *v26; // rdx
  const void *v27; // rcx
  size_t v28; // r15
  size_t v29; // r8
  int v30; // eax
  _QWORD *v31; // r15
  char v32; // [rsp+30h] [rbp-58h]
  __int64 *v33; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-48h]
  _QWORD *v35; // [rsp+48h] [rbp-40h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-38h]
  _QWORD *v37; // [rsp+58h] [rbp-30h]

  v32 = a3;
  v35 = a1;
  v37 = a1;
  v7 = a5;
  v34 = a5;
  v36 = a5;
  v8 = (__int64 *)*a1;
  v33 = v8;
  v9 = v8;
  v10 = v8[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    do
    {
      v9 = (__int64 *)v10;
      v12 = (const void **)(v10 + 32);
      if ( a3 )
      {
        v13 = a4;
        if ( a4[3] >= 0x10 )
          v13 = (const void *)*a4;
        v14 = (const void *)(v10 + 32);
        if ( *(_QWORD *)(v10 + 56) >= 0x10uLL )
          v14 = *v12;
        v15 = *(_QWORD *)(v10 + 48);
        v16 = v15;
        if ( a4[2] < v15 )
          v16 = a4[2];
        v17 = memcmp(v14, v13, v16);
        if ( !v17 )
        {
          if ( v15 >= a4[2] )
            v17 = v15 > a4[2];
          else
            v17 = -1;
        }
        v11 = v17 >= 0;
      }
      else
      {
        v18 = (const void *)(v10 + 32);
        if ( *(_QWORD *)(v10 + 56) >= 0x10uLL )
          v18 = *v12;
        v19 = a4;
        if ( a4[3] >= 0x10 )
          v19 = (const void *)*a4;
        v20 = *(_QWORD *)(v10 + 48);
        v21 = a4[2];
        v22 = v21;
        if ( v20 < v21 )
          v22 = *(_QWORD *)(v10 + 48);
        v23 = memcmp(v19, v18, v22);
        if ( !v23 )
        {
          if ( v21 >= v20 )
            v23 = v21 > v20;
          else
            v23 = -1;
        }
        v11 = v23 < 0;
      }
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
      a3 = v32;
    }
    while ( !*(_BYTE *)(v10 + 25) );
    v7 = v34;
    a1 = v35;
    v8 = v33;
  }
  try
  {
    v24 = v9;
    v33 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_1800CE114(a1, &v35, 1, v9, (int)a4, v7);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180022400(&v33);
      v24 = v33;
    }
    v26 = a4;
    if ( a4[3] >= 0x10 )
      v26 = (const void *)*a4;
    v27 = v24 + 4;
    if ( (unsigned __int64)v24[7] >= 0x10 )
      v27 = (const void *)v24[4];
    v28 = v24[6];
    v29 = v28;
    if ( a4[2] < v28 )
      v29 = a4[2];
    v30 = memcmp(v27, v26, v29);
    if ( !v30 )
    {
      if ( v28 >= a4[2] )
        v30 = v28 > a4[2];
      else
        v30 = -1;
    }
    v31 = v34;
    if ( v30 >= 0 )
    {
      sub_180065AF4(v34 + 4, 0);
      j_j__o_free(v31);
      *(_QWORD *)a2 = v24;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800CE114(v35, &v33, v11, v9, (int)a4, v34);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_1800CF540(v37, v36);
    throw;
  }
  return result;
}
