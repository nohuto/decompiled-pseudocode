/*
 * XREFs of sub_180067BA4 @ 0x180067BA4
 * Callers:
 *     sub_18006570C @ 0x18006570C (sub_18006570C.c)
 *     sub_1800657A4 @ 0x1800657A4 (sub_1800657A4.c)
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067BA4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    v5 = *a1;
    if ( v2 != v4 )
    {
      do
      {
        v6 = *(_QWORD *)(v5 + 56);
        if ( v6 )
        {
          LOBYTE(a2) = v6 != v5;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
          *(_QWORD *)(v5 + 56) = 0LL;
        }
        v5 += 64LL;
      }
      while ( v5 != v4 );
    }
    v7 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( v7 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v2 - 8);
      v9 = v7 + 39;
      if ( (unsigned __int64)(v2 - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v9);
        JUMPOUT(0x180067C56LL);
      }
      v2 = *(_QWORD *)(v2 - 8);
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
