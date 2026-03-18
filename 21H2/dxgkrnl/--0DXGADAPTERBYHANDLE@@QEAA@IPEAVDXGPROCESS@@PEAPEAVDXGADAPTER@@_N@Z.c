/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C015CDF0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0164900 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0166ED0 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C01673D0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0167C20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C0199960 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C01A5B40 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01CC2D0 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C01CCF40 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01D9F50 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkFlushHeapTransitions @ 0x1C01DE900 (DxgkFlushHeapTransitions.c)
 *     DxgkFlushPresentHistory @ 0x1C01E6FB0 (DxgkFlushPresentHistory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01E7284 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetScanLine @ 0x1C01EB450 (DxgkGetScanLine.c)
 *     DxgkGetDisplayModeList @ 0x1C01EBFF0 (DxgkGetDisplayModeList.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B9AE4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CF750 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02D0490 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1520 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkQueryClockCalibration @ 0x1C02D34B0 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C02D3F40 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C02D4970 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D78DC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetMultisampleMethodList @ 0x1C02F8F20 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C02F9600 (DxgkInvalidateActiveVidPn.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C03204EC (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C03242FC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkSetStablePowerState @ 0x1C03389E0 (DxgkSetStablePowerState.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036D1F0 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  __int64 v9; // rbx
  int v10; // eax
  volatile signed __int64 *v11; // rbx
  struct _KTHREAD *v13; // rdx
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  struct _KTHREAD *v22; // rsi
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rbx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  _BYTE v29[8]; // [rsp+60h] [rbp-38h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-30h]
  int v31; // [rsp+70h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  if ( !a4 )
    return this;
  v30 = (DXGPUSHLOCK *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1425LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DXGPUSHLOCK::AcquireShared(v30);
  v9 = (a2 >> 6) & 0xFFFFFF;
  v10 = *((_DWORD *)a3 + 106) >> 8;
  v31 = 1;
  if ( (v10 & 1) != 0 )
  {
    v22 = a3[76];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v22 + 248));
    if ( (unsigned int)v9 < *((_DWORD *)v22 + 74) )
    {
      v23 = *((_QWORD *)v22 + 35);
      v24 = *(_DWORD *)(v23 + 16 * v9 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v9 + 8) & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
      {
        v25 = 2 * v9;
        if ( (v24 & 0x1F) == 1 )
        {
          v11 = *(volatile signed __int64 **)(v23 + 8 * v25);
          goto LABEL_33;
        }
        if ( a5 )
        {
          WdLogSingleEntry1(2LL, 267LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v27,
                v26,
                v28,
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
    }
    v11 = 0LL;
LABEL_33:
    ExReleasePushLockSharedEx((char *)v22 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_7;
  }
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 74) )
  {
    v13 = a3[35];
    v14 = *((_DWORD *)v13 + 4 * v9 + 2);
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v13 + 16 * v9 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
    {
      v15 = 2 * v9;
      if ( (v14 & 0x1F) == 1 )
      {
        v11 = (volatile signed __int64 *)*((_QWORD *)v13 + v15);
        goto LABEL_7;
      }
      if ( a5 )
      {
        WdLogSingleEntry1(2LL, 267LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v17,
              v16,
              v18,
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
  }
  v11 = 0LL;
LABEL_7:
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    *((_QWORD *)this + 1) = -1LL;
    v11 = *(volatile signed __int64 **)this;
  }
  *a4 = (struct DXGADAPTER *)v11;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return this;
}
