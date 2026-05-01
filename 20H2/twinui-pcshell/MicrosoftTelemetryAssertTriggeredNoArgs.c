/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18047A444
 * Callers:
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180039B28 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801E7830 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x180485860 (-CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x180485C60 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 *     ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x180485D70 (-SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z.c)
 *     ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE@Z @ 0x180486140 (-Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activatio.c)
 *     ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x1804861C0 (-InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@Ap.c)
 *     ?get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180486610 (-get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@.c)
 *     ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z @ 0x180486650 (-get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activat.c)
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x1804866E0 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x180486950 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180486A80 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18047A460 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
