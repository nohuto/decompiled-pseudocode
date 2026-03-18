/*
 * XREFs of HalpResetSBF @ 0x140996B0C
 * Callers:
 *     HalpEndOfBoot @ 0x1407BF5D0 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x14099138C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x1409A59D4 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x1409A5A1C (HalWriteBootRegister.c)
 */

void HalpResetSBF()
{
  __int64 v0; // rcx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( HalpSimpleBootFlagTable )
  {
    if ( !(unsigned int)HalReadBootRegister(&v1) )
    {
      LOBYTE(v0) = v1 & 0xF9;
      HalWriteBootRegister(v0);
    }
  }
}
