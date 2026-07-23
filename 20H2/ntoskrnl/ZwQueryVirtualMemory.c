/*
 * XREFs of ZwQueryVirtualMemory @ 0x1403F85D0
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x14037B308 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1405144E0 (KiVerifyContextXStateCetUEnabled.c)
 *     SepGetStackTraceHash @ 0x1405946E0 (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140597BD4 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140598394 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405CE1A4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405CE694 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405CF1EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     sub_14065E8A8 @ 0x14065E8A8 (sub_14065E8A8.c)
 *     LdrpResGetMappingSize @ 0x1406AE6EC (LdrpResGetMappingSize.c)
 *     EtwpTiQueryVad @ 0x1406DB62C (EtwpTiQueryVad.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStack @ 0x14090C9C4 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090D878 (PspFreeCurrentThreadUserShadowStack.c)
 *     VerifierMmUnmapLockedPages @ 0x1409EA1D0 (VerifierMmUnmapLockedPages.c)
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
