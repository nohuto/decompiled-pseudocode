/*
 * XREFs of sub_18012B1D0 @ 0x18012B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180012758 @ 0x180012758 (sub_180012758.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B1D0(__int64 a1, __int64 a2)
{
  __int64 *LocaleT; // rbx

  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 40));
  sub_180012758(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), *LocaleT);
  *LocaleT = *(_QWORD *)(a2 + 168);
  throw;
}
