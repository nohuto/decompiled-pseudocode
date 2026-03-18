/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C02C69C0
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01826A0 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4A0 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E0B98 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C011E01C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C011E380 (DxgkAcquireAdapterCoreSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C020BDBC (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C02163D0 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02168F0 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, __int128 *); // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // r8
  __int64 v21; // r9

  if ( qword_1C00B0DC0 )
  {
    v5 = *(_QWORD *)(qword_1C00B0DC0 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v5 + 3896), v6);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3896), 2, v7);
    DXGADAPTER::EnableMsBddFallback(*(PERESOURCE ****)(v5 + 3896), 0LL);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3896), 2u, v8);
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v5 + 3896), v9);
    v10 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2744), 0);
    v13 = v10;
    if ( v10 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdError(v14);
    }
    v15 = *(void (__fastcall **)(__int64, __int128 *))(v5 + 992);
    v16 = *(_QWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 5704) = a1;
    v15(v16, &xmmword_1C00B0DC8);
    *(_QWORD *)(v5 + 5704) = 0LL;
    if ( qword_1C00B0DB8 == qword_1C00B0DC0 )
      qword_1C00B0DB8 = 0LL;
    dword_1C00B0E68 = 2;
    Global = DXGGLOBAL::GetGlobal(v18, v17);
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v20, v21);
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v3);
    return 3221225659LL;
  }
}
