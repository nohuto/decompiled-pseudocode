/*
 * XREFs of sub_18011F280 @ 0x18011F280
 * Callers:
 *     sub_18011EE64 @ 0x18011EE64 (sub_18011EE64.c)
 * Callees:
 *     sub_1800259CC @ 0x1800259CC (sub_1800259CC.c)
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011F280(__int64 **a1, __int64 a2, char a3, int *a4, _QWORD *a5)
{
  __int64 *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  int v12; // ecx
  __int64 *v13; // rbx
  __int64 result; // rax
  _QWORD *v15; // rcx
  __int64 *v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-40h]
  __int64 **v18; // [rsp+40h] [rbp-38h]

  v18 = a1;
  v17 = a5;
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
    v16 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_1800259CC(a1, &v16, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180027CD0(&v16);
      v13 = v16;
    }
    if ( *((_DWORD *)v13 + 8) >= *a4 )
    {
      v15 = (_QWORD *)a5[12];
      if ( v15 )
      {
        LOBYTE(v8) = v15 != a5 + 5;
        (*(void (__fastcall **)(_QWORD *, __int64 *))(*v15 + 32LL))(v15, v8);
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
    sub_18002C17C((__int64)v18, (__int64)v17);
    throw;
  }
  return result;
}
