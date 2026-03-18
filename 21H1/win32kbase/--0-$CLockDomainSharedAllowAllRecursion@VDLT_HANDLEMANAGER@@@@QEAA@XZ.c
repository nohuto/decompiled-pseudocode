/*
 * XREFs of ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754
 * Callers:
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C000CBD8 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     CleanupInputDelegation @ 0x1C002A9E0 (CleanupInputDelegation.c)
 *     HMChangeOwnerThread @ 0x1C002D040 (HMChangeOwnerThread.c)
 *     HMChangeOwnerProcess @ 0x1C002D2C0 (HMChangeOwnerProcess.c)
 *     IsHandleEntrySecure @ 0x1C002F12C (IsHandleEntrySecure.c)
 *     DestroyKF @ 0x1C004EDC8 (DestroyKF.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0051AA0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0051C70 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     DestroyMonitor @ 0x1C0057330 (DestroyMonitor.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00579C8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0058730 (xxxActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0059540 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HMCreateHandleForObject @ 0x1C005A7C0 (HMCreateHandleForObject.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005A970 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1C005AAB0 (HMRemoveHandleForObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C005AB78 (HMRemoveHandleForObjectWorker.c)
 *     _HMPkheFromObject @ 0x1C005AC50 (_HMPkheFromObject.c)
 *     HMUnlockDestroyObject @ 0x1C005ACB0 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C005ADB0 (HMDestroyObject.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AE30 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C005F7C4 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     HMValidateHandle @ 0x1C0070320 (HMValidateHandle.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0070614 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HandleInputDestDestruction @ 0x1C007166C (HandleInputDestDestruction.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7D70 (HMDestroyUnlockedObject.c)
 *     HMChangeOwnerPheProcess @ 0x1C0121D00 (HMChangeOwnerPheProcess.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0121F10 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C0122560 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     ValidateHbwnd @ 0x1C0122780 (ValidateHbwnd.c)
 *     ValidateHwndMinuserEx @ 0x1C0122870 (ValidateHwndMinuserEx.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0128370 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0128420 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     _anonymous_namespace_::lookForMatchingMinuserHwnd @ 0x1C0143840 (_anonymous_namespace_--lookForMatchingMinuserHwnd.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C0143990 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0143C70 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0143E44 (UserFindBaseWindowHandle.c)
 *     HMInitHandleTable @ 0x1C029967C (HMInitHandleTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(14LL);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
