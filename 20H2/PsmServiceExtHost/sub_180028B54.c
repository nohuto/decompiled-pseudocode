/*
 * XREFs of sub_180028B54 @ 0x180028B54
 * Callers:
 *     sub_180028EB0 @ 0x180028EB0 (sub_180028EB0.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     _assert @ 0x180028750 (_assert.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800625D0 @ 0x1800625D0 (sub_1800625D0.c)
 */

void __fastcall __noreturn sub_180028B54(__int64 *a1, void *a2, void *a3)
{
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+E0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B3218, 64LL) )
      sub_18002E278((int)&dword_1800B3218, (int)&dword_18009F028, 0, 0, 2u, &v7);
  }
  sub_18000B7F8(TlsValue);
  assert(*a1, a2, a3);
}
