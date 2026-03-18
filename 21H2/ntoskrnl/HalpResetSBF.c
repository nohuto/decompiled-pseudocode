/*
 * XREFs of HalpResetSBF @ 0x140A54628
 * Callers:
 *     HalpEndOfBoot @ 0x140865520 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x140A635B8 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140A63600 (HalWriteBootRegister.c)
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
