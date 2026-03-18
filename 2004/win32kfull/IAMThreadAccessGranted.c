/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0066514
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0007400 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0008420 (NtUserSetActivationFilter.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002FFBC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _PostTransformableMessageIL @ 0x1C0037730 (_PostTransformableMessageIL.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00397D0 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserRegisterHotKey @ 0x1C003D250 (NtUserRegisterHotKey.c)
 *     ValidateHwndIAM @ 0x1C00629D0 (ValidateHwndIAM.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C006491C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0066444 (ValidateHwndIAMComponetUIAware.c)
 *     NtUserPostMessage @ 0x1C0093530 (NtUserPostMessage.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00BF690 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0116290 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C011BA70 (NtUserSetActiveProcessForMonitor.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C012A030 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01D3230 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D3568 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01F7D90 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C01F82A0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01F8560 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01F92D0 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C02020A0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0202980 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0203730 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C0203A40 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C0203DC0 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0204D60 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0066544 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 448);
}
