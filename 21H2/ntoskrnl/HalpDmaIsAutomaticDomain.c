/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x140515358
 * Callers:
 *     HalGetAdapterV2 @ 0x140845A60 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
 * Callees:
 *     HalpDmaReferenceDomainObject @ 0x1403B2A28 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 */

bool __fastcall HalpDmaIsAutomaticDomain(__int64 *BugCheckParameter3)
{
  char v2; // di
  __int64 v3; // rbx

  v2 = 0;
  if ( (int)HalpDmaReferenceDomainObject((__int64)BugCheckParameter3) >= 0 )
  {
    v3 = BugCheckParameter3[7];
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    return v3 != 0;
  }
  return v2;
}
