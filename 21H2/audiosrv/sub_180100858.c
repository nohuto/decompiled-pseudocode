/*
 * XREFs of sub_180100858 @ 0x180100858
 * Callers:
 *     sub_180102594 @ 0x180102594 (sub_180102594.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

char __fastcall sub_180100858(__int64 a1, BYTE *a2)
{
  BYTE v2; // al
  _SYSTEM_POWER_STATUS SystemPowerStatus; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 504);
  if ( v2 != 0xFF )
  {
    *a2 = v2;
    return 1;
  }
  if ( GetSystemPowerStatus(&SystemPowerStatus) )
  {
    *a2 = SystemPowerStatus.ACLineStatus;
    return 1;
  }
  *a2 = -1;
  return 0;
}
