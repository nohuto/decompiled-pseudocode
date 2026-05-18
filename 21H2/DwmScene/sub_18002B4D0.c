/*
 * XREFs of sub_18002B4D0 @ 0x18002B4D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002B4D0(__int64 a1)
{
  sub_18006714C(a1 + 24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_180070D20(a1);
}
