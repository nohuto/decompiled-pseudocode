/*
 * XREFs of sub_180130DA6 @ 0x180130DA6
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_1800713A4 @ 0x1800713A4 (sub_1800713A4.c)
 *     sub_1800B3A5C @ 0x1800B3A5C (sub_1800B3A5C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130DA6(__int64 a1, __int64 a2)
{
  _LocaleUpdate *v3; // rbx
  __int64 **LocaleT; // rdi

  v3 = *(_LocaleUpdate **)(a2 + 32);
  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(v3);
  sub_1800B3A5C((__int64)v3, *(_QWORD **)(a2 + 48), *LocaleT, *(char **)(a2 + 152));
  sub_1800713A4((__int64)v3, *(__int64 **)(a2 + 48), *LocaleT);
  *LocaleT = *(__int64 **)(a2 + 40);
  throw;
}
