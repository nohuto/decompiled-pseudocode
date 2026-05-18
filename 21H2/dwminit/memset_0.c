/*
 * XREFs of memset_0 @ 0x18000D0A8
 * Callers:
 *     memcpy_s @ 0x180001520 (memcpy_s.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002038 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     wil_details_StagingConfig_Load @ 0x1800027B8 (wil_details_StagingConfig_Load.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180003770 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006EA0 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007460 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     DllMain @ 0x180008510 (DllMain.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180008DD4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180009840 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180009C00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18000A9D8 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000BFE0 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     __scrt_fastfail @ 0x18000CCA8 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
