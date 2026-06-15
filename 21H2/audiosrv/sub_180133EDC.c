/*
 * XREFs of sub_180133EDC @ 0x180133EDC
 * Callers:
 *     sub_180137BBC @ 0x180137BBC (sub_180137BBC.c)
 * Callees:
 *     sub_180060188 @ 0x180060188 (sub_180060188.c)
 *     sub_1801347D0 @ 0x1801347D0 (sub_1801347D0.c)
 *     sub_180138028 @ 0x180138028 (sub_180138028.c)
 */

__int64 __fastcall sub_180133EDC(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v5; // r15
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // al
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 **v24; // r11
  __int64 **v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v30; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v31; // [rsp+78h] [rbp+20h]

  v31 = a4;
  v5 = a3;
  v8 = a3[2];
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0LL;
  v11 = 2 * v8;
  if ( v11 )
  {
    do
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v10++) ^ (unsigned __int64)v9);
    while ( v10 < v11 );
  }
  v12 = v9 & a1[6];
  v13 = a1[1];
  v14 = 2 * v12;
  v15 = a1[3];
  v16 = *(_QWORD *)(v15 + 16 * v12);
  v30 = v16;
  if ( v13 != v16 )
  {
    v13 = **(_QWORD **)(v15 + 16 * v12 + 8);
    while ( v13 != v16 )
    {
      v13 = *(_QWORD *)(v13 + 8);
      v17 = sub_1801347D0(v16, v5, v13 + 16, v11);
      v16 = v30;
      if ( !v17 )
      {
        sub_180138028(a1 + 1, &v30, a4);
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v19 = *a4;
  if ( v13 != *a4 )
  {
    *(_QWORD *)a4[1] = v19;
    **(_QWORD **)(v19 + 8) = v13;
    **(_QWORD **)(v13 + 8) = a4;
    v20 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(v19 + 8);
    *(_QWORD *)(v19 + 8) = a4[1];
    a4[1] = v20;
  }
  v21 = a1[3];
  v22 = *(_QWORD *)(v21 + 8 * v14);
  if ( v22 == a1[1] )
  {
    *(_QWORD *)(v21 + 16 * v12) = a4;
    v23 = a1[3];
    *(_QWORD *)(v23 + 8 * v14 + 8) = a4;
  }
  else
  {
    v24 = (__int64 **)(v21 + 16 * v12);
    if ( v22 == v13 )
    {
      *v24 = a4;
    }
    else
    {
      v25 = (__int64 **)v24[1];
      v26 = *v25;
      v24[1] = *v25;
      if ( v26 != a4 )
      {
        v27 = a1[3];
        v28 = *(_QWORD *)(v27 + 8 * v14 + 8);
        *(_QWORD *)(v27 + 8 * v14 + 8) = *(_QWORD *)(v28 + 8);
      }
    }
  }
  try
  {
    sub_180060188((__int64)a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    sub_180137F70(a1, &v30, v31);
    throw;
  }
  return result;
}
