/*
 * XREFs of sub_180140DD4 @ 0x180140DD4
 * Callers:
 *     sub_180140E44 @ 0x180140E44 (sub_180140E44.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_1801427B4 @ 0x1801427B4 (sub_1801427B4.c)
 */

__int64 (__fastcall **__fastcall sub_180140DD4(_QWORD *a1))()
{
  __int64 v2; // rcx
  __int64 (__fastcall **result)(); // rax

  *a1 = off_180156400;
  a1[1] = off_180156468;
  v2 = a1[24];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_1801427B4(a1 + 15);
  sub_1800F4CBC((__int64)(a1 + 9));
  sub_1800F4CBC((__int64)(a1 + 3));
  result = &off_180147338;
  a1[1] = &off_180147338;
  return result;
}
