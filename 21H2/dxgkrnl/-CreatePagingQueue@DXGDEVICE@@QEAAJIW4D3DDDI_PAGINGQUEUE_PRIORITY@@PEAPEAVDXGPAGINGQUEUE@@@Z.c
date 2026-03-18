/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C016A4E8
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C01699BC (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C004C2E0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0166608 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C016A628 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C03650E0 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0375A2C (-VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PE.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // r9
  __int64 Pool2; // rax
  struct COREDEVICEACCESS *v10; // rdx
  __int64 v11; // rbp
  DXGPAGINGQUEUE *v12; // rax
  DXGPAGINGQUEUE **v13; // rcx
  __int64 v14; // rdx
  DXGPROCESS *v16; // rcx
  unsigned int v17; // ebx
  unsigned int HostProcess; // eax
  __int64 v19; // rdx
  int v20; // eax
  _D3DKMT_CREATEPAGINGQUEUE v21; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v22[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v23; // [rsp+80h] [rbp-48h]

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 8031LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 8031LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8032LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8032LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 8033LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PagingQueue != NULL", 8033LL, 0LL, 0LL, 0LL, 0LL);
  }
  Pool2 = ExAllocatePool2(257LL, 80LL, 1265072196LL, v8);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = this;
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 1LL;
    *(_BYTE *)(Pool2 + 72) = 0;
    *a4 = (struct DXGPAGINGQUEUE *)Pool2;
    LODWORD(v11) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)Pool2, a2, a3);
    if ( (int)v11 >= 0 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(v11 + 209) )
      {
LABEL_11:
        v12 = *a4;
        v13 = (DXGPAGINGQUEUE **)((char *)this + 496);
        v14 = *((_QWORD *)this + 62);
        if ( *(DXGDEVICE **)(v14 + 8) != (DXGDEVICE *)((char *)this + 496) )
          __fastfail(3u);
        *(_QWORD *)v12 = v14;
        *((_QWORD *)v12 + 1) = v13;
        *(_QWORD *)(v14 + 8) = v12;
        *v13 = v12;
        _InterlockedIncrement64((volatile signed __int64 *)this + 8);
        return 0LL;
      }
      v16 = (DXGPROCESS *)*((_QWORD *)this + 5);
      *(_OWORD *)&v21.FenceValueCPUVirtualAddress = 0LL;
      v21.PhysicalAdapterIndex = a2;
      v17 = *((_DWORD *)this + 110);
      *(_OWORD *)&v21.hDevice = 0LL;
      v23 = 0LL;
      *(_OWORD *)v22 = 0LL;
      v21.Priority = a3;
      HostProcess = DXGPROCESS::GetHostProcess(v16);
      LODWORD(v11) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v11 + 4344),
                       HostProcess,
                       v17,
                       &v21,
                       (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)v22);
      if ( (int)v11 >= 0 )
      {
        v19 = *((_QWORD *)*a4 + 5);
        *((_DWORD *)*a4 + 7) = v22[0];
        *(_DWORD *)(v19 + 44) = HIDWORD(v22[0]);
        v20 = MapGuestFenceCpuVaToHost(
                v22[1],
                (void **)(v19 + 56),
                (unsigned __int64 *)(v19 + 80),
                (unsigned int *)(v19 + 88));
        v11 = v20;
        if ( v20 >= 0 )
          goto LABEL_11;
        WdLogSingleEntry2(2LL, v20, 8081LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v11,
          8081LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  else
  {
    *a4 = 0LL;
    LODWORD(v11) = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  if ( *a4 )
  {
    DXGPAGINGQUEUE::DestroyCoreState(*a4, v10);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v11;
}
