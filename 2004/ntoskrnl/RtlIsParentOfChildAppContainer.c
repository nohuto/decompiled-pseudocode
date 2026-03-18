/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1406BAB88
 * Callers:
 *     SepSetTokenPackage @ 0x14062462C (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140630388 (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x1406816E0 (SeTokenCanImpersonate.c)
 *     SepCheckCreateLowBox @ 0x14070D104 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x140921E54 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402FE9C0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1406BAF40 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  RtlGetAppContainerSidType(Sid);
  return 0;
}
