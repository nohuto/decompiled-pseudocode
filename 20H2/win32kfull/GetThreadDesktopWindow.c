/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00FBC68
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000F220 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C00141C4 (GetLastTopMostWindow.c)
 *     NtUserBuildHwndList @ 0x1C0049870 (NtUserBuildHwndList.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0071090 (fnHkINLPCBTCREATESTRUCT.c)
 *     _FindWindowEx @ 0x1C00B3640 (_FindWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SelectPalette @ 0x1C00F7F64 (_SelectPalette.c)
 *     xxxWindowFromPoint @ 0x1C00F8B4C (xxxWindowFromPoint.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     _FindWindowEx_Old @ 0x1C015C828 (_FindWindowEx_Old.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0234DD8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023EBA4 (xxxDrawAnimatedRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax

  v1 = 0LL;
  v2 = a1;
  if ( a1 )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(0LL)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v12),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
    if ( v2 )
    {
LABEL_6:
      v8 = *(_QWORD *)(v2 + 464);
      if ( v8 )
        return *(_QWORD *)(v8 + 24);
    }
  }
  return v1;
}
