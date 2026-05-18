/*
 * XREFs of sub_1801250FD @ 0x1801250FD
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A44 @ 0x180010A44 (sub_180010A44.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     sub_180070224 @ 0x180070224 (sub_180070224.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801250FD(__int64 a1, _QWORD *a2)
{
  char *v3; // r9
  char *v4; // rbx
  char *v5; // r14
  _LocaleUpdate *v6; // rsi
  __int64 **LocaleT; // rdi
  __int64 v8; // rbx

  v3 = (char *)a2[21];
  v4 = &v3[32 * a2[7]];
  v5 = &v3[16 * a2[7]];
  v6 = (_LocaleUpdate *)a2[5];
  sub_180010AA8((__int64)v6, v5, v4, v3);
  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(v6);
  sub_180070224((__int64 *)v4, *LocaleT, v5);
  v8 = a2[8];
  sub_180010A44((__int64)v6, v8, (__int64)*LocaleT);
  *LocaleT = (__int64 *)v8;
  throw;
}
