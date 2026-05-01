/*
 * XREFs of _guard_dispatch_icall_nop @ 0x180006B70
 * Callers:
 *     _tlgEnableCallback @ 0x1800010B0 (_tlgEnableCallback.c)
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180001424 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x180001814 (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x1800019F0 (-WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800020CC (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z @ 0x180002234 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800024F0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z @ 0x18000258C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180002FF8 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800034B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x180003610 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180003690 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180003710 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800037A4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003B14 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     MsixvcAddPackageAsync @ 0x180003FD0 (MsixvcAddPackageAsync.c)
 *     MsixvcUpdatePolicyInternal @ 0x180004100 (MsixvcUpdatePolicyInternal.c)
 *     MsixvcRemediateMutablePackagesForVolumeAsync @ 0x1800047A0 (MsixvcRemediateMutablePackagesForVolumeAsync.c)
 *     MsixvcAddGameToGCS @ 0x1800048A0 (MsixvcAddGameToGCS.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180004C6C (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800051FC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000546C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x1800054CC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800059D4 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     _CRT_INIT @ 0x180005DAC (_CRT_INIT.c)
 *     __DllMainCRTStartup @ 0x180006034 (__DllMainCRTStartup.c)
 *     _onexit_0 @ 0x180006478 (_onexit_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
