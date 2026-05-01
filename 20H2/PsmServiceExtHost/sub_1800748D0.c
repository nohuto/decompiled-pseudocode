/*
 * XREFs of sub_1800748D0 @ 0x1800748D0
 * Callers:
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800748D0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v14 = a6;
  v15 = 4LL;
  v10 = 2LL;
  v11 = *a5;
  v6 = 4 * *((unsigned __int16 *)a5 + 4);
  v9 = a5 + 1;
  v12 = v6;
  v13 = 0;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 5u, &v8);
}
