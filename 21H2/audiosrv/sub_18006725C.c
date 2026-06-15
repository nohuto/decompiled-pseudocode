/*
 * XREFs of sub_18006725C @ 0x18006725C
 * Callers:
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 *     sub_1801215D0 @ 0x1801215D0 (sub_1801215D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006725C(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
