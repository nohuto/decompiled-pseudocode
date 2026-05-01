/*
 * XREFs of sub_18002E0B4 @ 0x18002E0B4
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002E0B4(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v13 = 0;
  v12 = 1;
  v8 = a5;
  v10 = 0;
  v9 = 8;
  return sub_18002E278((int)&dword_1800B3218, a2, 0, 0, 4u, &v7);
}
