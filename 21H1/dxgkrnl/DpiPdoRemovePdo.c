/*
 * XREFs of DpiPdoRemovePdo @ 0x1C02D4D70
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C01657D8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C016594C (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02D5018 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C02DA488 (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02EF9B4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoRemovePdo(__int64 a1, __int64 a2, __int64 a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  v6 = a2;
  v7 = *(_QWORD ***)(v4 + 3648);
  v8 = v7;
  v9 = *v7;
  if ( *v7 == v7 )
  {
LABEL_5:
    LODWORD(v5) = -1073741811;
    v10 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v6 + 24);
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)v5;
  }
  a2 = *(unsigned int *)(a2 + 24);
  while ( *((_DWORD *)v8 + 126) != (_DWORD)a2 )
  {
    v8 = v9;
    v9 = (_QWORD *)*v9;
    if ( v9 == v7 )
      goto LABEL_5;
  }
  v12 = *v8;
  if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v13 = (_QWORD *)v8[1], (_QWORD *)*v13 != v8) )
LABEL_24:
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  --*(_DWORD *)(v4 + 3664);
  *((_BYTE *)v8 + 508) = 0;
  if ( (_BYTE)a3 && *((_DWORD *)v8 + 124) == 1 && !*((_BYTE *)v8 + 511) )
  {
    v14 = MonitorRemovePhysicalMonitor(*(void **)(v4 + 3896), *((_DWORD *)v8 + 126), 0, a4);
    v17 = v14;
    if ( v14 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 24) = v17;
      WdLogEvent5_WdError(v18);
    }
    v19 = DmmResetBaseVideoOutputTechnology(*(void *const *)(v4 + 3896), *((_DWORD *)v8 + 126));
    v5 = v19;
    if ( v19 < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v22 + 24) = v5;
      WdLogEvent5_WdError(v22);
    }
  }
  KeWaitForSingleObject((PVOID)(v4 + 3408), Executive, 0, 0, 0LL);
  *(_QWORD *)(v6 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v4 + 3408), 0);
  v24 = (void *)v8[116];
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    v8[116] = 0LL;
  }
  v25 = WdLogNewEntry5_WdEvent(v24, v23);
  *(_QWORD *)(v25 + 24) = v8[3];
  WdLogEvent5_WdEvent(v25);
  if ( *((_BYTE *)v8 + 509) )
  {
    v30 = *(_QWORD **)(v4 + 3680);
    if ( *v30 == v4 + 3672 )
    {
      *v8 = v4 + 3672;
      v8[1] = v30;
      *v30 = v8;
      *(_QWORD *)(v4 + 3680) = v8;
      return (unsigned int)v5;
    }
    goto LABEL_24;
  }
  v26 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v8 + 2, (PVOID)v6, File, 1u, 0x20u);
  v5 = v26;
  if ( v26 >= 0 )
  {
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v8 + 2, (PVOID)v6, 0x20u);
    IoQueueWorkItem((PIO_WORKITEM)v8[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v29[3] = 275LL;
    v29[4] = 21LL;
    v29[5] = v5;
    WdLogEvent5_WdCriticalError(v29);
  }
  return (unsigned int)v5;
}
