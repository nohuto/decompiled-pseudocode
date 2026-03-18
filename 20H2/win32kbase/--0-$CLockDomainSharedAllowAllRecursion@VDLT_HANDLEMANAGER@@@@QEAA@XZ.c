/*
 * XREFs of ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021140 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C0021250 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C0021390 (HMDestroyObject.c)
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C00218C0 (HMRemoveHandleForObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0021988 (HMRemoveHandleForObjectWorker.c)
 *     _HMPkheFromObject @ 0x1C0021A60 (_HMPkheFromObject.c)
 *     HMCreateHandleForObject @ 0x1C0021AA0 (HMCreateHandleForObject.c)
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     DestroyThreadsObjects @ 0x1C0051B28 (DestroyThreadsObjects.c)
 *     HMValidateHandle @ 0x1C0054DB0 (HMValidateHandle.c)
 *     HandleInputDestDestruction @ 0x1C005527C (HandleInputDestDestruction.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0056464 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0085208 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C008832C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0088548 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C00892B0 (xxxActivateKeyboardLayout.c)
 *     CleanupInputDelegation @ 0x1C009B050 (CleanupInputDelegation.c)
 *     IsHandleEntrySecure @ 0x1C00A0D6C (IsHandleEntrySecure.c)
 *     HMChangeOwnerProcess @ 0x1C00A5380 (HMChangeOwnerProcess.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C00A6EEC (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     HMChangeOwnerThread @ 0x1C00B07F0 (HMChangeOwnerThread.c)
 *     DestroyMonitor @ 0x1C00B4360 (DestroyMonitor.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00BBA08 (HMValidateSharedHandleNoRip.c)
 *     DestroyKF @ 0x1C00BCF68 (DestroyKF.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00BF910 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00BFAA0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7700 (HMDestroyUnlockedObject.c)
 *     HMChangeOwnerPheProcess @ 0x1C0119530 (HMChangeOwnerPheProcess.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0119710 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C0119D60 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     ValidateHbwnd @ 0x1C0119F80 (ValidateHbwnd.c)
 *     ValidateHwndMinuserEx @ 0x1C011A070 (ValidateHwndMinuserEx.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0120040 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01200F0 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     _anonymous_namespace_::lookForMatchingMinuserHwnd @ 0x1C013B1A0 (_anonymous_namespace_--lookForMatchingMinuserHwnd.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013B2F0 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013B5D0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C013B7A4 (UserFindBaseWindowHandle.c)
 *     HMInitHandleTable @ 0x1C02929AC (HMInitHandleTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(14LL, a2, a3, a4);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
