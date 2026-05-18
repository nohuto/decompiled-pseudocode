/*
 * XREFs of sub_1800853C8 @ 0x1800853C8
 * Callers:
 *     sub_180088464 @ 0x180088464 (sub_180088464.c)
 *     sub_180089ACC @ 0x180089ACC (sub_180089ACC.c)
 * Callees:
 *     sub_18008987C @ 0x18008987C (sub_18008987C.c)
 *     sub_18008A174 @ 0x18008A174 (sub_18008A174.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800853C8(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 **v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  _BYTE v27[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = v8 & a1[6];
  v11 = a1[1];
  v12 = a1[3];
  v13 = *(_QWORD *)(v12 + 16 * v10);
  if ( v11 != v13 )
  {
    v11 = **(_QWORD **)(v12 + 16 * v10 + 8);
    while ( v11 != v13 )
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( *a3 == *(_QWORD *)(v11 + 16) )
      {
        sub_18008A174(a1 + 1, v27, a4);
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 0;
        result = a2;
        goto LABEL_23;
      }
    }
  }
  v15 = *a4;
  if ( v11 != *a4 )
  {
    *(_QWORD *)a4[1] = v15;
    **(_QWORD **)(v15 + 8) = v11;
    **(_QWORD **)(v11 + 8) = a4;
    v16 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = a4[1];
    a4[1] = v16;
  }
  v17 = 2 * v10;
  v18 = a1[3];
  v19 = *(_QWORD *)(v18 + 16 * v10);
  v20 = 2 * v10;
  if ( v19 == a1[1] )
  {
    *(_QWORD *)(v18 + 8 * v20) = a4;
    v21 = a1[3];
    *(_QWORD *)(v21 + 8 * v20 + 8) = a4;
  }
  else if ( v19 == v11 )
  {
    *(_QWORD *)(v18 + 8 * v20) = a4;
  }
  else
  {
    v22 = *(__int64 ***)(v18 + 8 * v20 + 8);
    v23 = *v22;
    *(_QWORD *)(v18 + 8 * v20 + 8) = *v22;
    if ( v23 != a4 )
    {
      v24 = a1[3];
      v25 = *(_QWORD *)(v24 + 8 * v17 + 8);
      *(_QWORD *)(v24 + 8 * v17 + 8) = *(_QWORD *)(v25 + 8);
    }
  }
  try
  {
    sub_18008987C(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v26 = (_QWORD *)sub_180089BB4(a1, v27, a4);
    sub_1800856C4(a1, &v28, *v26);
    throw;
  }
LABEL_23:
  try
  {
  }
  catch ( ... )
  {
    sub_180089A8C(a1, a4);
    throw;
  }
  return result;
}
