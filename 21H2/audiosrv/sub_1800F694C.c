/*
 * XREFs of sub_1800F694C @ 0x1800F694C
 * Callers:
 *     unknown_libname_310 @ 0x1800F6DE0 (unknown_libname_310.c)
 *     sub_1800F6E00 @ 0x1800F6E00 (sub_1800F6E00.c)
 *     sub_1800F6F10 @ 0x1800F6F10 (sub_1800F6F10.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800F694C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[2];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  sub_18006A148(a1);
  return a1;
}
