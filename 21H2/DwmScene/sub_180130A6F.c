/*
 * XREFs of sub_180130A6F @ 0x180130A6F
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180010B88 @ 0x180010B88 (sub_180010B88.c)
 *     sub_180012838 @ 0x180012838 (sub_180012838.c)
 *     unknown_libname_9 @ 0x18011C7BC (unknown_libname_9.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130A6F(__int64 a1, _QWORD *a2)
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
  sub_180010B88((__int64)v6, v5, v4, v3);
  LocaleT = (__int64 **)_LocaleUpdate::GetLocaleT(v6);
  unknown_libname_9((__int64 *)v4, *LocaleT, v5);
  v8 = a2[8];
  sub_180012838((__int64)v6, v8, (__int64)*LocaleT);
  *LocaleT = (__int64 *)v8;
  throw;
}
