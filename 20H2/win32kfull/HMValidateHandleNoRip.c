/*
 * XREFs of HMValidateHandleNoRip @ 0x1C0076550
 * Callers:
 *     EditionGetKeyStateUpdateParamsForRawInput @ 0x1C0007260 (EditionGetKeyStateUpdateParamsForRawInput.c)
 *     _GetWindowIcon @ 0x1C0008274 (_GetWindowIcon.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0015F18 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C0052180 (FindQMsg.c)
 *     xxxClientCopyImage @ 0x1C0073878 (xxxClientCopyImage.c)
 *     xxxEventWndProc @ 0x1C00739B0 (xxxEventWndProc.c)
 *     xxxClientLoadImage @ 0x1C0077158 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0077E08 (xxxClientLoadMenu.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C007A488 (xxxCreateWindowSmIcon.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     _RegisterClassEx @ 0x1C00D077C (_RegisterClassEx.c)
 *     DestroyWindowSmIcon @ 0x1C00D39BC (DestroyWindowSmIcon.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 *     DWP_GetIcon @ 0x1C0113D58 (DWP_GetIcon.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015166C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0153C80 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F24A0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3124 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     NtUserUpdateInstance @ 0x1C0203DE0 (NtUserUpdateInstance.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EBEC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021ED94 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _CsDdeUninitialize @ 0x1C02336E0 (_CsDdeUninitialize.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxSetClassIcon @ 0x1C023D898 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
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
  if ( (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 488) & 0x20000000) == 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0) & v3;
  if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
    return 0LL;
  return v3;
}
