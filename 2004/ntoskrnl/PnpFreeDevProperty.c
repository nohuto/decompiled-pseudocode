/*
 * XREFs of PnpFreeDevProperty @ 0x1405D6F9C
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1405D3684 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x1405D6F3C (PnpFreeDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x1407385A8 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075E7E4 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevProperty(__int64 a1, ULONG a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, a2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, a2);
}
