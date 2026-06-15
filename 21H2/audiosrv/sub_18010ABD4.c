/*
 * XREFs of sub_18010ABD4 @ 0x18010ABD4
 * Callers:
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010ABD4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rcx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-81h] BYREF
  __int64 v14; // [rsp+50h] [rbp-61h]
  __int64 v15; // [rsp+58h] [rbp-59h]
  __int64 v16; // [rsp+60h] [rbp-51h]
  __int64 v17; // [rsp+68h] [rbp-49h]
  __int64 v18; // [rsp+70h] [rbp-41h]
  __int64 v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  __int64 v21; // [rsp+88h] [rbp-29h]
  __int64 v22; // [rsp+90h] [rbp-21h]
  __int64 v23; // [rsp+98h] [rbp-19h]
  __int64 v24; // [rsp+A0h] [rbp-11h]
  __int64 v25; // [rsp+A8h] [rbp-9h]
  __int64 v26; // [rsp+B0h] [rbp-1h]
  __int64 v27; // [rsp+B8h] [rbp+7h]

  v26 = a11;
  v24 = a10;
  v22 = a9;
  v20 = a8;
  v18 = a7;
  v27 = 4LL;
  v25 = 8LL;
  v23 = 4LL;
  v11 = *a6;
  v14 = a5;
  v16 = v11;
  v21 = 4LL;
  v19 = 4LL;
  v17 = 16LL;
  v15 = 8LL;
  return sub_180109634((__int64)&CallbackContext, a2, 0LL, 0LL, 9u, &v13);
}
