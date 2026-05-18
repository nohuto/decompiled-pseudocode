/*
 * XREFs of sub_18012B48E @ 0x18012B48E
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006BAD4 @ 0x18006BAD4 (sub_18006BAD4.c)
 *     sub_1800AE18C @ 0x1800AE18C (sub_1800AE18C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B48E(__int64 a1, __int64 a2)
{
  _LocaleUpdate *v3; // rbx
  __int64 **LocaleT; // rdi

  v3 = *(_LocaleUpdate **)(a2 + 32);
  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(v3);
  sub_1800AE18C((__int64)v3, *(_QWORD **)(a2 + 48), *LocaleT, *(char **)(a2 + 152));
  sub_18006BAD4((__int64)v3, *(__int64 **)(a2 + 48), *LocaleT);
  *LocaleT = *(__int64 **)(a2 + 40);
  throw;
}
