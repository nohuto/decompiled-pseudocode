/*
 * XREFs of ??1TakeForeground@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18024D108
 * Callers:
 *     ?TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@45@@Z @ 0x180253A50 (-TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4Foreground.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWin32BackedViewHostItemTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18024CED8 (--1-$ActivityData@VWin32BackedViewHostItemTelemetryProvider@@U_TlgReflectorTag_Para_ea_18024CED8.c)
 *     ?Destroy@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024E2FC (-Destroy@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgRef.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWin32BackedViewHostItemTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802572DC (-reset@-$shared_object@V-$ActivityData@VWin32BackedViewHostItemTelemetryProvider@@U_ea_1802572DC.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::TakeForeground::~TakeForeground(
        Win32BackedViewHostItemTelemetry::TakeForeground *this)
{
  *(_QWORD *)this = &Win32BackedViewHostItemTelemetry::TakeForeground::`vftable';
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,0,0,4,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,0,0,4,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Win32BackedViewHostItemTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,0,0,4,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Win32BackedViewHostItemTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<Win32BackedViewHostItemTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((Win32BackedViewHostItemTelemetry::TakeForeground *)((char *)this + 8));
}
