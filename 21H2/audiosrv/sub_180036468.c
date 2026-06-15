/*
 * XREFs of sub_180036468 @ 0x180036468
 * Callers:
 *     sub_180072804 @ 0x180072804 (sub_180072804.c)
 *     sub_1800729C4 @ 0x1800729C4 (sub_1800729C4.c)
 *     sub_180072B00 @ 0x180072B00 (sub_180072B00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180036468(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180148158;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  return a1;
}
