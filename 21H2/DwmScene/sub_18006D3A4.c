/*
 * XREFs of sub_18006D3A4 @ 0x18006D3A4
 * Callers:
 *     sub_18006AFD4 @ 0x18006AFD4 (sub_18006AFD4.c)
 *     sub_18006B074 @ 0x18006B074 (sub_18006B074.c)
 *     sub_18006C9C0 @ 0x18006C9C0 (sub_18006C9C0.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x1800D69EC (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 * Callees:
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D3A4(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rbp
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      v4 = v1 + 17;
      do
      {
        sub_180069FBC(v4, (__int64)v4);
        v4 += 19;
      }
      while ( v4 - 17 != v3 );
    }
    v5 = 152 * (((char *)a1[2] - (char *)v1) / 152);
    if ( v5 >= 0x1000 )
    {
      v6 = *(v1 - 1);
      v7 = v5 + 39;
      if ( (unsigned __int64)v1 - v6 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x18006D470LL);
      }
      v1 = (__int64 *)*(v1 - 1);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
