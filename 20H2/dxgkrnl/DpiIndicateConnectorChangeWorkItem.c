/*
 * XREFs of DpiIndicateConnectorChangeWorkItem @ 0x1C02C4E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4A0 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkQueryConnectionChanges @ 0x1C0020110 (DxgkQueryConnectionChanges.c)
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C012F8AC (DxgkWaitForPnPTransitionDone.c)
 */

void __fastcall DpiIndicateConnectorChangeWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx

  v3 = IoObject[8];
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, File, 1u, 0x20u);
  v9 = v6;
  if ( v6 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_BYTE *)(v3 + 1158) )
    {
      if ( !*(_BYTE *)(v3 + 2743) )
      {
        v13 = *(_DWORD *)(*((_QWORD *)DXGGLOBAL::GetGlobal(v12, v11) + 102) + 128LL);
        if ( v13 != -1 )
        {
          if ( *(_BYTE *)(v3 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
          KeLeaveCriticalRegion();
          DxgkWaitForPnPTransitionDone(0LL, 0LL, v13, 1);
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v3 + 484) )
            DpiCheckForOutstandingD3Requests(v3);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
        }
      }
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3304), 1u);
    DxgkQueryConnectionChanges((__int64)IoObject, 0LL, 0, 0, 1);
    ExReleaseResourceLite((PERESOURCE)(v3 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  IoFreeWorkItem(IoWorkItem);
}
