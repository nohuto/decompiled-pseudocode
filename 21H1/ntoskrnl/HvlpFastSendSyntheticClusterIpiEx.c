/*
 * XREFs of HvlpFastSendSyntheticClusterIpiEx @ 0x1404F1C3C
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14038CF00 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F50B0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpFastSendSyntheticClusterIpiEx(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v5[104]; // [rsp+48h] [rbp-80h] BYREF

  v4 = a2;
  v2 = HvlpAffinityToHvProcessorSet(a1, v5, 88LL);
  return (unsigned __int16)HvcallFastExtended(((v2 + 7) << 14) & 0x3FE0000 | 0x10015u, (__int64)&v4, v2 + 24, 0, 0) != 0
       ? 0xC0000001
       : 0;
}
