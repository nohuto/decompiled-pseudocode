/*
 * XREFs of sub_180131F20 @ 0x180131F20
 * Callers:
 *     sub_180131C0C @ 0x180131C0C (sub_180131C0C.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180131EBC @ 0x180131EBC (sub_180131EBC.c)
 */

ULONG __fastcall sub_180131F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int64 v8; // [rsp+48h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+58h] [rbp-30h]
  __int64 *v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp-20h]

  v9 = a4;
  v11 = &a5;
  v7 = a3;
  v8 = 16LL;
  v10 = 16LL;
  v12 = 4LL;
  return sub_180131EBC(a1, &stru_18016D460, a3, 4u, &v6);
}
