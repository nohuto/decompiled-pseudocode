/*
 * XREFs of HalpInitBootTable @ 0x140A65DF0
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140A64D20 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 *     HalReadBootRegister @ 0x1409AA580 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x1409AA5C8 (HalWriteBootRegister.c)
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
  off_140C00AF8[0] = HalpEndOfBoot;
  return result;
}
