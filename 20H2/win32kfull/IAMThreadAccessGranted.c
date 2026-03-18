/*
 * XREFs of IAMThreadAccessGranted @ 0x1C008F634
 * Callers:
 *     NtUserSendEventMessage @ 0x1C00072A0 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0008410 (NtUserSetActivationFilter.c)
 *     _PostTransformableMessageIL @ 0x1C001A1A0 (_PostTransformableMessageIL.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002CB24 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserRegisterHotKey @ 0x1C002EA40 (NtUserRegisterHotKey.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserPostMessage @ 0x1C004F200 (NtUserPostMessage.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C007FA20 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ValidateHwndIAM @ 0x1C008EFA0 (ValidateHwndIAM.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C008F564 (ValidateHwndIAMComponetUIAware.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0092E4C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C01177E0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C01197B0 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C011C4E0 (NtUserSetActiveProcessForMonitor.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C012C0C0 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01D2420 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D2758 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01F6F20 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C01F7430 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01F76F0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01F8460 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0201230 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0201B10 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C02028C0 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C0202BD0 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C0202F50 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0203EF0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C008F664 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 456);
}
