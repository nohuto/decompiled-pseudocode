/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x14070D9A8
 * Callers:
 *     SeTokenCanImpersonate @ 0x140609600 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x140669D4C (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140673878 (SepSetTokenCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1406E92A4 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x140920BA4 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x14070D180 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  if ( (int)RtlGetAppContainerSidType((char *)Sid, &v7) >= 0
    && v7 == 2
    && (int)RtlGetAppContainerSidType((char *)a2, &v7) >= 0
    && v7 == 1 )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(Sid, v4);
      if ( *v5 != *RtlSubAuthoritySid(a2, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
