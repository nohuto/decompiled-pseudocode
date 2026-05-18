/*
 * XREFs of sub_1800A83E0 @ 0x1800A83E0
 * Callers:
 *     sub_1800A81F8 @ 0x1800A81F8 (sub_1800A81F8.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_180081170 @ 0x180081170 (sub_180081170.c)
 *     sub_1800A7C84 @ 0x1800A7C84 (sub_1800A7C84.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A83E0(__int64 **a1, __int64 a2, char a3, int *a4, _QWORD *a5)
{
  __int64 *v8; // rdx
  __int64 *v9; // rdi
  __int64 v10; // rax
  char v11; // r14
  int v12; // ecx
  __int64 *v13; // rbx
  __int64 result; // rax
  __int64 *v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-40h]
  __int64 **v17; // [rsp+40h] [rbp-38h]

  v17 = a1;
  v16 = a5;
  v8 = *a1;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *a4;
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = *(_DWORD *)(v10 + 32) >= v12;
      else
        v11 = v12 < *(_DWORD *)(v10 + 32);
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  try
  {
    v13 = v9;
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_1800A7C84(a1, &v15, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180027CD0(&v15);
      v13 = v15;
    }
    if ( *((_DWORD *)v13 + 8) >= *a4 )
    {
      sub_1800258BC(a5 + 7, (__int64)(a5 + 7));
      sub_180081170(a5 + 5);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800A7C84(a1, &v15, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_1800AB19C(v17, v16);
    throw;
  }
  return result;
}
