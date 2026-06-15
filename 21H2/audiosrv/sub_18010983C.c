/*
 * XREFs of sub_18010983C @ 0x18010983C
 * Callers:
 *     sub_180107BC8 @ 0x180107BC8 (sub_180107BC8.c)
 *     sub_180108FA0 @ 0x180108FA0 (sub_180108FA0.c)
 *     sub_18013F094 @ 0x18013F094 (sub_18013F094.c)
 *     sub_18013F258 @ 0x18013F258 (sub_18013F258.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010983C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v9 = a5;
  v14 = 4LL;
  v12 = 4LL;
  v10 = 4LL;
  return sub_180109634(a1, a2, 0LL, 0LL, 5u, &v8);
}
