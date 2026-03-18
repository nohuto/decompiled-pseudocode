/*
 * XREFs of ACPIInternalInterruptHonorBiosPolarities @ 0x1C002486C
 * Callers:
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 * Callees:
 *     ACPIGetTableVersion @ 0x1C00248C0 (ACPIGetTableVersion.c)
 */

bool ACPIInternalInterruptHonorBiosPolarities()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return (AcpiOverrideAttributes & 0x20000) == 0
      && ((AcpiOverrideAttributes & 0x40000) != 0 || (int)ACPIGetTableVersion(1346584902LL, &v1) >= 0 && v1 >= 5);
}
