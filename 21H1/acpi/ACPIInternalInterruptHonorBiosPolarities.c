/*
 * XREFs of ACPIInternalInterruptHonorBiosPolarities @ 0x1C0026A48
 * Callers:
 *     ACPIInitialize @ 0x1C00BEBFC (ACPIInitialize.c)
 * Callees:
 *     ACPIGetTableVersion @ 0x1C0001E10 (ACPIGetTableVersion.c)
 */

bool ACPIInternalInterruptHonorBiosPolarities()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return (AcpiOverrideAttributes & 0x20000) == 0
      && ((AcpiOverrideAttributes & 0x40000) != 0 || (int)ACPIGetTableVersion(1346584902, &v1) >= 0 && v1 >= 5);
}
