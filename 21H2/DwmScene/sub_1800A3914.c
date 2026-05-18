/*
 * XREFs of sub_1800A3914 @ 0x1800A3914
 * Callers:
 *     sub_1800A5EB0 @ 0x1800A5EB0 (sub_1800A5EB0.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_1800A28D0 @ 0x1800A28D0 (sub_1800A28D0.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800A3914(__int64 *a1, __int64 a2, char a3, const void **a4)
{
  __int64 *v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rbx
  char v9; // r14
  const void **v10; // rax
  const void *v11; // rdx
  const void *v12; // rcx
  size_t v13; // r12
  size_t v14; // r8
  int v15; // r14d
  const void *v16; // rdx
  const void *v17; // rcx
  size_t v18; // r12
  size_t v19; // r14
  size_t v20; // r8
  int v21; // eax
  __int64 *v22; // rbx
  const void *v24; // rdx
  const void *v25; // rcx
  const void *v26; // r13
  size_t v27; // r12
  size_t v28; // r8
  int v29; // eax
  char v30; // [rsp+30h] [rbp-68h]
  __int64 *v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-50h] BYREF

  v30 = a3;
  v33 = a1;
  v6 = (__int64 *)*a1;
  v31 = v6;
  v7 = v6;
  v32 = v6;
  v8 = v6[1];
  v9 = 1;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    do
    {
      v7 = (__int64 *)v8;
      v32 = (__int64 *)v8;
      v10 = (const void **)(v8 + 32);
      if ( a3 )
      {
        v11 = a4;
        if ( (unsigned __int64)a4[3] >= 0x10 )
          v11 = *a4;
        v12 = (const void *)(v8 + 32);
        if ( *(_QWORD *)(v8 + 56) >= 0x10uLL )
          v12 = *v10;
        v13 = *(_QWORD *)(v8 + 48);
        v14 = v13;
        if ( (unsigned __int64)a4[2] < v13 )
          v14 = (size_t)a4[2];
        v15 = memcmp(v12, v11, v14);
        if ( !v15 )
        {
          if ( v13 >= (unsigned __int64)a4[2] )
            v15 = v13 > (unsigned __int64)a4[2];
          else
            v15 = -1;
        }
        v9 = v15 >= 0;
      }
      else
      {
        v16 = (const void *)(v8 + 32);
        if ( *(_QWORD *)(v8 + 56) >= 0x10uLL )
          v16 = *v10;
        v17 = a4;
        if ( (unsigned __int64)a4[3] >= 0x10 )
          v17 = *a4;
        v18 = *(_QWORD *)(v8 + 48);
        v19 = (size_t)a4[2];
        v20 = v19;
        if ( v18 < v19 )
          v20 = *(_QWORD *)(v8 + 48);
        v21 = memcmp(v17, v16, v20);
        if ( !v21 )
        {
          if ( v19 >= v18 )
            v21 = v19 > v18;
          else
            v21 = -1;
        }
        v9 = v21 < 0;
      }
      if ( v9 )
        v8 = *(_QWORD *)v8;
      else
        v8 = *(_QWORD *)(v8 + 16);
      a3 = v30;
    }
    while ( !*(_BYTE *)(v8 + 25) );
    v6 = v31;
    a1 = v33;
  }
  v22 = v7;
  v31 = v7;
  if ( v9 )
  {
    if ( v7 == (__int64 *)*v6 )
    {
      *(_QWORD *)a2 = *sub_1800A28D0(a1, &v33, 1, v7, (__int64)a4);
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    sub_180027CD0(&v31);
    v22 = v31;
  }
  v24 = a4;
  if ( (unsigned __int64)a4[3] >= 0x10 )
    v24 = *a4;
  v25 = v22 + 4;
  if ( (unsigned __int64)v22[7] >= 0x10 )
    v25 = (const void *)v22[4];
  v26 = a4[2];
  v27 = v22[6];
  v28 = v27;
  if ( (unsigned __int64)v26 < v27 )
    v28 = (size_t)a4[2];
  v29 = memcmp(v25, v24, v28);
  if ( !v29 )
  {
    if ( v27 >= (unsigned __int64)v26 )
      v29 = v27 > (unsigned __int64)v26;
    else
      v29 = -1;
  }
  if ( v29 >= 0 )
  {
    *(_QWORD *)a2 = v22;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    *(_QWORD *)a2 = *sub_1800A28D0(v33, &v32, v9, v32, (__int64)a4);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
