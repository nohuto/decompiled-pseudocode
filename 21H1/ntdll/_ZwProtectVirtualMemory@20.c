/*
 * XREFs of _ZwProtectVirtualMemory@20 @ 0x4B2F2E80
 * Callers:
 *     _RtlpProtectHeap@8 @ 0x4B2A90B8 (_RtlpProtectHeap@8.c)
 *     _RtlpFreeUserBlockToHeap@12 @ 0x4B2ADD03 (_RtlpFreeUserBlockToHeap@12.c)
 *     _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01 (_LdrpPrepareImportAddressTableForSnap@4.c)
 *     _LdrInitSecurityCookie@20 @ 0x4B2B9EDA (_LdrInitSecurityCookie@20.c)
 *     _RtlpAllocateUserBlockFromHeap@16 @ 0x4B2C01B1 (_RtlpAllocateUserBlockFromHeap@16.c)
 *     _LdrpWriteBackProtectedDelayLoad@20 @ 0x4B2CFDFF (_LdrpWriteBackProtectedDelayLoad@20.c)
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _LdrpDoPostSnapWork@4 @ 0x4B2D0C67 (_LdrpDoPostSnapWork@4.c)
 *     _LdrpChangeMrdataProtection@4 @ 0x4B2E1D9E (_LdrpChangeMrdataProtection@4.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 *     _LdrpSetProtection@8 @ 0x4B331251 (_LdrpSetProtection@8.c)
 *     _LdrpCheckForSecuROMImage@4 @ 0x4B33163B (_LdrpCheckForSecuROMImage@4.c)
 *     _AVrfpSnapDllImports@4 @ 0x4B33959D (_AVrfpSnapDllImports@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 *     @RtlpProtectBlock@8 @ 0x4B370C9F (@RtlpProtectBlock@8.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 *     _RtlpHpHeapProtect@8 @ 0x4B379008 (_RtlpHpHeapProtect@8.c)
 *     _RtlpHpLargeAllocationProtect@8 @ 0x4B37A357 (_RtlpHpLargeAllocationProtect@8.c)
 *     _RtlpHpSegProtect@8 @ 0x4B37D295 (_RtlpHpSegProtect@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  return Wow64SystemServiceCall();
}
