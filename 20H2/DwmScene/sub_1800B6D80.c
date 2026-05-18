/*
 * XREFs of sub_1800B6D80 @ 0x1800B6D80
 * Callers:
 *     sub_1800B8C88 @ 0x1800B8C88 (sub_1800B8C88.c)
 * Callees:
 *     sub_1800B639C @ 0x1800B639C (sub_1800B639C.c)
 *     sub_1800C5D4C @ 0x1800C5D4C (sub_1800C5D4C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800B6D80(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r11
  _QWORD *v6; // r9
  __int64 v7; // rdx
  unsigned __int64 i; // rcx
  __int64 v9; // r14
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // r12
  __int64 *v13; // rdi
  char *v14; // rax
  char *v15; // rdx
  __int64 v16; // r10
  signed __int64 v17; // rdx
  unsigned __int16 v18; // cx
  int v19; // eax
  __int64 result; // rax
  __int64 *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+20h] [rbp-38h] BYREF
  __int64 v34; // [rsp+28h] [rbp-30h] BYREF

  v5 = a3[2];
  v6 = a3;
  if ( a3[3] >= 8uLL )
    v6 = (_QWORD *)*a3;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v5; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)v6 + i) ^ (unsigned __int64)v7);
  v9 = v7 & a1[6];
  v10 = (__int64 *)a1[1];
  v11 = a1[3];
  v12 = *(__int64 **)(v11 + 16 * v9);
  if ( v12 == v10 )
    v13 = (__int64 *)a1[1];
  else
    v13 = **(__int64 ***)(v11 + 16 * (v7 & a1[6]) + 8);
  while ( v13 != v12 )
  {
    v13 = (__int64 *)v13[1];
    v14 = (char *)(v13 + 2);
    if ( (unsigned __int64)v13[5] >= 8 )
      v14 = (char *)v13[2];
    v15 = (char *)a3;
    if ( a3[3] >= 8uLL )
      v15 = (char *)*a3;
    if ( v5 == v13[4] )
    {
      v16 = a3[2];
      if ( v5 )
      {
        v17 = v15 - v14;
        while ( 1 )
        {
          v18 = *(_WORD *)&v14[v17];
          if ( v18 != *(_WORD *)v14 )
            break;
          v14 += 2;
          if ( !--v16 )
            goto LABEL_18;
        }
        v19 = v18 < *(_WORD *)v14 ? -1 : 1;
      }
      else
      {
LABEL_18:
        v19 = 0;
      }
      if ( !v19 )
      {
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 0;
        result = a2;
        goto LABEL_37;
      }
    }
  }
  sub_1800B639C((__int64)(a1 + 1), *v10, (__int64)a3);
  v21 = (__int64 *)a1[1];
  v22 = *v21;
  v33 = v22;
  v23 = *(_QWORD *)v22;
  if ( v13 != *(__int64 **)v22 )
  {
    **(_QWORD **)(v22 + 8) = v23;
    **(_QWORD **)(v23 + 8) = v13;
    *(_QWORD *)v13[1] = v22;
    v24 = v13[1];
    v13[1] = *(_QWORD *)(v23 + 8);
    *(_QWORD *)(v23 + 8) = *(_QWORD *)(v22 + 8);
    *(_QWORD *)(v22 + 8) = v24;
    v21 = (__int64 *)a1[1];
  }
  v25 = a1[3];
  v26 = 2 * v9;
  if ( *(__int64 **)(v25 + 8 * v26) == v21 )
  {
    *(_QWORD *)(v25 + 8 * v26) = v22;
    v27 = a1[3];
    *(_QWORD *)(v27 + 8 * v26 + 8) = v22;
  }
  else if ( *(__int64 **)(v25 + 8 * v26) == v13 )
  {
    *(_QWORD *)(v25 + 8 * v26) = v22;
  }
  else
  {
    v28 = *(__int64 **)(v25 + 8 * v26 + 8);
    v29 = *v28;
    *(_QWORD *)(v25 + 8 * v26 + 8) = *v28;
    if ( v29 != v22 )
    {
      v30 = a1[3];
      v31 = *(_QWORD *)(v30 + 8 * v26 + 8);
      *(_QWORD *)(v30 + 8 * v26 + 8) = *(_QWORD *)(v31 + 8);
    }
  }
  try
  {
    sub_1800C5D4C(a1);
    *(_QWORD *)a2 = v22;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v32 = sub_180089BB4((__int64)a1, &v33, v33);
    sub_1800C6460(a1, &v34, *v32);
    throw;
  }
LABEL_37:
  try
  {
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
