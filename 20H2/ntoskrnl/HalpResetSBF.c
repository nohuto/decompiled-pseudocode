/*
 * XREFs of HalpResetSBF @ 0x14099DF1C
 * Callers:
 *     HalpEndOfBoot @ 0x1407D1330 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x14099833C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x1409AC780 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x1409AC7C8 (HalWriteBootRegister.c)
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
