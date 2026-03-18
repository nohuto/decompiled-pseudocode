/*
 * XREFs of MNFreePopup @ 0x1C02218F8
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C0221670 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0221D60 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C02225EC (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235818 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     UnlockPopupMenu @ 0x1C0236B20 (UnlockPopupMenu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall MNFreePopup(void ***a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  void **v8; // rdx
  void *v9; // r8
  void *v10; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  v5 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 2), a2, a3, a4);
  v7 = v5;
  if ( v5 )
  {
    v8 = *a1;
    v9 = **a1;
    if ( v9 != gpopupMenu )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( *(_QWORD *)(v5 + 16) )
      {
        v10 = **a1;
        if ( *(void **)(v5 + 16) != v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9, v6);
      }
      *(_QWORD *)(v7 + 16) = **a1;
    }
  }
  HMAssignmentUnlock((char *)**a1 + 24);
  HMAssignmentUnlock((char *)**a1 + 32);
  UnlockPopupMenu(a1, (char *)**a1 + 40);
  UnlockPopupMenu(a1, (char *)**a1 + 48);
  HMAssignmentUnlock((char *)**a1 + 8);
  HMAssignmentUnlock((char *)**a1 + 56);
  HMAssignmentUnlock((char *)**a1 + 16);
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v19),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( *a1 != (void **)gSmartObjNullRef && !--*((_DWORD *)*a1 + 2) )
  {
    if ( *((_BYTE *)*a1 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(v12 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v12 + 1472) = result;
  }
  return result;
}
