/*
 * XREFs of StorPortGetPhysicalAddressVrfy @ 0x1C007F2B0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetPhysicalAddress @ 0x1C001BBA0 (StorPortGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddressVrfy(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  return StorPortGetPhysicalAddress(a1, a2, a3, a4);
}
