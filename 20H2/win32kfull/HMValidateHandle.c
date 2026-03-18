/*
 * XREFs of HMValidateHandle @ 0x1C0095000
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00032B0 (NtUserGetRawInputData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C00082F0 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     _MapDesktopObject @ 0x1C003C300 (_MapDesktopObject.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C0057310 (fnHkINLPMSG.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0074640 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C0078710 (NtUserUnhookWinEvent.c)
 *     NtUserDrawIconEx @ 0x1C0092430 (NtUserDrawIconEx.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0092950 (NtUserEndDeferWindowPosEx.c)
 *     NtUserDestroyCursor @ 0x1C0092A20 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0093040 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCursor @ 0x1C0093AF0 (NtUserSetCursor.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0094440 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetIconInfo @ 0x1C0094D90 (NtUserGetIconInfo.c)
 *     NtUserSetCursorIconData @ 0x1C0096B60 (NtUserSetCursorIconData.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0098A34 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserTranslateAccelerator @ 0x1C01035B0 (NtUserTranslateAccelerator.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0103AF0 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetIconSize @ 0x1C0106C90 (NtUserGetIconSize.c)
 *     NtUserUpdateInputContext @ 0x1C010D980 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C010E690 (NtUserQueryInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C0110430 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C0111260 (NtUserGetRequiredCursorSizes.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C011DA90 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C011F130 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C014D060 (NtUserDestroyInputContext.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0156940 (NtUserGetCursorFrameInfo.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E85CC (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserDragObject @ 0x1C01F7A70 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F7F30 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F95E0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F9740 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB210 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01FB590 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01FBDD0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01FBF30 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01FE100 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C0200670 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C02013C0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0201700 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C0201990 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C0202660 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C02040E0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EF44 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C0228C30 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0230170 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0231050 (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247F28 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(unsigned __int64 a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rsi
  char v12; // al
  struct _KTHREAD *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v23; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = a2;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v23),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    PsGetThreadWin32Thread(CurrentThread);
  }
  v9 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v10 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v11 = (__int64 *)HMPkheFromPhe(v10);
    v9 = a1 >> 16;
    if ( (WORD1(a1) == *(_WORD *)(v10 + 26) || WORD1(a1) == 0xFFFF || !WORD1(a1) && PsGetCurrentProcessWow64Process(v9))
      && (*(_BYTE *)(v10 + 25) & 1) == 0 )
    {
      v12 = *(_BYTE *)(v10 + 24);
      if ( v12 == (_BYTE)v4 || (_BYTE)v4 == 0xFF && v12 )
        v3 = *v11;
    }
  }
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (v25 = PsGetCurrentProcess(v16, v15, v17),
        v26 = PsGetProcessSessionIdEx(v25),
        v28 = PsGetCurrentThreadProcess(v27),
        v26 == (unsigned int)PsGetProcessSessionIdEx(v28)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v14 + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v3 )
    return v3;
  switch ( v4 )
  {
    case 1:
      v20 = 1400LL;
      break;
    case 2:
      v20 = 1401LL;
      break;
    case 3:
      v20 = 1402LL;
      break;
    case 4:
      v20 = 1405LL;
      break;
    case 5:
      v20 = 1404LL;
      break;
    case 8:
      v20 = 1403LL;
      break;
    default:
      v20 = 6LL;
      break;
  }
  UserSetLastError(v20);
  return 0LL;
}
