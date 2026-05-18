/*
 * XREFs of sub_180025E40 @ 0x180025E40
 * Callers:
 *     sub_180025C58 @ 0x180025C58 (sub_180025C58.c)
 * Callees:
 *     sub_1800259CC @ 0x1800259CC (sub_1800259CC.c)
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025E40(_QWORD *a1, __int64 a2, char a3, unsigned __int64 *a4, _QWORD *a5)
{
  _QWORD *v8; // rdx
  _QWORD *v9; // rsi
  __int64 *v10; // rax
  char v11; // r14
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 result; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-40h]
  _QWORD *v18; // [rsp+40h] [rbp-38h]

  v18 = a1;
  v17 = a5;
  v8 = (_QWORD *)*a1;
  v9 = (_QWORD *)*a1;
  v10 = *(__int64 **)(*a1 + 8LL);
  v11 = 1;
  if ( !*((_BYTE *)v10 + 25) )
  {
    v12 = *a4;
    do
    {
      v9 = v10;
      if ( a3 )
        v11 = v10[4] >= v12;
      else
        v11 = v12 < v10[4];
      if ( v11 )
        v10 = (__int64 *)*v10;
      else
        v10 = (__int64 *)v10[2];
    }
    while ( !*((_BYTE *)v10 + 25) );
  }
  try
  {
    v13 = v9;
    v16 = v9;
    if ( v11 )
    {
      if ( v9 == (_QWORD *)*v8 )
      {
        *(_QWORD *)a2 = *sub_1800259CC(a1, &v16, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180027CD0(&v16);
      v13 = v16;
    }
    if ( v13[4] >= *a4 )
    {
      v15 = (_QWORD *)a5[12];
      if ( v15 )
      {
        LOBYTE(v8) = v15 != a5 + 5;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v15 + 32LL))(v15, v8);
        a5[12] = 0LL;
      }
      j_j__o_free(a5);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800259CC(a1, &v16, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_18002C17C(v18, v17);
    throw;
  }
  return result;
}
