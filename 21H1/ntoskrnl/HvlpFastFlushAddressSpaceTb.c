/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x14038CD60
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14038CC7C (KiFlushAddressSpaceTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14038CEBC (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     HvlpPrepareFlushHeader @ 0x14038CE68 (HvlpPrepareFlushHeader.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _BYTE v5[32]; // [rsp+40h] [rbp-38h] BYREF

  LOBYTE(a4) = a3;
  HvlpPrepareFlushHeader(v5, a1, a2, a4);
  return HvcallFastExtended(65538, (unsigned int)v5, 24, 0, 0);
}
