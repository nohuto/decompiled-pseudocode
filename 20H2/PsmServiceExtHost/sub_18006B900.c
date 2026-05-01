/*
 * XREFs of sub_18006B900 @ 0x18006B900
 * Callers:
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18006B900(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v5 = *a5;
  v8 = a5 + 1;
  v10 = 0;
  v9 = 2;
  v11 = v5;
  LODWORD(v5) = *((unsigned __int16 *)a5 + 4);
  v13 = 0;
  v12 = 8 * v5;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 4u, &v7);
}
