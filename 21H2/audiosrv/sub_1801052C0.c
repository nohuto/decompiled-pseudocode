/*
 * XREFs of sub_1801052C0 @ 0x1801052C0
 * Callers:
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 *     sub_1801376CC @ 0x1801376CC (sub_1801376CC.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

__int64 __fastcall sub_1801052C0(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 4;
  return sub_180109634(a1, a2, 0, 0, 3u, &v6);
}
