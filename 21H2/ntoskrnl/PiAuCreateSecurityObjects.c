/*
 * XREFs of PiAuCreateSecurityObjects @ 0x140A526E8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PiAuFreeUserSids @ 0x140A52744 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A527DC (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140A52978 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A52B9C (PiAuCreateStandardSecurityObject.c)
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
