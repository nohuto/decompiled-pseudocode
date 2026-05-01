/*
 * XREFs of ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180053AAC
 * Callers:
 *     ?StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180053750 (-StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x180053824 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180205AFC (-StartActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180208384 (-StartActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001A444 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x180053AEC (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_P.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(*(_QWORD *)(a1 + 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
