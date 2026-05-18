/*
 * XREFs of sub_180119B00 @ 0x180119B00
 * Callers:
 *     sub_18011977C @ 0x18011977C (sub_18011977C.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_180089DE0 @ 0x180089DE0 (sub_180089DE0.c)
 *     sub_180119308 @ 0x180119308 (sub_180119308.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180119B00(__int64 **a1, __int64 a2, char a3, char *a4, _QWORD *a5)
{
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  char v11; // r14
  __int64 *v12; // rbx
  __int64 result; // rax
  char v14; // [rsp+30h] [rbp-58h]
  __int64 *v15; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-48h]
  __int64 **v17; // [rsp+48h] [rbp-40h]

  v14 = a3;
  v17 = a1;
  v16 = a5;
  v8 = *a1;
  v15 = v8;
  v9 = v8;
  v10 = v8[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = (int)sub_180089DE0((char *)(v10 + 32), (__int64)a4) >= 0;
      else
        v11 = (int)sub_180089DE0(a4, v10 + 32) < 0;
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
      a3 = v14;
    }
    while ( !*(_BYTE *)(v10 + 25) );
    v8 = v15;
  }
  try
  {
    v12 = v9;
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_180119308(a1, &v15, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180022400(&v15);
      v12 = v15;
    }
    if ( (int)sub_180089DE0((char *)v12 + 32, (__int64)a4) >= 0 )
    {
      sub_18011CB50(a5 + 8);
      unknown_libname_101(a5 + 4);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_180119308(a1, &v15, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_18011B7E4(v17, v16);
    throw;
  }
  return result;
}
