/*
 * XREFs of _IAMThreadAccessGranted@4 @ 0x26140
 * Callers:
 *     _NtUserSetActivationFilter@8 @ 0x11952 (_NtUserSetActivationFilter@8.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _ValidateHwndIAM@4 @ 0x25B92 (_ValidateHwndIAM@4.c)
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     _ValidateHwndIAMComponetUIAware@4 @ 0x260B6 (_ValidateHwndIAMComponetUIAware@4.c)
 *     _NtUserPostMessage@16 @ 0x6D25E (_NtUserPostMessage@16.c)
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z @ 0x7D75E (-_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     ?_AllowSetForegroundWindow@@YGHK@Z @ 0x811C4 (-_AllowSetForegroundWindow@@YGHK@Z.c)
 *     _NtUserSetActiveProcessForMonitor@8 @ 0xB1FFE (_NtUserSetActiveProcessForMonitor@8.c)
 *     _NtUserRegisterHotKey@16 @ 0xC5E5E (_NtUserRegisterHotKey@16.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A (-_EnableShellWindowManagementBehavior@@YGHKK@Z.c)
 *     __SetCancelRotationDelayHintWindow@4 @ 0x141A47 (__SetCancelRotationDelayHintWindow@4.c)
 *     _ExemptedFromImmersiveRestrictions@4 @ 0x141D39 (_ExemptedFromImmersiveRestrictions@4.c)
 *     _NtUserClearForeground@0 @ 0x160267 (_NtUserClearForeground@0.c)
 *     _NtUserCreateWindowGroup@4 @ 0x160894 (_NtUserCreateWindowGroup@4.c)
 *     _NtUserDeleteWindowGroup@4 @ 0x160AA9 (_NtUserDeleteWindowGroup@4.c)
 *     _NtUserEnableWindowGroupPolicy@12 @ 0x161581 (_NtUserEnableWindowGroupPolicy@12.c)
 *     _NtUserSendEventMessage@16 @ 0x1685C8 (_NtUserSendEventMessage@16.c)
 *     _NtUserSetBridgeWindowChild@8 @ 0x1687E3 (_NtUserSetBridgeWindowChild@8.c)
 *     _NtUserSetFallbackForeground@8 @ 0x1694A1 (_NtUserSetFallbackForeground@8.c)
 *     _NtUserSetWindowArrangement@16 @ 0x169EA1 (_NtUserSetWindowArrangement@16.c)
 *     _NtUserSetWindowGroup@16 @ 0x16A0E5 (_NtUserSetWindowGroup@16.c)
 *     _NtUserSetWindowShowState@16 @ 0x16A34E (_NtUserSetWindowShowState@16.c)
 *     _NtUserUpdateWindowTrackingInfo@12 @ 0x16AF00 (_NtUserUpdateWindowTrackingInfo@12.c)
 * Callees:
 *     ?FindIAMThread@@YGPAUtagIAM_THREAD@@QBUtagTHREADINFO@@@Z @ 0x2615C (-FindIAMThread@@YGPAUtagIAM_THREAD@@QBUtagTHREADINFO@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _IAMThreadAccessGranted@4 @ 0x26140
 * Reason: Hex-Rays returned no pseudocode for 0x26140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000026140: call    ?FindIAMThread@@YGPAUtagIAM_THREAD@@QBUtagTHREADINFO@@@Z; FindIAMThread(tagTHREADINFO const * const)
 * 0000000000026145: test    eax, eax
 * 0000000000026147: jnz     short loc_2614C
 * 0000000000026149: xor     eax, eax
 * 000000000002614B: retn
 * 000000000002614C: mov     eax, [eax+0Ch]
 * 000000000002614F: cmp     eax, [ecx+0F8h]
 * 0000000000026155: jnz     short loc_26149
 * 0000000000026157: xor     eax, eax
 * 0000000000026159: inc     eax
 * 000000000002615A: retn
 */
