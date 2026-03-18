/*
 * XREFs of wcstoul @ 0x1403D00C0
 * Callers:
 *     PnpStringToDwordValue @ 0x14037EA7C (PnpStringToDwordValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407548A8 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x14076D8B8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 *     _CmSplitDevicePanelId @ 0x140797E48 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140798B20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x1407A168C (LocalpConvertStringSidToSid.c)
 *     HalpInitChipHacks @ 0x140A5AF9C (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140A6613C (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A6FBA0 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1403CFE3C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
