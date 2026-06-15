/*
 * XREFs of sub_18005238C @ 0x18005238C
 * Callers:
 *     sub_180003AA0 @ 0x180003AA0 (sub_180003AA0.c)
 * Callees:
 *     sub_18006E0A0 @ 0x18006E0A0 (sub_18006E0A0.c)
 */

__int64 __fastcall sub_18005238C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+50h] [rbp+10h] BYREF
  __int64 v6; // [rsp+58h] [rbp+18h] BYREF
  _QWORD *v7; // [rsp+60h] [rbp+20h] BYREF

  v7 = a3;
  v6 = a2;
  *a3 = 0LL;
  v5 = 0LL;
  v4[1] = &v6;
  v4[2] = &v7;
  v4[0] = a1;
  v4[3] = &v5;
  sub_18006E0A0(v4);
  return v5;
}
