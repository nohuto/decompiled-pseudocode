/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C000F3B0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsGetAsyncKeyStateBlocked @ 0x1C000F4E4 (ApiSetEditionIsGetAsyncKeyStateBlocked.c)
 *     EtwTraceGetAsyncKeyState @ 0x1C000F590 (EtwTraceGetAsyncKeyState.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C000F6D4 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C000F894 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     _GetAsyncKeyState @ 0x1C000F9F0 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C000FA80 (IsKeyboardDelegationEnabledForThread.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C009FEB0 (EtwTraceUIPIInputError.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  __int64 v5; // rcx
  char v7; // [rsp+78h] [rbp+10h] BYREF

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( gptiForeground && PsGetCurrentProcessWin32Process(v2) != *((_QWORD *)gptiForeground + 52) )
    EtwTraceGetAsyncKeyState(ThreadWin32Thread);
  if ( (unsigned int)ApiSetEditionIsGetAsyncKeyStateBlocked() )
    goto LABEL_10;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError((struct tagTHREADINFO *)ThreadWin32Thread, 0LL, 3);
LABEL_10:
    UserSetLastError(5LL);
    goto LABEL_8;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(ThreadWin32Thread) )
  {
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 124LL) = 0;
    v5 = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 128LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(a1);
    CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v7);
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 124LL) = *((_DWORD *)gpsi + 1747);
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 128LL) = gafAsyncKeyState;
    v5 = *(_QWORD *)(ThreadWin32Thread + 472);
    *(_QWORD *)(v5 + 136) = gafAsyncKeyStateRecentDown;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return AsyncKeyState;
}
