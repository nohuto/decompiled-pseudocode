/*
 * XREFs of sub_180125176 @ 0x180125176
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A44 @ 0x180010A44 (sub_180010A44.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180125176(__int64 a1, __int64 a2)
{
  __int64 *LocaleT; // rbx

  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 40));
  sub_180010A44(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), *LocaleT);
  *LocaleT = *(_QWORD *)(a2 + 168);
  throw;
}
