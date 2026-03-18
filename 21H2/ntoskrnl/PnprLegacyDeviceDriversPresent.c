/*
 * XREFs of PnprLegacyDeviceDriversPresent @ 0x140952854
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 * Callees:
 *     IoGetLegacyVetoList @ 0x140762AEC (IoGetLegacyVetoList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
