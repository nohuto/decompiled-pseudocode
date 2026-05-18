/*
 * XREFs of sub_1800671C0 @ 0x1800671C0
 * Callers:
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 *     sub_18006B044 @ 0x18006B044 (sub_18006B044.c)
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     sub_180077C18 @ 0x180077C18 (sub_180077C18.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_18007D04C @ 0x18007D04C (sub_18007D04C.c)
 *     sub_18008B58C @ 0x18008B58C (sub_18008B58C.c)
 *     sub_1800B4640 @ 0x1800B4640 (sub_1800B4640.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800671C0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        v5 = *(volatile signed __int32 **)(v4 + 8);
        if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
        v4 += 16LL;
      }
      while ( v4 != v3 );
    }
    v6 = (a1[2] - v1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v1 - 8);
      v8 = v6 + 39;
      if ( (unsigned __int64)(v1 - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v8);
        JUMPOUT(0x180067274LL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
