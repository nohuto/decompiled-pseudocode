/*
 * XREFs of sub_180018A7C @ 0x180018A7C
 * Callers:
 *     sub_180017E8C @ 0x180017E8C (sub_180017E8C.c)
 * Callees:
 *     sub_1800B2258 @ 0x1800B2258 (sub_1800B2258.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180018A7C(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreWorld::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_18013ADE0;
  if ( qword_180218548 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180218548 + 8LL))(qword_180218548);
  *(_QWORD *)a1 = &off_18013AE28;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_1800B2258(a1 + 48);
  return a1;
}
