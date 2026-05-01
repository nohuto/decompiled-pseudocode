/*
 * XREFs of ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180011F3C
 * Callers:
 *     ??1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ @ 0x180012008 (--1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x18032ADE8 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x18032AE14 (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x18032AE40 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x1803374F8 (--1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180337524 (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180337550 (--1FocusHoldingTank@@QEAA@XZ.c)
 *     ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180338670 (-s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?SetStopResult@?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18001145C (-SetStopResult@-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180011594 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?ReportStopActivity@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180012258 (-ReportStopActivity@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800878A4 (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_ea_1800878A4.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  _DWORD *v3; // rcx
  char v4; // si
  int v5; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 304);
  if ( !*(_QWORD *)(a1 + 304) )
    goto LABEL_2;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_2:
    v3 = *(_DWORD **)(a1 + 48);
    if ( *v3 == 1 )
    {
      LODWORD(SRWLock) = v3[21];
      v5 = -2147024322;
      if ( (int)SRWLock < 0 )
        v5 = (int)SRWLock;
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v3,
        v5,
        (int *)&SRWLock);
      wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        a1,
        (unsigned int)SRWLock);
    }
  }
}
