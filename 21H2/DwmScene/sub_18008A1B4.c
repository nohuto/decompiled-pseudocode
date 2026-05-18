/*
 * XREFs of sub_18008A1B4 @ 0x18008A1B4
 * Callers:
 *     sub_18008A1B4 @ 0x18008A1B4 (sub_18008A1B4.c)
 *     sub_18008CBC4 @ 0x18008CBC4 (sub_18008CBC4.c)
 * Callees:
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008A1B4 @ 0x18008A1B4 (sub_18008A1B4.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18008A1B4(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rsi
  __int64 i; // rbx

  v2 = *a2;
  sub_180089274(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x18008A22ALL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *(_QWORD *)(v2 + 40);
    for ( i = *(_QWORD *)(v2 + 32); i != v7; i += 16LL )
    {
      if ( !(unsigned __int8)sub_18008A1B4(a1, i) )
        return v6;
    }
    return 1;
  }
  return v6;
}
