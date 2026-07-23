/*
 * XREFs of ZwQueryVirtualMemory @ 0x1403F2790
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x140378818 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x140510560 (KiVerifyContextXStateCetUEnabled.c)
 *     SepGetStackTraceHash @ 0x140590550 (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140593A44 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140594204 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405C7CE0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C81D0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     sub_14065CF98 @ 0x14065CF98 (sub_14065CF98.c)
 *     EtwpTiQueryVad @ 0x1406E523C (EtwpTiQueryVad.c)
 *     LdrpResGetMappingSize @ 0x1406FB06C (LdrpResGetMappingSize.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStackInternal @ 0x140905C28 (PspFreeUserFiberShadowStackInternal.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409069A8 (PspFreeCurrentThreadUserShadowStack.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E4150 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
