/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C005B2A4 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     NtUserDeferWindowDpiChanges @ 0x1C0124D60 (NtUserDeferWindowDpiChanges.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D0EBC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  __int16 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  _QWORD *i; // r14
  _DWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  _DWORD *v17; // rax
  _DWORD *v18; // rcx

  v3 = 0;
  v5 = *((_QWORD *)a1 + 5);
  if ( a2 == (*(_WORD *)(v5 + 286) != 0) || (*((_DWORD *)a1 + 76) & 1) != 0 && !a3 )
    return 0LL;
  v8 = a2 ? *(_WORD *)(v5 + 284) : 0;
  v9 = BuildHwndList(a1);
  v11 = v9;
  if ( !v9 )
    return 0LL;
  for ( i = (_QWORD *)(v9 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v10) = 1;
    v14 = HMValidateHandleNoSecure(*i, v10);
    v16 = v14;
    if ( v14 && ((*(_DWORD *)(v14 + 304) & 1) == 0 || a3 && !a2) )
    {
      *(_WORD *)(*(_QWORD *)(v14 + 40) + 286LL) = v8;
      v17 = *(_DWORD **)(v14 + 296);
      if ( a2 )
      {
        if ( v17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10);
        v13 = (_DWORD *)*((_QWORD *)a1 + 36);
        *(_QWORD *)(v16 + 296) = v13;
        ++*v13;
      }
      else if ( v17 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10), (v17 = *(_DWORD **)(v16 + 296)) != 0LL) )
      {
        --*v17;
        v18 = *(_DWORD **)(v16 + 296);
        if ( !*v18 )
          Win32FreePool(v18);
        *(_QWORD *)(v16 + 296) = 0LL;
      }
    }
  }
  if ( a3 && a2 )
    v3 = 1;
  *((_DWORD *)a1 + 76) = v3 | *((_DWORD *)a1 + 76) & 0xFFFFFFFE;
  FreeHwndList(v11);
  return 1LL;
}
