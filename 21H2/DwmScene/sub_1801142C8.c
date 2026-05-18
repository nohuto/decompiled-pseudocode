/*
 * XREFs of sub_1801142C8 @ 0x1801142C8
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 *     sub_18007C500 @ 0x18007C500 (sub_18007C500.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007D258 @ 0x18007D258 (sub_18007D258.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007DFAC @ 0x18007DFAC (sub_18007DFAC.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 *     sub_1800C3030 @ 0x1800C3030 (sub_1800C3030.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 *     unknown_libname_50 @ 0x18012B13A (unknown_libname_50.c)
 *     sub_18012B22A @ 0x18012B22A (sub_18012B22A.c)
 *     unknown_libname_132 @ 0x18012B242 (unknown_libname_132.c)
 *     sub_18012B266 @ 0x18012B266 (sub_18012B266.c)
 *     sub_18012B2D2 @ 0x18012B2D2 (sub_18012B2D2.c)
 *     sub_18012B30E @ 0x18012B30E (sub_18012B30E.c)
 *     sub_18012B34A @ 0x18012B34A (sub_18012B34A.c)
 *     sub_18012B37A @ 0x18012B37A (sub_18012B37A.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_2 @ 0x18012B3AA (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012B3AA.c)
 *     sub_18012B4DC @ 0x18012B4DC (sub_18012B4DC.c)
 *     sub_18012B59C @ 0x18012B59C (sub_18012B59C.c)
 *     sub_18012B5CC @ 0x18012B5CC (sub_18012B5CC.c)
 *     sub_18012B608 @ 0x18012B608 (sub_18012B608.c)
 *     sub_18012B644 @ 0x18012B644 (sub_18012B644.c)
 *     sub_18012B674 @ 0x18012B674 (sub_18012B674.c)
 *     sub_18012B68C @ 0x18012B68C (sub_18012B68C.c)
 *     sub_18012D510 @ 0x18012D510 (sub_18012D510.c)
 * Callees:
 *     sub_1801143D8 @ 0x1801143D8 (sub_1801143D8.c)
 *     sub_18011446C @ 0x18011446C (sub_18011446C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801142C8(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_18011446C(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_1801143D8(
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
