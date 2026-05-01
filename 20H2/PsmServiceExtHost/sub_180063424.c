/*
 * XREFs of sub_180063424 @ 0x180063424
 * Callers:
 *     sub_180003250 @ 0x180003250 (sub_180003250.c)
 *     sub_180006B7C @ 0x180006B7C (sub_180006B7C.c)
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_180008408 @ 0x180008408 (sub_180008408.c)
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 *     sub_180021FFC @ 0x180021FFC (sub_180021FFC.c)
 *     sub_180022888 @ 0x180022888 (sub_180022888.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 *     sub_1800384A0 @ 0x1800384A0 (sub_1800384A0.c)
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 *     sub_180040718 @ 0x180040718 (sub_180040718.c)
 *     sub_1800431A0 @ 0x1800431A0 (sub_1800431A0.c)
 *     sub_180069BA4 @ 0x180069BA4 (sub_180069BA4.c)
 *     sub_18006DD8C @ 0x18006DD8C (sub_18006DD8C.c)
 *     sub_18006ECD0 @ 0x18006ECD0 (sub_18006ECD0.c)
 *     sub_1800738A8 @ 0x1800738A8 (sub_1800738A8.c)
 *     sub_180077780 @ 0x180077780 (sub_180077780.c)
 *     sub_1800780B4 @ 0x1800780B4 (sub_1800780B4.c)
 *     sub_180079190 @ 0x180079190 (sub_180079190.c)
 *     sub_180079380 @ 0x180079380 (sub_180079380.c)
 *     sub_1800794D8 @ 0x1800794D8 (sub_1800794D8.c)
 *     sub_18007ADB0 @ 0x18007ADB0 (sub_18007ADB0.c)
 *     sub_18007B468 @ 0x18007B468 (sub_18007B468.c)
 *     sub_18007DA90 @ 0x18007DA90 (sub_18007DA90.c)
 *     sub_180080BE8 @ 0x180080BE8 (sub_180080BE8.c)
 *     sub_1800826B0 @ 0x1800826B0 (sub_1800826B0.c)
 *     sub_1800838A0 @ 0x1800838A0 (sub_1800838A0.c)
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180063424(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  v12 = 8;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return sub_18002E278(a1, a2, 0LL, 0LL, 4u, &v7);
}
