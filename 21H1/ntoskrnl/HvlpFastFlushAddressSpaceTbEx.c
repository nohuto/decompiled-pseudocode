/*
 * XREFs of HvlpFastFlushAddressSpaceTbEx @ 0x1404F5314
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14038CEBC (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F50B0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v4; // eax
  _QWORD v6[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[12]; // [rsp+50h] [rbp-78h] BYREF

  v6[0] = a1;
  v3 = (a3 != 0 ? 0 : 4) | 2u;
  if ( a1 )
    v3 = a3 != 0 ? 0 : 4;
  v6[1] = v3;
  v4 = HvlpAffinityToHvProcessorSet(a2, v7, 0x50u);
  return HvcallFastExtended(((v4 + 7) << 14) & 0x3FE0000 | 0x10013u, (__int64)v6, v4 + 32, 0, 0);
}
