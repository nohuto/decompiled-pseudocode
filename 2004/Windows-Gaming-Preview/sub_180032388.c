/*
 * XREFs of sub_180032388 @ 0x180032388
 * Callers:
 *     sub_180030810 @ 0x180030810 (sub_180030810.c)
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180032388(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &off_18004C520;
  a1[2] = &off_1800486E0;
  sub_180011A50(a1 + 3);
  v2 = qword_18005ADB0;
  *a1 = off_18004C808;
  a1[1] = off_18004C7E8;
  a1[2] = off_18004C7B0;
  a1[3] = off_18004C768;
  a1[8] = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
