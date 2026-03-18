/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C00133EC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0018668 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     NtUserDeferWindowDpiChanges @ 0x1C0126050 (NtUserDeferWindowDpiChanges.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D00AC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  _DWORD *v19; // rax
  _DWORD *v20; // rcx

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
    v18 = v14;
    if ( v14 && ((*(_DWORD *)(v14 + 304) & 1) == 0 || a3 && !a2) )
    {
      *(_WORD *)(*(_QWORD *)(v14 + 40) + 286LL) = v8;
      v19 = *(_DWORD **)(v14 + 296);
      if ( a2 )
      {
        if ( v19 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10, v16, v17);
        v13 = (_DWORD *)*((_QWORD *)a1 + 36);
        *(_QWORD *)(v18 + 296) = v13;
        ++*v13;
      }
      else if ( v19
             || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10, v16, v17), (v19 = *(_DWORD **)(v18 + 296)) != 0LL) )
      {
        --*v19;
        v20 = *(_DWORD **)(v18 + 296);
        if ( !*v20 )
          Win32FreePool(v20);
        *(_QWORD *)(v18 + 296) = 0LL;
      }
    }
  }
  if ( a3 && a2 )
    v3 = 1;
  *((_DWORD *)a1 + 76) = v3 | *((_DWORD *)a1 + 76) & 0xFFFFFFFE;
  FreeHwndList(v11);
  return 1LL;
}
