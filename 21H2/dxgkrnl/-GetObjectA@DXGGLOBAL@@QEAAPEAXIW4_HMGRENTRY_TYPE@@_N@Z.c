/*
 * XREFs of ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0020DE8
 * Callers:
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01ECAB0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkCheckSharedResourceAccess @ 0x1C02D7DB0 (DxgkCheckSharedResourceAccess.c)
 *     DxgkGetSharedResourceAdapterLuid @ 0x1C02D8AC0 (DxgkGetSharedResourceAdapterLuid.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C03406F4 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A370 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGGLOBAL::GetObjectA(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  v3 = 0LL;
  if ( *(struct _KTHREAD **)(a1 + 312) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1447LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0,
          2,
          -1,
          (__int64)L"m_ShareMutex.IsOwner()",
          1447LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v7 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 352) )
  {
    v8 = *(_QWORD *)(a1 + 336);
    v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
    {
      if ( a3 == (*(_DWORD *)(v8 + 16 * v7 + 8) & 0x1F) )
      {
        return *(_QWORD *)(v8 + 16LL * (unsigned int)v7);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v15,
            v14,
            v16,
            0,
            0,
            -1,
            (__int64)L"Handle type mismatch",
            267LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  return v3;
}
