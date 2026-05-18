/*
 * XREFs of sub_180073894 @ 0x180073894
 * Callers:
 *     sub_1800761A8 @ 0x1800761A8 (sub_1800761A8.c)
 *     sub_180076CC8 @ 0x180076CC8 (sub_180076CC8.c)
 *     sub_1800A3CA0 @ 0x1800A3CA0 (sub_1800A3CA0.c)
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 *     sub_18011AFEC @ 0x18011AFEC (sub_18011AFEC.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_18006A1A8 @ 0x18006A1A8 (sub_18006A1A8.c)
 *     sub_18006A434 @ 0x18006A434 (sub_18006A434.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 */

_QWORD *__fastcall sub_180073894(__int64 **a1, _QWORD *a2, __int64 *a3, size_t *a4, _QWORD *a5)
{
  _QWORD *v9; // r12
  __int64 *v10; // rax
  const void *v11; // rdx
  const void *v12; // rcx
  size_t v13; // r12
  size_t v14; // rdi
  size_t v15; // r8
  int v16; // r14d
  _QWORD *result; // rax
  _QWORD *v18; // rax
  const void *v19; // rdx
  const void *v20; // rcx
  size_t v21; // rdi
  size_t v22; // rbx
  size_t v23; // r8
  int v24; // r14d
  _QWORD *v25; // rdi
  _QWORD *v26; // rdx
  const void *v27; // rcx
  size_t v28; // r14
  unsigned __int64 v29; // r12
  size_t v30; // r8
  int v31; // eax
  __int64 *v32; // rdi
  const void *v33; // rdx
  __int64 *v34; // rcx
  __int64 *v35; // r8
  int v36; // eax
  const void *v37; // rdx
  size_t v38; // r8
  int v39; // eax
  __int64 v40; // rdi
  __int64 *v41; // rax
  __int64 *v42; // rcx
  __int64 i; // rcx
  const void *v44; // rdx
  const void *v45; // rcx
  size_t v46; // r8
  int v47; // eax
  char v48; // [rsp+30h] [rbp-78h]
  _QWORD *v49; // [rsp+40h] [rbp-68h]
  unsigned __int64 v50; // [rsp+40h] [rbp-68h]
  __int64 *v51; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v52; // [rsp+50h] [rbp-58h]
  __int64 **v53; // [rsp+58h] [rbp-50h] BYREF

  v53 = a1;
  v9 = a5;
  v52 = a5;
  v10 = *a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v10 )
    {
      v11 = a3 + 4;
      if ( (unsigned __int64)a3[7] >= 0x10 )
        v11 = (const void *)a3[4];
      v12 = a4;
      if ( a4[3] >= 0x10 )
        v12 = (const void *)*a4;
      v13 = a3[6];
      v14 = a4[2];
      v15 = v14;
      if ( v13 < v14 )
        v15 = v13;
      v16 = memcmp(v12, v11, v15);
      if ( !v16 )
      {
        if ( v14 >= v13 )
          v16 = v14 > v13;
        else
          v16 = -1;
      }
      if ( v16 < 0 )
      {
        sub_18006A1A8(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_90;
    }
    if ( a3 == v10 )
    {
      v18 = (_QWORD *)v10[2];
      v49 = v18;
      v19 = a4;
      if ( a4[3] >= 0x10 )
        v19 = (const void *)*a4;
      v20 = v18 + 4;
      if ( v18[7] >= 0x10uLL )
        v20 = (const void *)v18[4];
      v21 = a4[2];
      v22 = v18[6];
      v23 = v22;
      if ( v21 < v22 )
        v23 = a4[2];
      v24 = memcmp(v20, v19, v23);
      if ( !v24 )
      {
        if ( v22 >= v21 )
          v24 = v22 > v21;
        else
          v24 = -1;
      }
      if ( v24 < 0 )
      {
        sub_18006A1A8(a1, a2, 0, v49, (int)a4, a5);
        return a2;
      }
      goto LABEL_91;
    }
    v25 = a3 + 4;
    v26 = a3 + 4;
    if ( (unsigned __int64)a3[7] >= 0x10 )
      v26 = (_QWORD *)*v25;
    v27 = a4;
    if ( a4[3] >= 0x10 )
      v27 = (const void *)*a4;
    v28 = a3[6];
    v29 = a4[2];
    v30 = v29;
    if ( v28 < v29 )
      v30 = v28;
    v31 = memcmp(v27, v26, v30);
    if ( !v31 )
    {
      if ( v29 >= v28 )
        v31 = v29 > v28;
      else
        v31 = -1;
    }
    if ( v31 < 0 )
    {
      v51 = a3;
      sub_180027CD0(&v51);
      v32 = v51;
      v33 = a4;
      if ( a4[3] >= 0x10 )
        v33 = (const void *)*a4;
      v34 = v51 + 4;
      if ( (unsigned __int64)v51[7] >= 0x10 )
        v34 = (__int64 *)v51[4];
      v51 = (__int64 *)v51[6];
      v35 = v51;
      if ( v29 < (unsigned __int64)v51 )
        v35 = (__int64 *)v29;
      v36 = memcmp(v34, v33, (size_t)v35);
      if ( !v36 )
      {
        if ( (unsigned __int64)v51 >= v29 )
          v36 = (unsigned __int64)v51 > v29;
        else
          v36 = -1;
      }
      if ( v36 < 0 )
      {
        if ( *(_BYTE *)(v32[2] + 25) )
          sub_18006A1A8(a1, a2, 0, v32, (int)a4, a5);
        else
          sub_18006A1A8(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v25 = a3 + 4;
    }
    v37 = a4;
    if ( a4[3] >= 0x10 )
      v37 = (const void *)*a4;
    if ( v25[3] >= 0x10uLL )
      v25 = (_QWORD *)*v25;
    v38 = v28;
    if ( v29 < v28 )
      v38 = v29;
    v39 = memcmp(v25, v37, v38);
    if ( !v39 )
    {
      if ( v28 >= v29 )
        v39 = v28 > v29;
      else
        v39 = -1;
    }
    if ( v39 >= 0 )
      goto LABEL_90;
    v40 = a3[2];
    v48 = *(_BYTE *)(v40 + 25);
    if ( v48 )
    {
      v40 = a3[1];
      if ( !*(_BYTE *)(v40 + 25) )
      {
        v41 = a3;
        do
        {
          v42 = (__int64 *)v40;
          if ( v41 != *(__int64 **)(v40 + 16) )
            break;
          v40 = *(_QWORD *)(v40 + 8);
          v41 = v42;
        }
        while ( !*(_BYTE *)(v40 + 25) );
      }
    }
    else
    {
      for ( i = *(_QWORD *)v40; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
        v40 = i;
    }
    if ( (__int64 *)v40 != *a1 )
    {
      v44 = (const void *)(v40 + 32);
      if ( *(_QWORD *)(v40 + 56) >= 0x10uLL )
        v44 = *(const void **)(v40 + 32);
      v45 = a4;
      if ( a4[3] >= 0x10 )
        v45 = (const void *)*a4;
      v50 = *(_QWORD *)(v40 + 48);
      v46 = v29;
      if ( v50 < v29 )
        v46 = *(_QWORD *)(v40 + 48);
      v47 = memcmp(v45, v44, v46);
      if ( !v47 )
      {
        if ( v29 >= v50 )
          v47 = v29 > v50;
        else
          v47 = -1;
      }
      if ( v47 >= 0 )
      {
LABEL_90:
        v9 = a5;
LABEL_91:
        *a2 = *(_QWORD *)sub_18006A434(a1, (__int64)&v53, 0, a4, v9);
        return a2;
      }
    }
    if ( v48 )
      sub_18006A1A8(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_18006A1A8(a1, a2, 1, (_QWORD *)v40, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_18006A1A8(a1, a2, 1, v10, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18006D37C((__int64)v53, (__int64)v52);
      throw;
    }
  }
  return result;
}
