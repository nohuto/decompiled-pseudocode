/*
 * XREFs of ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016DF0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C0016F00 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C0017040 (HMDestroyObject.c)
 *     HMFreeObject @ 0x1C0017080 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0017370 (HMRemoveHandleForObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0017438 (HMRemoveHandleForObjectWorker.c)
 *     _HMPkheFromObject @ 0x1C0017510 (_HMPkheFromObject.c)
 *     HMCreateHandleForObject @ 0x1C0017550 (HMCreateHandleForObject.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0017B30 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0017D48 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0018AB0 (xxxActivateKeyboardLayout.c)
 *     DestroyMonitor @ 0x1C0019D20 (DestroyMonitor.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0020888 (HMValidateSharedHandleNoRip.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0021B18 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     CleanupInputDelegation @ 0x1C003B860 (CleanupInputDelegation.c)
 *     HMChangeOwnerProcess @ 0x1C003BA00 (HMChangeOwnerProcess.c)
 *     IsHandleEntrySecure @ 0x1C003D94C (IsHandleEntrySecure.c)
 *     HMChangeOwnerThread @ 0x1C004FCE0 (HMChangeOwnerThread.c)
 *     DestroyKF @ 0x1C005C9D8 (DestroyKF.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F5D0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0069308 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     HMValidateHandle @ 0x1C0074300 (HMValidateHandle.c)
 *     HandleInputDestDestruction @ 0x1C00745DC (HandleInputDestDestruction.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0094D44 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C00C8490 (HMDestroyUnlockedObject.c)
 *     HMChangeOwnerPheProcess @ 0x1C011AFF0 (HMChangeOwnerPheProcess.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C011BA50 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C011C0A0 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     ValidateHbwnd @ 0x1C011C2C0 (ValidateHbwnd.c)
 *     ValidateHwndMinuserEx @ 0x1C011C3B0 (ValidateHwndMinuserEx.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0122390 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0122440 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     _anonymous_namespace_::lookForMatchingMinuserHwnd @ 0x1C013D4F0 (_anonymous_namespace_--lookForMatchingMinuserHwnd.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013D640 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013D920 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C013DAF4 (UserFindBaseWindowHandle.c)
 *     HMInitHandleTable @ 0x1C0294A94 (HMInitHandleTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
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
