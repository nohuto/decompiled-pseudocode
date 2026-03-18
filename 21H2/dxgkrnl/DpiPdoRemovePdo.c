/*
 * XREFs of DpiPdoRemovePdo @ 0x1C0397BD4
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0205A28 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0397E38 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     ?DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z @ 0x1C039CFE0 (-DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03B0AD0 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoRemovePdo(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  _QWORD **v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  int v9; // r10d
  unsigned int v10; // edx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  void *v16; // rcx
  NTSTATUS v17; // eax
  _QWORD *v18; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v6 = *(_QWORD ***)(v3 + 3648);
  v7 = v6;
  v8 = *v6;
  if ( *v6 == v6 )
  {
LABEL_5:
    v4 = -1073741811;
    WdLogSingleEntry1(3LL, *(unsigned int *)(a2 + 24));
    return v4;
  }
  v9 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v10 = *((_DWORD *)v7 + 126);
    if ( v10 == v9 )
      break;
    v7 = v8;
    v8 = (_QWORD *)*v8;
    if ( v8 == v6 )
      goto LABEL_5;
  }
  if ( !a3 || *((_DWORD *)v7 + 124) != 1 || *((_BYTE *)v7 + 511) )
  {
LABEL_16:
    v14 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_26;
    v15 = (_QWORD *)v7[1];
    if ( (_QWORD *)*v15 != v7 )
      goto LABEL_26;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    --*(_DWORD *)(v3 + 3664);
    *((_BYTE *)v7 + 508) = 0;
    KeWaitForSingleObject((PVOID)(v3 + 3408), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 48) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v3 + 3408), 0);
    v16 = (void *)v7[116];
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      v7[116] = 0LL;
    }
    WdLogSingleEntry1(4LL, v7[3]);
    if ( !*((_BYTE *)v7 + 509) )
    {
      v17 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v7 + 2, (PVOID)a2, File, 1u, 0x20u);
      v4 = v17;
      if ( v17 >= 0 )
      {
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v7 + 2, (PVOID)a2, 0x20u);
        IoQueueWorkItem((PIO_WORKITEM)v7[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      else
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, v17);
      }
      return v4;
    }
    v18 = *(_QWORD **)(v3 + 3680);
    if ( *v18 != v3 + 3672 )
LABEL_26:
      __fastfail(3u);
    *v7 = v3 + 3672;
    v7[1] = v18;
    *v18 = v7;
    *(_QWORD *)(v3 + 3680) = v7;
    return v4;
  }
  v12 = MonitorRemovePhysicalMonitor(*(void **)(v3 + 3896), v10);
  if ( v12 != 128 )
  {
    if ( v12 < 0 )
      WdLogSingleEntry1(2LL, v12);
    v13 = DmmResetOrginalVideoOutputTechnologies(*(void *const *)(v3 + 3896), *((_DWORD *)v7 + 126));
    v4 = v13;
    if ( v13 < 0 )
      WdLogSingleEntry1(2LL, v13);
    goto LABEL_16;
  }
  return 128LL;
}
