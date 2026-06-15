/*
 * XREFs of sub_18006FBBC @ 0x18006FBBC
 * Callers:
 *     sub_18006FA04 @ 0x18006FA04 (sub_18006FA04.c)
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 *     sub_180071190 @ 0x180071190 (sub_180071190.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006FBBC(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
