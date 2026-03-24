/*
 * XREFs of HalpResetSBF @ 0x14099B49C
 * Callers:
 *     HalpEndOfBoot @ 0x1407D57B0 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140995B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x1409A9650 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x1409A9698 (HalWriteBootRegister.c)
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
