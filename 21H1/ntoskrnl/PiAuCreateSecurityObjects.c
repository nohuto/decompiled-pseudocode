/*
 * XREFs of PiAuCreateSecurityObjects @ 0x140A49FE4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     PiAuFreeUserSids @ 0x140A4A040 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A4A0D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140A4A274 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4A498 (PiAuCreateStandardSecurityObject.c)
 */

__int64 PiAuCreateSecurityObjects()
{
  int UserSids; // ebx
  _BYTE v2[72]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, 0x40uLL);
  UserSids = PiAuCreateUserSids(v2);
  if ( UserSids >= 0 )
  {
    UserSids = PiAuCreateStandardSecurityObject(v2);
    if ( UserSids >= 0 )
      UserSids = PiAuCreateLocalSystemSecurityObject(v2);
  }
  PiAuFreeUserSids(v2);
  return (unsigned int)UserSids;
}
