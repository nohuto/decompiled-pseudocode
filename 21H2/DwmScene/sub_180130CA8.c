/*
 * XREFs of sub_180130CA8 @ 0x180130CA8
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_1800713A4 @ 0x1800713A4 (sub_1800713A4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130CA8(__int64 a1, __int64 a2)
{
  __int64 **LocaleT; // rdi
  __int64 *v4; // rbx

  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 32));
  v4 = *(__int64 **)(a2 + 152);
  sub_1800713A4(*(_QWORD *)(a2 + 32), &v4[4 * *(_QWORD *)(a2 + 56)], *LocaleT);
  *LocaleT = v4;
  throw;
}
