/*
 * XREFs of HMValidateHandleNoRip @ 0x1C003109C
 * Callers:
 *     EditionGetKeyStateUpdateParamsForRawInput @ 0x1C00073C0 (EditionGetKeyStateUpdateParamsForRawInput.c)
 *     _GetWindowIcon @ 0x1C0008284 (_GetWindowIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00309B0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxClientLoadMenu @ 0x1C0030C0C (xxxClientLoadMenu.c)
 *     xxxClientCopyImage @ 0x1C0030E98 (xxxClientCopyImage.c)
 *     xxxEventWndProc @ 0x1C0030FD0 (xxxEventWndProc.c)
 *     xxxClientLoadImage @ 0x1C0043B54 (xxxClientLoadImage.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00598C8 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _RegisterClassEx @ 0x1C008B430 (_RegisterClassEx.c)
 *     DestroyWindowSmIcon @ 0x1C008E61C (DestroyWindowSmIcon.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C00964B0 (FindQMsg.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C010CC4C (xxxSetClassData.c)
 *     DWP_GetIcon @ 0x1C0112F34 (DWP_GetIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C011B988 (xxxCreateWindowSmIcon.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014F02C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0151350 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F3110 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3D90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     NtUserUpdateInstance @ 0x1C0204C50 (NtUserUpdateInstance.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021FA7C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021FC24 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _CsDdeUninitialize @ 0x1C0234570 (_CsDdeUninitialize.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxSetClassIcon @ 0x1C023EB38 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r14

  v3 = 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v6 = (__int64 *)HMPkheFromPhe(v5);
    if ( (WORD1(a1) == *(_WORD *)(v5 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*(_BYTE *)(v5 + 25) & 1) == 0
      && *(_BYTE *)(v5 + 24) == a2 )
    {
      v3 = *v6;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) & 0x20000000) == 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0) & v3;
  if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
    return 0LL;
  return v3;
}
