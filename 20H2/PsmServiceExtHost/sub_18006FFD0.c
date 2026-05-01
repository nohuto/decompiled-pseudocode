/*
 * XREFs of sub_18006FFD0 @ 0x18006FFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180077CE0 @ 0x180077CE0 (sub_180077CE0.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

char sub_18006FFD0()
{
  int v0; // eax
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v0 = sub_180077CE0(0LL);
  if ( v0 < 0 )
    LOBYTE(v0) = sub_180085678();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    LOBYTE(v0) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( (_BYTE)v0 )
      LOBYTE(v0) = sub_18002E278(v1, (unsigned __int8 *)dword_18009C945, 0LL, 0LL, 2u, &v3);
  }
  return v0;
}
