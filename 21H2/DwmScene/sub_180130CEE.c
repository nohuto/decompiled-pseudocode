/*
 * XREFs of sub_180130CEE @ 0x180130CEE
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_1800713A4 @ 0x1800713A4 (sub_1800713A4.c)
 *     sub_1800AC54C @ 0x1800AC54C (sub_1800AC54C.c)
 *     sub_1800B3A5C @ 0x1800B3A5C (sub_1800B3A5C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130CEE(__int64 a1, _QWORD *a2)
{
  char *v3; // r9
  char *v4; // rbx
  char *v5; // r14
  _LocaleUpdate *v6; // rsi
  __int64 *LocaleT; // rdi
  __int64 *v8; // rbx

  v3 = (char *)a2[19];
  v4 = &v3[64 * a2[7]];
  v5 = &v3[32 * a2[7]];
  v6 = (_LocaleUpdate *)a2[4];
  sub_1800B3A5C((__int64)v6, v5, v4, v3);
  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(v6);
  sub_1800AC54C((__int64)v4, *LocaleT, (__int64)v5);
  v8 = (__int64 *)a2[5];
  sub_1800713A4((__int64)v6, v8, (__int64 *)*LocaleT);
  *LocaleT = (__int64)v8;
  throw;
}
