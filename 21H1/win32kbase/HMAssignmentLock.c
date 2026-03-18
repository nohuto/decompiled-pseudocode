/*
 * XREFs of HMAssignmentLock @ 0x1C0071980
 * Callers:
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C005652C (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00566E0 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0057668 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00579C8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00587F0 (xxxInternalActivateKeyboardLayout.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     xxxKeyEventEx @ 0x1C0060840 (xxxKeyEventEx.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C017BF34 (rimDispatchCompleteFrame.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0189298 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01AD9B0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AFEAC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0073480 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall HMAssignmentLock(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx

  v1 = a1[1];
  v2 = **a1;
  **a1 = (__int64)v1;
  if ( !v2 || (__int64 *)v2 != v1 )
  {
    if ( v1 )
    {
      if ( (*((_BYTE *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v1 + 25) & 1) != 0 )
        UserSetLastError(87LL);
      _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    }
    if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(v2);
  }
  return v2;
}
