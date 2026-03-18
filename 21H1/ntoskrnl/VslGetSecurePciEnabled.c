/*
 * XREFs of VslGetSecurePciEnabled @ 0x1403CB830
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1404EF5F0 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

bool VslGetSecurePciEnabled()
{
  bool result; // al
  _DWORD v1[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  result = 0;
  if ( HvlQueryVsmConnection(0LL) )
  {
    v1[4] = 1;
    if ( VslpEnterIumSecureMode(2u, 263, 0, (__int64)v1) >= 0 && (v1[4] & 1) != 0 )
      return 1;
  }
  return result;
}
