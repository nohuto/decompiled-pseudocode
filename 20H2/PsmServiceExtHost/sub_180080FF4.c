/*
 * XREFs of sub_180080FF4 @ 0x180080FF4
 * Callers:
 *     sub_180080BE8 @ 0x180080BE8 (sub_180080BE8.c)
 *     sub_180080E10 @ 0x180080E10 (sub_180080E10.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

void __fastcall sub_180080FF4(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  *(_DWORD *)(a1 + 544) |= 0x20u;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B3218, 8LL) )
    {
      v4 = *(_QWORD *)(v3 + 40);
      v9 = 0;
      v5 = v4;
      v7 = &v5;
      v8 = v1;
      sub_18002E278(v2, (unsigned __int8 *)dword_1800A1D4C, 0LL, 0LL, 3u, &v6);
    }
  }
}
