/*
 * XREFs of DpiPollSingleDisplayChild @ 0x1C02C6A14
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E5C60 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C02CAD0C (DpiFdoInvalidateChildStatus.c)
 */

__int64 __fastcall DpiPollSingleDisplayChild(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, File, 1u, 0x20u);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdWarning(v12);
    return (unsigned int)v11;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 484) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  if ( *(_DWORD *)(v3 + 236) != 2 )
  {
    LODWORD(v11) = -1073741823;
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 32) = -1073741823LL;
LABEL_11:
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v3 + 3976) == 1 || *(_DWORD *)(v3 + 284) != 1 )
  {
    LODWORD(v11) = -1073741661;
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 32) = -1073741661LL;
    goto LABEL_11;
  }
  LOBYTE(v16) = 1;
  LOBYTE(v15) = 1;
  LODWORD(v11) = DpiFdoInvalidateChildStatus(a1, a2, v15, v16, 0, 0, a3);
LABEL_12:
  if ( *(_BYTE *)(v3 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, 0x20u);
  return (unsigned int)v11;
}
