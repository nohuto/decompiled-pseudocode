/*
 * XREFs of _Init_thread_footer @ 0x18008E588
 * Callers:
 *     ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x18000D980 (-NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800381E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180081F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800BC894 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180150740 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18015AE04 (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x18015AEB8 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18015F110 (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F30F0 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801F4F64 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x180239244 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x180260164 (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180273138 (-OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1802A6264 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1802B89CC (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180323B00 (--$_Callback_once@V-$tuple@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@AEAVexception_ptr@st.c)
 *     _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18034B43C (_anonymous_namespace_--GetRelaunchPolicyFromActivationResult.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x18034B57C (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x1803C5D2C (-RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804212C8 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_1805CC2B8);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_1805CC2B8);
  return Init_thread_notify();
}
