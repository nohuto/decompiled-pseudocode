/*
 * XREFs of HalpInitBootTable @ 0x140AFA228
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140AF968C (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140213A40 (HalpAcpiGetTable.c)
 *     HalReadBootRegister @ 0x140A635B8 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140A63600 (HalWriteBootRegister.c)
 */

__int64 (*__fastcall HalpInitBootTable(__int64 a1))()
{
  __int64 Table; // rax
  __int64 (*result)(); // rax
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  Table = HalpAcpiGetTable(a1, 1414483778, 0, 0);
  HalpSimpleBootFlagTable = Table;
  if ( Table && *(_DWORD *)(Table + 4) >= 0x28u && *(_BYTE *)(Table + 36) > 9u )
  {
    if ( !(unsigned int)HalReadBootRegister((__int64)&v3) && (v3 & 1) == 0 )
      HalWriteBootRegister(v3 | 1);
  }
  else
  {
    HalpSimpleBootFlagTable = 0LL;
  }
  result = HalpEndOfBoot;
  off_140C02168[0] = HalpEndOfBoot;
  return result;
}
