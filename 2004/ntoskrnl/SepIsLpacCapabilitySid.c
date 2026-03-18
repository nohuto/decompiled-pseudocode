/*
 * XREFs of SepIsLpacCapabilitySid @ 0x1406F7F48
 * Callers:
 *     SepCheckCapabilities @ 0x1406F7DD0 (SepCheckCapabilities.c)
 * Callees:
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 */

BOOLEAN __fastcall SepIsLpacCapabilitySid(PSID Sid1)
{
  PSID **v2; // rdi
  unsigned int v3; // ebx
  BOOLEAN result; // al

  v2 = (PSID **)SeLpacCapabilitySids;
  v3 = 0;
  while ( 1 )
  {
    result = RtlEqualSid(Sid1, **v2);
    if ( result )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 0x11 )
      return result;
  }
  return 1;
}
