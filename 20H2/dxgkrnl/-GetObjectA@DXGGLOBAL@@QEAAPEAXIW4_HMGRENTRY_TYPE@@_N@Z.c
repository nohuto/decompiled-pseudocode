/*
 * XREFs of ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C000
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00D4B2C (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016CB20 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkCheckSharedResourceAccess @ 0x1C0228550 (DxgkCheckSharedResourceAccess.c)
 *     DxgkGetSharedResourceAdapterLuid @ 0x1C0229120 (DxgkGetSharedResourceAdapterLuid.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C02900BC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02A9338 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetObjectA(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v12; // rax

  v4 = a2;
  if ( *(struct _KTHREAD **)(a1 + 264) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 1114LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 304) )
  {
    v8 = *(_QWORD *)(a1 + 288);
    v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
    if ( ((v4 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
    {
      v10 = v9 & 0x1F;
      if ( a3 == (_DWORD)v10 )
        return *(_QWORD *)(v8 + 16LL * (unsigned int)v7);
      v12 = WdLogNewEntry5_WdError(v10, 2LL * (unsigned int)v7);
      *(_QWORD *)(v12 + 24) = 267LL;
      WdLogEvent5_WdError(v12);
    }
  }
  return 0LL;
}
