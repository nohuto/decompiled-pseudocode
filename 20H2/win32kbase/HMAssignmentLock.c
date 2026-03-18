/*
 * XREFs of HMAssignmentLock @ 0x1C00555C0
 * Callers:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     xxxKeyEventEx @ 0x1C002CAE0 (xxxKeyEventEx.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00882B0 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0088548 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0089370 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C008A0C0 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C008A550 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C01737D4 (rimDispatchCompleteFrame.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0180B70 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0181058 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01A58D0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A7DCC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     HMUnlockObjectInternal @ 0x1C0054B50 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMAssignmentLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = **(_QWORD **)a1;
  **(_QWORD **)a1 = v2;
  if ( !v3 || v3 != v2 )
  {
    if ( v2 )
    {
      if ( (*((_BYTE *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v2 + 25) & 1) != 0 )
        UserSetLastError(87LL, a2);
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(v3);
  }
  return v3;
}
