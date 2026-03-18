/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C0388704
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01F5298 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02BB55C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C02C4E5C (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02C53D8 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  void (__fastcall *v6)(__int64, __int128 *, __int64, __int64); // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  NTSTATUS v10; // eax
  struct DXGGLOBAL *Global; // rax

  if ( qword_1C0130748 )
  {
    v3 = *(_QWORD *)(qword_1C0130748 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_QWORD *)(v3 + 3896) )
    {
      v6 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(v3 + 984);
      v7 = *(_QWORD *)(v3 + 48);
      *(_QWORD *)(v3 + 5632) = a1;
      LOBYTE(v5) = byte_1C013049B;
      LOBYTE(v4) = dword_1C01307F0 == 1;
      v6(v7, &xmmword_1C0130750, v4, v5);
      *(_QWORD *)(v3 + 5632) = 0LL;
      byte_1C013049B = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 3896), 1);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 3896), 2, v8);
      DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v3 + 3896), 1);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 3896), 2u, v9);
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 3896), 1);
      v10 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2744), 1u);
      if ( v10 < 0 )
        WdLogSingleEntry1(2LL, v10);
      xmmword_1C0130760 = 0LL;
      DWORD2(xmmword_1C0130760) = -1;
      xmmword_1C0130750 = 0LL;
      memset(&xmmword_1C0130770, 0, 0x80uLL);
      qword_1C0130740 = qword_1C0130748;
      dword_1C01307F0 = 4;
      Global = DXGGLOBAL_GetGlobal();
      QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
    }
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
}
