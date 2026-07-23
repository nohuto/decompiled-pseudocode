/*
 * XREFs of ZwQueryVirtualMemory @ 0x1403F3A20
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x1403795D8 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x140510BB0 (KiVerifyContextXStateCetUEnabled.c)
 *     SepGetStackTraceHash @ 0x140590C40 (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140594134 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405948F4 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405C8D00 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C91F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     LdrpResGetMappingSize @ 0x14065B22C (LdrpResGetMappingSize.c)
 *     sub_1406D9444 @ 0x1406D9444 (sub_1406D9444.c)
 *     EtwpTiQueryVad @ 0x140708E1C (EtwpTiQueryVad.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStack @ 0x140906DA4 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x140907C58 (PspFreeCurrentThreadUserShadowStack.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E41B0 (VerifierMmUnmapLockedPages.c)
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
