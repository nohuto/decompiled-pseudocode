/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C0235EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006654 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C003F71C (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E4748 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0238A64 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct DXGPROCESSVMWP **a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGK_VIRTUAL_GPU_PARAV *i; // rdi
  __int64 v10; // rdx
  DXGPROCESS *v11; // rcx
  _BYTE v13[88]; // [rsp+20h] [rbp-C8h] BYREF
  DXGADAPTER *v14; // [rsp+78h] [rbp-70h]

  if ( !*((_BYTE *)this + 154) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, *((struct DXGADAPTER *const *)this + 2), 0LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v14) )
      {
        v8 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v8 + 24) = 586LL;
        WdLogEvent5_WdAssertion(v8);
      }
      DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 264));
      for ( i = (DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)this + 37);
            i != (DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 296);
            i = *(DXGK_VIRTUAL_GPU_PARAV **)i )
      {
        DXGDEVICE::FlushScheduler((_QWORD *)i - 15, 4u);
      }
      ExReleasePushLockSharedEx((char *)this + 264, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13, v10);
    }
    if ( *((_QWORD *)this + 12) && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 13)) && a2 )
      *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 165) = 0;
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 168));
  }
  if ( a3 )
  {
    v11 = (DXGPROCESS *)*((_QWORD *)this + 12);
    if ( v11 )
    {
      DXGPROCESS::ReleaseReference(v11, (__int64)a2);
      *((_QWORD *)this + 12) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  *((_BYTE *)this + 154) = 1;
  return 0LL;
}
