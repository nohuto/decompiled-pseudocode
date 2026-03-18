/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC360
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBC04 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00EABC0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00081FC (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBE6C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00DC59C (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC6B8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DCA40 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C00DD120 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00DD16C (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C00DD1D0 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00DD24C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00DD34C (OutputDuplProcessDestroyDevice.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00F07C0 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C024FE34 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C02501A8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C0250218 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct DXGOVERLAY **v7; // rsi
  struct DXGOVERLAY *v8; // rdx
  char v9; // si
  char *v10; // rdx
  __int64 v11; // rcx
  struct COREDEVICEACCESS *v12; // r8
  struct DXGCONTEXT **v13; // rdi
  struct DXGCONTEXT *v14; // rdx
  struct DXGPAGINGQUEUE **i; // rdi
  __int64 v16; // rdx
  DXGADAPTER *v17; // rcx
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v19 + 24) = 767LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v6[3] = this;
  v6[4] = *((unsigned int *)this + 109);
  v6[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v6);
  *((_DWORD *)this + 18) = 1;
  DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 728LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v7 = (struct DXGOVERLAY **)((char *)this + 480);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (struct DXGOVERLAY *)v7 )
      break;
    DXGDEVICE::DestroyOverlay(this, v8);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, (__int64)v8);
  if ( *((_DWORD *)this + 144) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 231), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
    if ( *((_QWORD *)this + 96) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL);
      if ( v9 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v10);
      if ( *((DXGDEVICE **)this + 101) != (DXGDEVICE *)((char *)this + 808) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 616LL) + 8LL) + 152LL))(*((_QWORD *)this + 96));
    }
    DXGDEVICE::DrainResources(this);
    DXGDEVICE::DrainAllocations(this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, (struct COREDEVICEACCESS *)a2);
  }
  v13 = (struct DXGCONTEXT **)((char *)this + 464);
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 == (struct DXGCONTEXT *)v13 )
      break;
    DXGDEVICE::DestroyContext(this, v14, 0LL);
  }
  if ( *((DXGDEVICE **)this + 101) != (DXGDEVICE *)((char *)this + 808) )
  {
    v20 = WdLogNewEntry5_WdCriticalError(v11, v14);
    *(_QWORD *)(v20 + 24) = 275LL;
    *(_QWORD *)(v20 + 32) = 43LL;
    *(_QWORD *)(v20 + 40) = this;
    *(_OWORD *)(v20 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  for ( i = (struct DXGPAGINGQUEUE **)((char *)this + 496);
        *i != (struct DXGPAGINGQUEUE *)i;
        DXGDEVICE::DestroyPagingQueue(this, *i, v12) )
  {
    ;
  }
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  DXGDEVICE::DestroyAllTrackedWorkloads(this);
  v16 = *((unsigned int *)this + 109);
  if ( (_DWORD)v16 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v16);
    *((_DWORD *)this + 109) = 0;
  }
  v17 = (DXGADAPTER *)*((_QWORD *)this + 231);
  if ( v17 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v17);
    *((_QWORD *)this + 231) = 0LL;
  }
  v18 = (struct _ERESOURCE *)*((_QWORD *)this + 17);
  if ( v18 )
  {
    ExDeleteResourceLite(v18);
    operator delete(*((void **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v16);
}
