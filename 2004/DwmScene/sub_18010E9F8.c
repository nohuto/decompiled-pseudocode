/*
 * XREFs of sub_18010E9F8 @ 0x18010E9F8
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 *     sub_180076C30 @ 0x180076C30 (sub_180076C30.c)
 *     sub_180076F08 @ 0x180076F08 (sub_180076F08.c)
 *     sub_180077988 @ 0x180077988 (sub_180077988.c)
 *     sub_180077C90 @ 0x180077C90 (sub_180077C90.c)
 *     sub_1800786DC @ 0x1800786DC (sub_1800786DC.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_18007A284 @ 0x18007A284 (sub_18007A284.c)
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 *     sub_1800BD760 @ 0x1800BD760 (sub_1800BD760.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     unknown_libname_48 @ 0x180125822 (unknown_libname_48.c)
 *     sub_180125912 @ 0x180125912 (sub_180125912.c)
 *     unknown_libname_130 @ 0x18012592A (unknown_libname_130.c)
 *     sub_18012594E @ 0x18012594E (sub_18012594E.c)
 *     sub_1801259BA @ 0x1801259BA (sub_1801259BA.c)
 *     sub_1801259F6 @ 0x1801259F6 (sub_1801259F6.c)
 *     sub_180125A32 @ 0x180125A32 (sub_180125A32.c)
 *     sub_180125A62 @ 0x180125A62 (sub_180125A62.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_2 @ 0x180125A92 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180125A92.c)
 *     sub_180125BC4 @ 0x180125BC4 (sub_180125BC4.c)
 *     sub_180125C84 @ 0x180125C84 (sub_180125C84.c)
 *     sub_180125CB4 @ 0x180125CB4 (sub_180125CB4.c)
 *     sub_180125CF0 @ 0x180125CF0 (sub_180125CF0.c)
 *     sub_180125D2C @ 0x180125D2C (sub_180125D2C.c)
 *     sub_180125D5C @ 0x180125D5C (sub_180125D5C.c)
 *     sub_180125D74 @ 0x180125D74 (sub_180125D74.c)
 *     sub_180127BF8 @ 0x180127BF8 (sub_180127BF8.c)
 * Callees:
 *     sub_18010EB08 @ 0x18010EB08 (sub_18010EB08.c)
 *     sub_18010EB9C @ 0x18010EB9C (sub_18010EB9C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010E9F8(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_18010EB9C(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_18010EB08(
               *(_QWORD *)a1,
               2,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40));
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return result;
}
