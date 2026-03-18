/*
 * XREFs of DpiIndirectCbOpmGetSrmListVersion @ 0x1C0056440
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001F6D4 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C015F8C0 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C015F954 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0161AF0 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0161B70 (DxgkReleaseAdapterDdiSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C0161FEC (DpiMiracastFindRenderAdapterForSession.c)
 */

__int64 __fastcall DpiIndirectCbOpmGetSrmListVersion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 RenderAdapterForSession; // rbx
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi

  AcquireMiniportListMutex();
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( RenderAdapterForSession )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    _InterlockedExchange64(&qword_1C00AFA50, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( *(_DWORD *)(RenderAdapterForSession + 3016) >= 4u )
    {
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3896));
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3896), 1LL);
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(RenderAdapterForSession + 3144))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              a2,
              a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3896));
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3896));
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v12 + 24) = RenderAdapterForSession;
      WdLogEvent5_WdError(v12);
      v13 = -1073741637;
    }
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    return v13;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    WdLogEvent5_WdError(v8);
    _InterlockedExchange64(&qword_1C00AFA50, 0LL);
    KeReleaseMutex(Mutex, 0);
    return 3221226021LL;
  }
}
