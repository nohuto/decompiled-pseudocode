/*
 * XREFs of sub_18000F450 @ 0x18000F450
 * Callers:
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 *     sub_18003504C @ 0x18003504C (sub_18003504C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 sub_18000F450()
{
  __int64 result; // rax
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 )
  {
    result = qword_1800B3230 & 0x40;
    if ( result == qword_1800B3230 )
      return sub_18002E278((int)&dword_1800B3218, (int)&dword_18009F300, 0, 0, 2u, &v1);
  }
  return result;
}
