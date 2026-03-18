/*
 * XREFs of PnprLegacyDeviceDriversPresent @ 0x1408A99D4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 * Callees:
 *     IoGetLegacyVetoList @ 0x14070FDF0 (IoGetLegacyVetoList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

bool PnprLegacyDeviceDriversPresent()
{
  bool v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  v0 = 0;
  if ( (int)IoGetLegacyVetoList(&P, &v2) >= 0 )
    v0 = v2 != 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v0;
}
