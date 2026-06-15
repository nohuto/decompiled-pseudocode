/*
 * XREFs of sub_180133A58 @ 0x180133A58
 * Callers:
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_180133A58(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  v9 = 1;
  return sub_180109634((__int64)&dword_18019C4F0, a2, 0LL, 0LL, 4u, &v7);
}
