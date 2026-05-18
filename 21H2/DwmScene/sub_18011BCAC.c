/*
 * XREFs of sub_18011BCAC @ 0x18011BCAC
 * Callers:
 *     sub_1800272CC @ 0x1800272CC (sub_1800272CC.c)
 *     sub_1800277E8 @ 0x1800277E8 (sub_1800277E8.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_180030D40 @ 0x180030D40 (sub_180030D40.c)
 *     sub_1800384E4 @ 0x1800384E4 (sub_1800384E4.c)
 *     sub_180038AF0 @ 0x180038AF0 (sub_180038AF0.c)
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_18003CAC0 @ 0x18003CAC0 (sub_18003CAC0.c)
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 *     sub_180047DF0 @ 0x180047DF0 (sub_180047DF0.c)
 *     sub_180048190 @ 0x180048190 (sub_180048190.c)
 *     sub_18006FCD0 @ 0x18006FCD0 (sub_18006FCD0.c)
 *     sub_180070AE0 @ 0x180070AE0 (sub_180070AE0.c)
 *     sub_180070BB8 @ 0x180070BB8 (sub_180070BB8.c)
 *     sub_180070C60 @ 0x180070C60 (sub_180070C60.c)
 *     sub_180078B28 @ 0x180078B28 (sub_180078B28.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007A10C @ 0x18007A10C (sub_18007A10C.c)
 *     sub_18007CC84 @ 0x18007CC84 (sub_18007CC84.c)
 *     sub_18007D258 @ 0x18007D258 (sub_18007D258.c)
 *     sub_180097958 @ 0x180097958 (sub_180097958.c)
 *     sub_180098014 @ 0x180098014 (sub_180098014.c)
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 *     sub_1800A99A4 @ 0x1800A99A4 (sub_1800A99A4.c)
 *     sub_1800AD770 @ 0x1800AD770 (sub_1800AD770.c)
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_1800D61D8 @ 0x1800D61D8 (sub_1800D61D8.c)
 *     sub_1801171C8 @ 0x1801171C8 (sub_1801171C8.c)
 *     sub_180118140 @ 0x180118140 (sub_180118140.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     sub_18011AC68 @ 0x18011AC68 (sub_18011AC68.c)
 *     sub_180120DD8 @ 0x180120DD8 (sub_180120DD8.c)
 *     sub_18012CF8D @ 0x18012CF8D (sub_18012CF8D.c)
 *     sub_1801302C1 @ 0x1801302C1 (sub_1801302C1.c)
 *     sub_18013038C @ 0x18013038C (sub_18013038C.c)
 *     sub_180130475 @ 0x180130475 (sub_180130475.c)
 *     sub_180130540 @ 0x180130540 (sub_180130540.c)
 *     sub_180130620 @ 0x180130620 (sub_180130620.c)
 *     sub_180130740 @ 0x180130740 (sub_180130740.c)
 *     sub_180130F57 @ 0x180130F57 (sub_180130F57.c)
 * Callees:
 *     sub_18011B6C0 @ 0x18011B6C0 (sub_18011B6C0.c)
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
 */

void sub_18011BCAC(__int64 *a1, int a2, const char *a3, ...)
{
  int v5; // [rsp+50h] [rbp+18h]
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v5 = (int)a3;
  sub_18011B6C0((__int64)a1);
  sub_18011B9C8(*a1, a2, v5, (__int64)va);
}
