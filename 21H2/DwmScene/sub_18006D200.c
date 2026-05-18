/*
 * XREFs of sub_18006D200 @ 0x18006D200
 * Callers:
 *     sub_180069B94 @ 0x180069B94 (sub_180069B94.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006D200(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 result; // rax

  v4 = *a1;
  v7 = a2;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        v10 = *(_QWORD *)(v4 + 56);
        if ( v10 )
        {
          LOBYTE(a2) = v10 != v4;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, a2);
          *(_QWORD *)(v4 + 56) = 0LL;
        }
        v4 += 64LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v11 = (a1[2] - v4) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( v11 >= 0x1000 )
    {
      v12 = *(_QWORD *)(v4 - 8);
      v13 = v11 + 39;
      if ( (unsigned __int64)(v4 - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v13);
        JUMPOUT(0x18006D2CELL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    result = j_j__o_free(v4);
  }
  a1[1] = v7 + (a3 << 6);
  a1[2] = v7 + (a4 << 6);
  *a1 = v7;
  return result;
}
