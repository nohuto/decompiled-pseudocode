/*
 * XREFs of HalpResetSBF @ 0x14099C49C
 * Callers:
 *     HalpEndOfBoot @ 0x1407D5920 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x1409AA580 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x1409AA5C8 (HalWriteBootRegister.c)
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
