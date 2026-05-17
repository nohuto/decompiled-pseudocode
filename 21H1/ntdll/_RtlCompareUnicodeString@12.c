/*
 * XREFs of _RtlCompareUnicodeString@12 @ 0x4B2D0490
 * Callers:
 *     _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107 (_RtlpProcessIFEOKeyFilter@12.c)
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720 (_RtlpFindUnicodeStringInSection@32.c)
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _ApiSetQuerySchemaInfo@16 @ 0x4B2D0221 (_ApiSetQuerySchemaInfo@16.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 *     _LdrpIsModuleUnderSystem32@4 @ 0x4B2E8D7C (_LdrpIsModuleUnderSystem32@4.c)
 *     _LdrpCompareModuleName@8 @ 0x4B2EE4A3 (_LdrpCompareModuleName@8.c)
 *     _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6 (_RtlpCapabilityCheckSystemCapability@12.c)
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 *     _LdrpCompareRedirectedFunction@8 @ 0x4B334418 (_LdrpCompareRedirectedFunction@8.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 *     _RtlpMatchUILanguage@4 @ 0x4B36349D (_RtlpMatchUILanguage@4.c)
 *     _RtlpMatchUserLanguage@4 @ 0x4B363547 (_RtlpMatchUserLanguage@4.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 */

int __stdcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  return RtlCompareUnicodeStrings(*((_DWORD *)a1 + 1), *a1 >> 1, *((_DWORD *)a2 + 1), *a2 >> 1, a3);
}
