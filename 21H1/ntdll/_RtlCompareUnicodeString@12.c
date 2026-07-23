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

/*
 * Hex-Rays decompilation failed for _RtlCompareUnicodeString@12 @ 0x4B2D0490
 * Reason: Hex-Rays returned no pseudocode for 0x4B2D0490
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2D0490: mov     edi, edi
 * 000000004B2D0492: push    ebp
 * 000000004B2D0493: mov     ebp, esp
 * 000000004B2D0495: mov     ecx, [ebp+String2]
 * 000000004B2D0498: push    dword ptr [ebp+CaseInSensitive]; String2Length
 * 000000004B2D049B: movzx   eax, word ptr [ecx]
 * 000000004B2D049E: shr     eax, 1
 * 000000004B2D04A0: push    eax; String2
 * 000000004B2D04A1: push    dword ptr [ecx+4]
 * 000000004B2D04A4: mov     ecx, [ebp+String1]
 * 000000004B2D04A7: movzx   eax, word ptr [ecx]
 * 000000004B2D04AA: shr     eax, 1
 * 000000004B2D04AC: push    eax; String1Length
 * 000000004B2D04AD: push    dword ptr [ecx+4]; String1
 * 000000004B2D04B0: call    _RtlCompareUnicodeStrings@20; RtlCompareUnicodeStrings(x,x,x,x,x)
 * 000000004B2D04B5: pop     ebp
 * 000000004B2D04B6: retn    0Ch
 */
