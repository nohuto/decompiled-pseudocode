/*
 * XREFs of MNFreePopup @ 0x1C0222788
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C0222500 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0222BF0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C022347C (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02366A8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     UnlockPopupMenu @ 0x1C02379B0 (UnlockPopupMenu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall MNFreePopup(void *const **a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *const *v4; // rdx
  void *v5; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  v2 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 2));
  v3 = v2;
  if ( v2 )
  {
    v4 = *a1;
    if ( **a1 != gpopupMenu )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      if ( *(_QWORD *)(v2 + 16) )
      {
        v5 = **a1;
        if ( *(void **)(v2 + 16) != v5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
      }
      *(void **)(v3 + 16) = **a1;
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
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  if ( *a1 != (void *const *)gSmartObjNullRef && !--*((_DWORD *)*a1 + 2) )
  {
    if ( *((_BYTE *)*a1 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(v7 + 1464);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v7 + 1464) = result;
  }
  return result;
}
