/*
 * XREFs of sub_1800246C4 @ 0x1800246C4
 * Callers:
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_18003EE50 @ 0x18003EE50 (sub_18003EE50.c)
 *     sub_180043904 @ 0x180043904 (sub_180043904.c)
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800246C4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_18006187C(a1 + 24);
  v4 = *(_QWORD *)(a1 + 4264);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
