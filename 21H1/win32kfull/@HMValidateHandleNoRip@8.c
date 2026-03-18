/*
 * XREFs of @HMValidateHandleNoRip@8 @ 0x16F4A
 * Callers:
 *     _xxxCreateWindowSmIcon@12 @ 0x13138 (_xxxCreateWindowSmIcon@12.c)
 *     ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876 (-xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z.c)
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     _xxxClientLoadMenu@8 @ 0x16C34 (_xxxClientLoadMenu@8.c)
 *     _xxxClientCopyImage@20 @ 0x16E68 (_xxxClientCopyImage@20.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     __RegisterClassEx@20 @ 0x47B74 (__RegisterClassEx@20.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _FindQMsg@24 @ 0x6A480 (_FindQMsg@24.c)
 *     _DestroyWindowSmIcon@4 @ 0x71B5C (_DestroyWindowSmIcon@4.c)
 *     _DWP_GetIcon@8 @ 0xA9716 (_DWP_GetIcon@8.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     __GetWindowIcon@8 @ 0xC4AB8 (__GetWindowIcon@8.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 *     _xxxClientLoadImage@28 @ 0xD94BC (_xxxClientLoadImage@28.c)
 *     _EditionGetKeyStateUpdateParamsForRawInput@20 @ 0xF32C8 (_EditionGetKeyStateUpdateParamsForRawInput@20.c)
 *     ?DrawIconCallBack@@YGXPAUHWND__@@IKJ@Z @ 0x15BF55 (-DrawIconCallBack@@YGXPAUHWND__@@IKJ@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 *     _NtUserUpdateInstance@12 @ 0x16AE32 (_NtUserUpdateInstance@12.c)
 *     ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D (-MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x18264B (-xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     __CsDdeUninitialize@4 @ 0x195136 (__CsDdeUninitialize@4.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxSetClassIcon@16 @ 0x19C737 (_xxxSetClassIcon@16.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall HMValidateHandleNoRip(int a1, char a2)
{
  int v3; // esi
  PKTHREAD CurrentThread; // eax
  int v5; // edi
  int *v6; // eax
  PKTHREAD v7; // eax

  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  if ( (unsigned int)(unsigned __int16)a1 < *(_DWORD *)(_gpsi + 4) )
  {
    v5 = _gSharedInfo[1] + (unsigned __int16)a1 * _gSharedInfo[2];
    v6 = (int *)HMPkheFromPhe(v5);
    if ( (HIWORD(a1) == *(_WORD *)(v5 + 14) || !HIWORD(a1) || HIWORD(a1) == 0xFFFF)
      && (*(_BYTE *)(v5 + 13) & 1) == 0
      && *(_BYTE *)(v5 + 12) == a2 )
    {
      v3 = *v6;
    }
  }
  v7 = KeGetCurrentThread();
  if ( (*(_DWORD *)(W32GetThreadWin32Thread(v7) + 264) & 0x20000000) == 0 )
    return ValidateHandleSecure(a1, 2) != 0 ? v3 : 0;
  if ( !ValidateHandleSecure(a1, 3) )
    return 0;
  return v3;
}
