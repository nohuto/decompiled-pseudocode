/*
 * XREFs of sub_180070120 @ 0x180070120
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180077F2C @ 0x180077F2C (sub_180077F2C.c)
 */

char __fastcall sub_180070120(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  result = sub_180077F2C(*(_QWORD *)(a2 + 40), 0LL);
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( result )
    {
      v5 = *(_DWORD *)(a2 + 108);
      v10 = 0;
      v6 = v5;
      v9 = 4;
      v8 = &v6;
      return sub_18002E278(v4, (unsigned __int8 *)dword_18009CC41, 0LL, 0LL, 3u, &v7);
    }
  }
  return result;
}
