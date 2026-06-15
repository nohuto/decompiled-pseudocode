/*
 * XREFs of sub_18005244C @ 0x18005244C
 * Callers:
 *     sub_1800523F0 @ 0x1800523F0 (sub_1800523F0.c)
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005244C(_QWORD *a1)
{
  (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(qword_18019E640, a1[76]);
}
