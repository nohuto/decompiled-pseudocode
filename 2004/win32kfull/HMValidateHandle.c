/*
 * XREFs of HMValidateHandle @ 0x1C0067BB8
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0003410 (NtUserGetRawInputData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0008300 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     _MapDesktopObject @ 0x1C0025C50 (_MapDesktopObject.c)
 *     NtUserUnhookWinEvent @ 0x1C00435E0 (NtUserUnhookWinEvent.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0045780 (NtUserUnhookWindowsHookEx.c)
 *     NtUserDrawIconEx @ 0x1C0064040 (NtUserDrawIconEx.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0064780 (NtUserEndDeferWindowPosEx.c)
 *     NtUserDestroyCursor @ 0x1C0064850 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0064B10 (NtUserDeferWindowPosAndBand.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C006530C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserSetCursorIconData @ 0x1C0065C60 (NtUserSetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C0067DA0 (NtUserGetIconInfo.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C0098820 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C009B630 (fnHkINLPMSG.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00AE3E0 (NtUserFindExistingCursorIcon.c)
 *     NtUserSetCursor @ 0x1C00AF700 (NtUserSetCursor.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserTranslateAccelerator @ 0x1C0102EB0 (NtUserTranslateAccelerator.c)
 *     NtUserCopyAcceleratorTable @ 0x1C01033F0 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetIconSize @ 0x1C0106A00 (NtUserGetIconSize.c)
 *     NtUserUpdateInputContext @ 0x1C010BDE0 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C010C890 (NtUserQueryInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C010F750 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C01100E0 (NtUserGetRequiredCursorSizes.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C011CA20 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C011DA10 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C014A830 (NtUserDestroyInputContext.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0154010 (NtUserGetCursorFrameInfo.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E925C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserDragObject @ 0x1C01F88E0 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F8DA0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01FA450 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01FA5B0 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FC080 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01FC400 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01FCC40 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01FCDA0 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01FEF70 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C02014E0 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C0202230 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0202570 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C0202800 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C02034D0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0204F50 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021FDD4 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C0229AC0 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0231000 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0231EE0 (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02494D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
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
  if ( (*(_DWORD *)(v14 + 480) & 0x20000000) != 0 )
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
