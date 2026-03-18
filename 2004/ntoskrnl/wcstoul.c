/*
 * XREFs of wcstoul @ 0x1403D0F00
 * Callers:
 *     PnpStringToDwordValue @ 0x14037F46C (PnpStringToDwordValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140756F40 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x14076FCC8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 *     _CmSplitDevicePanelId @ 0x140797BF8 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407988D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x1407A3C10 (LocalpConvertStringSidToSid.c)
 *     HalpInitChipHacks @ 0x140A5A03C (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140A65B1C (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A70768 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1403D0C7C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
