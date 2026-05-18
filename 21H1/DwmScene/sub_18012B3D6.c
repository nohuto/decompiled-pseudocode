/*
 * XREFs of sub_18012B3D6 @ 0x18012B3D6
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_18006BAD4 @ 0x18006BAD4 (sub_18006BAD4.c)
 *     sub_1800A6C7C @ 0x1800A6C7C (sub_1800A6C7C.c)
 *     sub_1800AE18C @ 0x1800AE18C (sub_1800AE18C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B3D6(__int64 a1, _QWORD *a2)
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
  sub_1800AE18C((__int64)v6, v5, v4, v3);
  LocaleT = (__int64 *)_LocaleUpdate::GetLocaleT(v6);
  sub_1800A6C7C((__int64)v4, *LocaleT, (__int64)v5);
  v8 = (__int64 *)a2[5];
  sub_18006BAD4((__int64)v6, v8, (__int64 *)*LocaleT);
  *LocaleT = (__int64)v8;
  throw;
}
