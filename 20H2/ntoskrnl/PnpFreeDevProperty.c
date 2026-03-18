/*
 * XREFs of PnpFreeDevProperty @ 0x140641D00
 * Callers:
 *     PnpFreeDevPropertyArray @ 0x140641CA0 (PnpFreeDevPropertyArray.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14064565C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpCopyDevProperty @ 0x1407474B8 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x14076CE54 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
