/*
 * XREFs of ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800551AC
 * Callers:
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1800550DC (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x180336C54 (-StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1800551EC (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_.c)
 *     ?LockExclusive@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18005753C (-LockExclusive@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  _TlgActivityBase<wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(*(_QWORD *)(a1 + 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
