/*
 * XREFs of VslGetSecurePciEnabled @ 0x1403CF2C0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1404F3490 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402E7528 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
