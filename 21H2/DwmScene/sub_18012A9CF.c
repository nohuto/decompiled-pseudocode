/*
 * XREFs of sub_18012A9CF @ 0x18012A9CF
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B24 @ 0x180010B24 (sub_180010B24.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A9CF(__int64 a1, __int64 a2)
{
  __int64 *LocaleT; // rdi
  __int64 v4; // rbx

  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 40));
  v4 = *(_QWORD *)(a2 + 168);
  sub_180010B24(*(_QWORD *)(a2 + 40), v4 + 16LL * *(_QWORD *)(a2 + 56), *LocaleT);
  *LocaleT = v4;
  throw;
}
