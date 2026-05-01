/*
 * XREFs of __Platform_AcquireSRWLockShared @ 0x18008E20E
 * Callers:
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x180042280 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 *     ??$DoInvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@V_lambda_16286fe9edebb121e83a2911c5464574_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_16286fe9edebb121e83a2911c5464574_@@@Z @ 0x1802F756C (--$DoInvokeVoid@V-$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@In.c)
 *     ??$DoInvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@Z @ 0x1802F7790 (--$DoInvokeVoid@V-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Inte.c)
 *     ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@V_lambda_843a4523c4ce898f7fb4bb4d9e96aac5_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_843a4523c4ce898f7fb4bb4d9e96aac5_@@@Z @ 0x1802F79B4 (--$DoInvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Inte.c)
 *     ??$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036bcec23797998bf71b5136_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_fa30a613036bcec23797998bf71b5136_@@@Z @ 0x1802F7BD8 (--$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036.c)
 *     ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@Z @ 0x1803162BC (--$DoInvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Exper.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180477A68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockShared(PSRWLOCK SRWLock)
{
  AcquireSRWLockShared(SRWLock);
}
