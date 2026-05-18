/*
 * XREFs of sub_18012B390 @ 0x18012B390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006BAD4 @ 0x18006BAD4 (sub_18006BAD4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B390(__int64 a1, __int64 a2)
{
  __int64 **LocaleT; // rdi
  __int64 *v4; // rbx

  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(*(_LocaleUpdate **)(a2 + 32));
  v4 = *(__int64 **)(a2 + 152);
  sub_18006BAD4(*(_QWORD *)(a2 + 32), &v4[4 * *(_QWORD *)(a2 + 56)], *LocaleT);
  *LocaleT = v4;
  throw;
}
