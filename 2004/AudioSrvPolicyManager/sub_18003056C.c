/*
 * XREFs of sub_18003056C @ 0x18003056C
 * Callers:
 *     sub_18002FEBC @ 0x18002FEBC (sub_18002FEBC.c)
 *     sub_180030814 @ 0x180030814 (sub_180030814.c)
 * Callees:
 *     sub_180019AE8 @ 0x180019AE8 (sub_180019AE8.c)
 *     sub_1800306E8 @ 0x1800306E8 (sub_1800306E8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_18003056C(_QWORD *a1, __int64 a2, _QWORD *a3, void **a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 result; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  void ***v22; // rax
  void **v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 **v27; // rax
  __int64 v28; // [rsp+20h] [rbp-18h] BYREF
  __int64 v29; // [rsp+28h] [rbp-10h] BYREF

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = v8 & a1[6];
  v11 = (_QWORD *)a1[1];
  v12 = a1[3];
  v13 = *(_QWORD **)(v12 + 16 * v10);
  if ( v11 != v13 )
  {
    v11 = **(_QWORD ***)(v12 + 16 * v10 + 8);
    while ( v11 != v13 )
    {
      v11 = (_QWORD *)v11[1];
      if ( *a3 == v11[2] )
      {
        *(_QWORD *)a4[1] = *a4;
        *((_QWORD *)*a4 + 1) = a4[1];
        --a1[2];
        sub_180019AE8(a4 + 3);
        sub_180039D98(a4);
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v15 = (_QWORD **)*a4;
  if ( v11 != *a4 )
  {
    *(_QWORD *)a4[1] = v15;
    *v15[1] = v11;
    *(_QWORD *)v11[1] = a4;
    v16 = (_QWORD *)v11[1];
    v11[1] = v15[1];
    v15[1] = a4[1];
    a4[1] = v16;
  }
  v17 = 2 * v10;
  v18 = a1[3];
  v19 = *(_QWORD **)(v18 + 16 * v10);
  v20 = 2 * v10;
  if ( v19 == (_QWORD *)a1[1] )
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
    v22 = *(void ****)(v18 + 8 * v20 + 8);
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
    sub_1800306E8();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v27 = (unsigned __int8 **)sub_18000E238(v26, &v28, (__int64)a4);
    sub_180030498(a1, &v29, *v27);
    throw;
  }
  return result;
}
