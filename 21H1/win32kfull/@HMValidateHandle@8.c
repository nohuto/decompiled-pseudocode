/*
 * XREFs of @HMValidateHandle@8 @ 0x7531C
 * Callers:
 *     _NtUserUnhookWindowsHookEx@4 @ 0x127C8 (_NtUserUnhookWindowsHookEx@4.c)
 *     _NtUserUnhookWinEvent@4 @ 0x13596 (_NtUserUnhookWinEvent@4.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _NtUserFindExistingCursorIcon@12 @ 0x48504 (_NtUserFindExistingCursorIcon@12.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _fnHkINLPMSG@28 @ 0x6B870 (_fnHkINLPMSG@28.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _NtUserDeferWindowPosAndBand@40 @ 0x749C8 (_NtUserDeferWindowPosAndBand@40.c)
 *     _NtUserGetIconInfo@24 @ 0x74F2A (_NtUserGetIconInfo@24.c)
 *     _NtUserGetCursorFrameInfo@16 @ 0x75144 (_NtUserGetCursorFrameInfo@16.c)
 *     _NtUserSetCursorIconData@16 @ 0x77412 (_NtUserSetCursorIconData@16.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     _NtUserDestroyCursor@8 @ 0x7857C (_NtUserDestroyCursor@8.c)
 *     _NtUserSetCursor@4 @ 0x788D6 (_NtUserSetCursor@4.c)
 *     _NtUserDrawIconEx@44 @ 0x90A70 (_NtUserDrawIconEx@44.c)
 *     _NtUserCopyAcceleratorTable@12 @ 0x9DBB2 (_NtUserCopyAcceleratorTable@12.c)
 *     _NtUserGetIconSize@16 @ 0xA38AA (_NtUserGetIconSize@16.c)
 *     _NtUserEndDeferWindowPosEx@8 @ 0xA42C4 (_NtUserEndDeferWindowPosEx@8.c)
 *     _NtUserUpdateInputContext@12 @ 0xA65E4 (_NtUserUpdateInputContext@12.c)
 *     __MapDesktopObject@4 @ 0xA6EA0 (__MapDesktopObject@4.c)
 *     _NtUserGetRequiredCursorSizes@8 @ 0xA7772 (_NtUserGetRequiredCursorSizes@8.c)
 *     _NtUserTranslateAccelerator@12 @ 0xA8372 (_NtUserTranslateAccelerator@12.c)
 *     _NtUserQueryInputContext@8 @ 0xA8928 (_NtUserQueryInputContext@8.c)
 *     _NtUserAssociateInputContext@12 @ 0xAE5CC (_NtUserAssociateInputContext@12.c)
 *     _NtUserGetRawInputDeviceInfo@16 @ 0xC336E (_NtUserGetRawInputDeviceInfo@16.c)
 *     ?_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z @ 0xC4B12 (-_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z.c)
 *     _NtUserDestroyAcceleratorTable@4 @ 0xCC97E (_NtUserDestroyAcceleratorTable@4.c)
 *     ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427 (-xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z.c)
 *     _NtUserCreateLocalMemHandle@16 @ 0x1607D5 (_NtUserCreateLocalMemHandle@16.c)
 *     _NtUserDestroyInputContext@4 @ 0x160B48 (_NtUserDestroyInputContext@4.c)
 *     _NtUserDragObject@20 @ 0x160D60 (_NtUserDragObject@20.c)
 *     _NtUserDrawCaptionTemp@28 @ 0x161080 (_NtUserDrawCaptionTemp@28.c)
 *     _NtUserGetGestureExtArgs@12 @ 0x162C2C (_NtUserGetGestureExtArgs@12.c)
 *     _NtUserGetGestureInfo@8 @ 0x162D25 (_NtUserGetGestureInfo@8.c)
 *     _NtUserGetRawInputBuffer@12 @ 0x16426F (_NtUserGetRawInputBuffer@12.c)
 *     _NtUserGetRawInputData@20 @ 0x164590 (_NtUserGetRawInputData@20.c)
 *     _NtUserGetTouchInputInfo@16 @ 0x16483D (_NtUserGetTouchInputInfo@16.c)
 *     _NtUserGetTouchValidationStatus@4 @ 0x16494D (_NtUserGetTouchValidationStatus@4.c)
 *     _NtUserLinkDpiCursor@12 @ 0x165CC9 (_NtUserLinkDpiCursor@12.c)
 *     _NtUserRegisterEdgy@12 @ 0x167F38 (_NtUserRegisterEdgy@12.c)
 *     _NtUserSetCalibrationData@16 @ 0x1688E9 (_NtUserSetCalibrationData@16.c)
 *     _NtUserSetCursorContents@8 @ 0x1691CD (_NtUserSetCursorContents@8.c)
 *     _NtUserSetDisplayMapping@8 @ 0x16938E (_NtUserSetDisplayMapping@8.c)
 *     _NtUserSetSystemCursor@8 @ 0x169C8E (_NtUserSetSystemCursor@8.c)
 *     _NtUserUserHandleGrantAccess@12 @ 0x16B080 (_NtUserUserHandleGrantAccess@12.c)
 *     ?xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x1829A7 (-xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     _SfnGESTURE@32 @ 0x18A8A8 (_SfnGESTURE@32.c)
 *     _SfnTOUCH@32 @ 0x1925A8 (_SfnTOUCH@32.c)
 *     _fnHkOPTINLPEVENTMSG@20 @ 0x193333 (_fnHkOPTINLPEVENTMSG@20.c)
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __fastcall HMValidateHandle(int a1, char a2)
{
  int v3; // esi
  PKTHREAD CurrentThread; // edi
  int v5; // edi
  int *v6; // edx
  char v7; // al
  int v8; // edi
  int *ThreadWin32Thread; // eax
  int v11; // ecx
  PKTHREAD v12; // [esp+Ch] [ebp-8h]

  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
    PsGetThreadWin32Thread(CurrentThread);
  if ( (unsigned int)(unsigned __int16)a1 < *(_DWORD *)(_gpsi + 4) )
  {
    v5 = _gSharedInfo[1] + (unsigned __int16)a1 * _gSharedInfo[2];
    v6 = (int *)HMPkheFromPhe(v5);
    if ( (HIWORD(a1) == *(_WORD *)(v5 + 14) || !HIWORD(a1) || HIWORD(a1) == 0xFFFF) && (*(_BYTE *)(v5 + 13) & 1) == 0 )
    {
      v7 = *(_BYTE *)(v5 + 12);
      if ( v7 == a2 || a2 == -1 && v7 )
        v3 = *v6;
    }
  }
  v12 = KeGetCurrentThread();
  v8 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(v12);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v8 + 264) & 0x20000000) != 0 )
  {
    if ( !ValidateHandleSecure(a1, 3) )
      v3 = 0;
  }
  else
  {
    v3 = ValidateHandleSecure(a1, 2) != 0 ? v3 : 0;
  }
  if ( v3 )
    return v3;
  switch ( a2 )
  {
    case 1:
      v11 = 1400;
      break;
    case 2:
      v11 = 1401;
      break;
    case 3:
      v11 = 1402;
      break;
    case 4:
      v11 = 1405;
      break;
    case 5:
      v11 = 1404;
      break;
    case 8:
      v11 = 1403;
      break;
    default:
      v11 = 6;
      break;
  }
  UserSetLastError(v11);
  return 0;
}
