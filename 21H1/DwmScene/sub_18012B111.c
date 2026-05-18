/*
 * XREFs of sub_18012B111 @ 0x18012B111
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180012758 @ 0x180012758 (sub_180012758.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B111(__int64 a1, __int64 a2)
{
  __int64 *LocaleT; // rdi
  __int64 v4; // rbx

  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 40));
  v4 = *(_QWORD *)(a2 + 168);
  sub_180012758(*(_QWORD *)(a2 + 40), v4 + 16LL * *(_QWORD *)(a2 + 56), *LocaleT);
  *LocaleT = v4;
  throw;
}
