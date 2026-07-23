/*
 * XREFs of CmFcpManagerArmFeatureUsageRetryTimer @ 0x1404E8184
 * Callers:
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B4F90 (CmFcpManagerDrainUsageNotifications.c)
 * Callees:
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CmFcpManagerArmFeatureUsageRetryTimer(__int64 a1)
{
  _BOOL8 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 337) )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    result = ExSetTimer(*(_QWORD *)(a1 + 488), -600000000LL, 0LL, (__int64)v3);
    *(_BYTE *)(a1 + 337) = 1;
  }
  return result;
}
