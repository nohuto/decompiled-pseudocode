/*
 * XREFs of sub_18003CA5C @ 0x18003CA5C
 * Callers:
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003CA5C(_QWORD *a1)
{
  a1[4] = 1LL;
  *a1 = off_18008D590;
  a1[1] = off_18008D5C8;
  a1[2] = off_18008D550;
  if ( qword_1800B5050 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800B5050 + 8LL))(qword_1800B5050);
  *a1 = off_18008D590;
  a1[1] = off_18008D570;
  a1[2] = off_18008D550;
  return a1;
}
