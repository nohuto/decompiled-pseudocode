/*
 * XREFs of sub_18012AACC @ 0x18012AACC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B24 @ 0x180010B24 (sub_180010B24.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180010B88 @ 0x180010B88 (sub_180010B88.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012AACC(__int64 a1, __int64 a2)
{
  _LocaleUpdate *v3; // rbx
  char **LocaleT; // rdi

  v3 = *(_LocaleUpdate **)(a2 + 40);
  LocaleT = (char **)_LocaleUpdate::GetLocaleT(v3);
  sub_180010B88((__int64)v3, *(char **)(a2 + 48), *LocaleT, *(char **)(a2 + 168));
  sub_180010B24((__int64)v3, *(_QWORD *)(a2 + 48), (__int64)*LocaleT);
  *LocaleT = *(char **)(a2 + 64);
  throw;
}
