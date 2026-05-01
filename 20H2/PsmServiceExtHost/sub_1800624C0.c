/*
 * XREFs of sub_1800624C0 @ 0x1800624C0
 * Callers:
 *     sub_180037FB0 @ 0x180037FB0 (sub_180037FB0.c)
 *     sub_18003B97C @ 0x18003B97C (sub_18003B97C.c)
 *     sub_18003C3C0 @ 0x18003C3C0 (sub_18003C3C0.c)
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 *     sub_18003F290 @ 0x18003F290 (sub_18003F290.c)
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 *     sub_180062800 @ 0x180062800 (sub_180062800.c)
 *     sub_180062AC0 @ 0x180062AC0 (sub_180062AC0.c)
 *     sub_180068764 @ 0x180068764 (sub_180068764.c)
 *     sub_180068E54 @ 0x180068E54 (sub_180068E54.c)
 *     sub_180069190 @ 0x180069190 (sub_180069190.c)
 *     sub_180069868 @ 0x180069868 (sub_180069868.c)
 *     sub_18006BD88 @ 0x18006BD88 (sub_18006BD88.c)
 *     sub_18006F640 @ 0x18006F640 (sub_18006F640.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 *     sub_180082200 @ 0x180082200 (sub_180082200.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800624C0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return sub_18002E278(a1, a2, 0LL, 0LL, 4u, &v7);
}
