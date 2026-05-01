/*
 * XREFs of sub_18007427C @ 0x18007427C
 * Callers:
 *     sub_180071050 @ 0x180071050 (sub_180071050.c)
 *     sub_1800742F0 @ 0x1800742F0 (sub_1800742F0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

void __fastcall sub_18007427C(__int64 a1)
{
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 44) &= ~1u;
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      sub_18002E278(v1, (unsigned __int8 *)dword_18009DC6C, 0LL, 0LL, 2u, &v2);
  }
}
