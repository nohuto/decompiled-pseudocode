/*
 * XREFs of sub_180105324 @ 0x180105324
 * Callers:
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

__int64 __fastcall sub_180105324(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rcx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-69h] BYREF
  __int64 v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  __int64 v15; // [rsp+60h] [rbp-39h]
  __int64 v16; // [rsp+68h] [rbp-31h]
  __int64 v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  __int64 v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  __int64 v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  __int64 v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]

  v23 = a10;
  v21 = a9;
  v19 = a8;
  v17 = a7;
  v24 = 8LL;
  v14 = 8LL;
  v22 = 4LL;
  v10 = *a6;
  v13 = a5;
  v15 = v10;
  v20 = 4LL;
  v18 = 4LL;
  v16 = 16LL;
  return sub_180109634((int)&CallbackContext, a2, 0, 0, 8u, &v12);
}
