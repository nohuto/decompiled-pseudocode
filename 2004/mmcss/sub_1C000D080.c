/*
 * XREFs of sub_1C000D080 @ 0x1C000D080
 * Callers:
 *     sub_1C000D310 @ 0x1C000D310 (sub_1C000D310.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     sub_1C00044F8 @ 0x1C00044F8 (sub_1C00044F8.c)
 */

__int64 __fastcall sub_1C000D080(void *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  __int64 Length; // [rsp+20h] [rbp-38h]
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-20h] BYREF

  ResultLength = 0;
  KeyValueInformation = 0LL;
  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0
    && DWORD1(KeyValueInformation) == 4 )
  {
    return HIDWORD(KeyValueInformation);
  }
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 3u )
  {
    LODWORD(Length) = a3;
    sub_1C00044F8((__int64)off_1C0007000->AttachedDevice, 0x11u, (__int64)&unk_1C0005230, &a2->Length, Length);
  }
  return a3;
}
