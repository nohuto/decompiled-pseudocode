/*
 * XREFs of PnpFreeDevProperty @ 0x1406A5698
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406A1D80 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x1406A5638 (PnpFreeDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x140753E14 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075C394 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
