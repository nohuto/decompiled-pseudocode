/*
 * XREFs of HviIsIommuInUse @ 0x1405BF3B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x1405BF1A0 (HviGetHardwareFeatures.c)
 */

bool __fastcall HviIsIommuInUse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  HviGetHardwareFeatures((__int64)&v5, a2, a3, a4);
  return (v5 & 0x30) == 48;
}
