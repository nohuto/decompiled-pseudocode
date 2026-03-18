/*
 * XREFs of HalpInitBootTable @ 0x140A5D3D0
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140A5C300 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402F8740 (HalpAcpiGetTable.c)
 *     HalReadBootRegister @ 0x1409A59D4 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x1409A5A1C (HalWriteBootRegister.c)
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
