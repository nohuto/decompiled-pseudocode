/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C0075F50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ApiSetEditionIsGetAsyncKeyStateBlocked @ 0x1C0076084 (ApiSetEditionIsGetAsyncKeyStateBlocked.c)
 *     EtwTraceGetAsyncKeyState @ 0x1C0076130 (EtwTraceGetAsyncKeyState.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0076C34 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0076DF4 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     _GetAsyncKeyState @ 0x1C0077230 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C00772C0 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceUIPIInputError @ 0x1C0077560 (EtwTraceUIPIInputError.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  char v11; // [rsp+78h] [rbp+10h] BYREF

  EnterSharedCrit(0, 1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( gptiForeground && PsGetCurrentProcessWin32Process(v2) != *((_QWORD *)gptiForeground + 53) )
    EtwTraceGetAsyncKeyState(ThreadWin32Thread);
  if ( (unsigned int)ApiSetEditionIsGetAsyncKeyStateBlocked() )
    goto LABEL_10;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError((struct tagTHREADINFO *)ThreadWin32Thread, 0LL, 3);
LABEL_10:
    UserSetLastError(5LL, v5);
    goto LABEL_8;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(ThreadWin32Thread) )
  {
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 124LL) = 0;
    v9 = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 128LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(a1);
    CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v11);
    v7 = *(_QWORD *)(ThreadWin32Thread + 480);
    v6 = *((unsigned int *)gpsi + 1747);
    *(_DWORD *)(v7 + 124) = v6;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 128LL) = gafAsyncKeyState;
    v9 = *(_QWORD *)(ThreadWin32Thread + 480);
    *(_QWORD *)(v9 + 136) = gafAsyncKeyStateRecentDown;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v9, v6, v7, v8);
  return AsyncKeyState;
}
