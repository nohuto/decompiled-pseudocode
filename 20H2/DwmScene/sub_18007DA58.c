/*
 * XREFs of sub_18007DA58 @ 0x18007DA58
 * Callers:
 *     sub_1800830A0 @ 0x1800830A0 (sub_1800830A0.c)
 *     sub_1800BE380 @ 0x1800BE380 (sub_1800BE380.c)
 * Callees:
 *     sub_18007C6C0 @ 0x18007C6C0 (sub_18007C6C0.c)
 *     sub_18007D368 @ 0x18007D368 (sub_18007D368.c)
 *     sub_18007D6E8 @ 0x18007D6E8 (sub_18007D6E8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _alloca_probe @ 0x18011E680 (_alloca_probe.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18007DA58(__int64 *a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 v6; // rsi
  __int64 v7; // [rsp+30h] [rbp-1028h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-1020h]

  v6 = ((char *)a2 - (char *)a1) >> 4;
  if ( v6 > 32 )
  {
    sub_18007C6C0(&v7, (((char *)a2 - (char *)a1) >> 4) - (((char *)a2 - (char *)a1) >> 5));
    sub_18007D6E8(a1, a2, v6, v7, v8, a3);
    if ( v8 > 0x100 )
      j__o_free(v7);
  }
  else if ( v6 > 1 )
  {
    sub_18007D368(a1, a2, (__int64 (__fastcall *)(__int128 *, __int64 *))a3);
  }
}
