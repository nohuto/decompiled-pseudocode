/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x1404BF680
 * Callers:
 *     HalGetAdapterV2 @ 0x14074E2D0 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407ADF10 (HalGetAdapterV3.c)
 * Callees:
 *     HalpDmaReferenceDomainObject @ 0x14039DEF4 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404BF528 (HalpDmaDereferenceDomainObject.c)
 */

bool __fastcall HalpDmaIsAutomaticDomain(__int64 *BugCheckParameter3)
{
  char v2; // di
  __int64 v3; // rbx

  v2 = 0;
  if ( (int)HalpDmaReferenceDomainObject((__int64)BugCheckParameter3) >= 0 )
  {
    v3 = BugCheckParameter3[9];
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    return v3 != 0;
  }
  return v2;
}
