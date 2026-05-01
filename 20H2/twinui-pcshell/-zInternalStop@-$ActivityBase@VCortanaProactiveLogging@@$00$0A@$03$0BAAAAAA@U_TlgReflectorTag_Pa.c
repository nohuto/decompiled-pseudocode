/*
 * XREFs of ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001154C
 * Callers:
 *     ?StopActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180011080 (-StopActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@MEAAX.c)
 *     ?StopActivity@GetImmersiveMonitor@StartWindowTelemetry@@MEAAXXZ @ 0x180012040 (-StopActivity@GetImmersiveMonitor@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800862C0 (-StopActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@ME.c)
 *     ?StopActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800863B0 (-StopActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PerformDelayedInitialization@StartWindowTelemetry@@MEAAXXZ @ 0x18032E660 (-StopActivity@PerformDelayedInitialization@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SubscribeToServices@StartWindowTelemetry@@MEAAXXZ @ 0x18032E990 (-StopActivity@SubscribeToServices@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UnsubscribeFromServices@StartWindowTelemetry@@MEAAXXZ @ 0x18032ECC0 (-StopActivity@UnsubscribeFromServices@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x1803379A0 (-Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z.c)
 *     ?StopActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ @ 0x180337CE0 (-StopActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ @ 0x180338010 (-StopActivity@CreateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ @ 0x180338340 (-StopActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180011594 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v3);
  v2 = v3;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
