/*
 * XREFs of PiAuCreateSecurityObjects @ 0x140A4FA60
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     PiAuFreeUserSids @ 0x140A4FABC (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A4FB54 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140A4FCF0 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4FF14 (PiAuCreateStandardSecurityObject.c)
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
