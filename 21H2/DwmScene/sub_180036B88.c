/*
 * XREFs of sub_180036B88 @ 0x180036B88
 * Callers:
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_180029210 @ 0x180029210 (sub_180029210.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 *     sub_180039610 @ 0x180039610 (sub_180039610.c)
 *     sub_180039CB0 @ 0x180039CB0 (sub_180039CB0.c)
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_18003CAC0 @ 0x18003CAC0 (sub_18003CAC0.c)
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180036B88(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
