/*
 * XREFs of sub_180108270 @ 0x180108270
 * Callers:
 *     sub_180108A34 @ 0x180108A34 (sub_180108A34.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 * Callees:
 *     sub_180107E8C @ 0x180107E8C (sub_180107E8C.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 */

__int64 __fastcall sub_180108270(_QWORD *a1, __int64 a2, char a3, size_t *a4, _QWORD *a5)
{
  _QWORD *v8; // r13
  __int64 *v9; // rbx
  unsigned int v10; // eax
  const void **v11; // rax
  const void *v12; // rdx
  const void *v13; // rcx
  size_t v14; // r14
  size_t v15; // rsi
  size_t v16; // r8
  unsigned int v17; // eax
  const void *v18; // rdx
  const void *v19; // rcx
  size_t v20; // r14
  size_t v21; // rsi
  size_t v22; // r8
  unsigned int v23; // eax
  __int64 result; // rax
  char v25; // [rsp+30h] [rbp-48h]
  _QWORD *v26; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-38h]
  _QWORD *v28; // [rsp+48h] [rbp-30h]

  v25 = a3;
  v28 = a1;
  v26 = a5;
  v27 = a5;
  v8 = (_QWORD *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  LOBYTE(v10) = 1;
  while ( !*((_BYTE *)v9 + 25) )
  {
    v8 = v9;
    v11 = (const void **)(v9 + 4);
    if ( a3 )
    {
      v12 = a4;
      if ( a4[3] >= 0x10 )
        v12 = (const void *)*a4;
      v13 = v9 + 4;
      if ( (unsigned __int64)v9[7] >= 0x10 )
        v13 = *v11;
      v14 = a4[2];
      v15 = v9[6];
      v16 = v15;
      if ( v14 < v15 )
        v16 = a4[2];
      v17 = memcmp(v13, v12, v16);
      if ( !v17 )
      {
        if ( v15 >= v14 )
          v17 = v15 > v14;
        else
          v17 = -1;
      }
      v10 = v17 >> 31;
      LOBYTE(v10) = v10 ^ 1;
    }
    else
    {
      v18 = v9 + 4;
      if ( (unsigned __int64)v9[7] >= 0x10 )
        v18 = *v11;
      v19 = a4;
      if ( a4[3] >= 0x10 )
        v19 = (const void *)*a4;
      v20 = v9[6];
      v21 = a4[2];
      v22 = v21;
      if ( v20 < v21 )
        v22 = v9[6];
      v23 = memcmp(v19, v18, v22);
      if ( !v23 )
      {
        if ( v21 >= v20 )
          v23 = v21 > v20;
        else
          v23 = -1;
      }
      v10 = v23 >> 31;
    }
    if ( (_BYTE)v10 )
      v9 = (__int64 *)*v9;
    else
      v9 = (__int64 *)v9[2];
    a3 = v25;
  }
  try
  {
    *(_QWORD *)a2 = *sub_180107E8C(a1, &v26, v10, v8, (int)a4, v26);
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    sub_180109C64(v28, v27);
    throw;
  }
  return result;
}
