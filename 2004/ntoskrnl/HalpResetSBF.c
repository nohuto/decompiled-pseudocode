/*
 * XREFs of HalpResetSBF @ 0x140997EDC
 * Callers:
 *     HalpEndOfBoot @ 0x1407C2B30 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x1409922CC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x1409A6814 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x1409A685C (HalWriteBootRegister.c)
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
