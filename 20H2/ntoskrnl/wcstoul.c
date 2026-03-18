/*
 * XREFs of wcstoul @ 0x1403D3B90
 * Callers:
 *     PnpStringToDwordValue @ 0x14038119C (PnpStringToDwordValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140765B80 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x14077E2C8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14077FA3C (BiOpenSystemStore.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     _CmSplitDevicePanelId @ 0x1407A6F28 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407A7C00 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x1407B2F40 (LocalpConvertStringSidToSid.c)
 *     HalpInitChipHacks @ 0x140A6139C (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140A6CDEC (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A76BA0 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1403D390C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
