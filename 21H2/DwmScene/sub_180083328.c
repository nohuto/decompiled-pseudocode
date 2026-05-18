/*
 * XREFs of sub_180083328 @ 0x180083328
 * Callers:
 *     sub_180088970 @ 0x180088970 (sub_180088970.c)
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 * Callees:
 *     sub_180081F90 @ 0x180081F90 (sub_180081F90.c)
 *     sub_180082C38 @ 0x180082C38 (sub_180082C38.c)
 *     sub_180082FB8 @ 0x180082FB8 (sub_180082FB8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _alloca_probe @ 0x180123F50 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180083328(__int64 *a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 v6; // rsi
  __int64 v7; // [rsp+30h] [rbp-1028h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-1020h]

  v6 = ((char *)a2 - (char *)a1) >> 4;
  if ( v6 > 32 )
  {
    sub_180081F90(&v7, (((char *)a2 - (char *)a1) >> 4) - (((char *)a2 - (char *)a1) >> 5));
    sub_180082FB8(a1, a2, v6, v7, v8, a3);
    if ( v8 > 0x100 )
      j__o_free(v7);
  }
  else if ( v6 > 1 )
  {
    sub_180082C38(a1, a2, (__int64 (__fastcall *)(__int128 *, __int64 *))a3);
  }
}
