/*
 * XREFs of sub_180130AE8 @ 0x180130AE8
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180012838 @ 0x180012838 (sub_180012838.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130AE8(__int64 a1, __int64 a2)
{
  __int64 *LocaleT; // rbx

  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 40));
  sub_180012838(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), *LocaleT);
  *LocaleT = *(_QWORD *)(a2 + 168);
  throw;
}
