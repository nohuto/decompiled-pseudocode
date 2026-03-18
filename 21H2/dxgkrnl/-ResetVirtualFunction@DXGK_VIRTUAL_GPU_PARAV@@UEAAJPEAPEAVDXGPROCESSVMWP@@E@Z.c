/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C035EC00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C005C52C (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0362480 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct DXGPROCESSVMWP **a2,
        char a3)
{
  DXGK_VIRTUAL_GPU_PARAV *i; // rdi
  DXGPROCESS *v7; // rcx
  _BYTE v9[88]; // [rsp+50h] [rbp-C8h] BYREF
  DXGADAPTER *v10; // [rsp+A8h] [rbp-70h]

  if ( !*((_BYTE *)this + 154) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, *((struct DXGADAPTER *const *)this + 2), 0LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
      {
        WdLogSingleEntry1(1LL, 581LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"CoreAdapterAccess.IsSharedOwner()",
          581LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
      for ( i = (DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)this + 40);
            i != (DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 320);
            i = *(DXGK_VIRTUAL_GPU_PARAV **)i )
      {
        DXGDEVICE::FlushScheduler((_QWORD *)i - 15, 4u, 0xFFFFFFFD, 0);
      }
      ExReleasePushLockSharedEx((char *)this + 288, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
    }
    if ( *((_QWORD *)this + 12) && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 13)) && a2 )
      *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 173) = 0;
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
  }
  if ( a3 )
  {
    v7 = (DXGPROCESS *)*((_QWORD *)this + 12);
    if ( v7 )
    {
      DXGPROCESS::ReleaseReference(v7);
      *((_QWORD *)this + 12) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  *((_BYTE *)this + 154) = 1;
  return 0LL;
}
