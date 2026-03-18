/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C030C1C8
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C0309C18 (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002A274 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0044900 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1C0054120 (McTemplateK0j_EtwWriteTransfer.c)
 *     McTemplateK0pppj_EtwWriteTransfer @ 0x1C0057C8C (McTemplateK0pppj_EtwWriteTransfer.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C0160804 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02BD52C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ @ 0x1C03098D8 (-CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1C0336EAC (-ReportProcess@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C0340DD8 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C037B830 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 */

void __fastcall DXGGLOBAL::ReportState(DXGGLOBAL *this)
{
  _QWORD *v2; // rbx
  DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  DXGGLOBAL *i; // rbx
  DXGGLOBAL *v7; // rsi
  DXGGLOBAL *v8; // rbx
  struct DXGSYNCOBJECT *v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  DXGGLOBAL *v12; // rsi
  DXGGLOBAL *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  DXGGLOBAL *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rdx
  DXGGLOBAL *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v31; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[144]; // [rsp+90h] [rbp-70h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 432, 0LL);
  v2 = (_QWORD *)*((_QWORD *)this + 52);
  v27[0] = (char *)this + 416;
  while ( 1 )
  {
    v27[1] = v2;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v27);
    if ( !Current )
      break;
    DXGPROCESS::ReportProcess(Current);
    v2 = (_QWORD *)*v2;
  }
  ExReleasePushLockSharedEx((char *)this + 432, 0LL);
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 488));
  for ( i = (DXGGLOBAL *)*((_QWORD *)this + 219); i != (DXGGLOBAL *)((char *)this + 1752); i = *(DXGGLOBAL **)i )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppj_EtwWriteTransfer(v4, &EventReportVirtualMachine, v5);
  }
  ExReleasePushLockSharedEx((char *)this + 488, 0LL);
  KeLeaveCriticalRegion();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v31, this, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v31);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (DXGGLOBAL *)((char *)this + 568), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v7 = (DXGGLOBAL *)*((_QWORD *)this + 77);
  while ( v7 != (DXGGLOBAL *)((char *)this + 616) && v7 )
  {
    v8 = v7;
    v9 = v7;
    v7 = *(DXGGLOBAL **)v7;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (DXGGLOBAL *)((char *)v8 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    if ( (*((_DWORD *)v8 + 51) & 4) != 0 )
    {
      v10 = (_QWORD *)*((_QWORD *)v8 + 37);
      v11 = (_QWORD *)((char *)v9 + 296);
      while ( v10 != v11 )
      {
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v11 - 48LL), v9);
        v10 = (_QWORD *)*v10;
      }
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v8 + 296), v8);
    }
    if ( v28[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  }
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  if ( v31.Data4[0] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v31);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (DXGGLOBAL *)((char *)this + 704), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v12 = (DXGGLOBAL *)*((_QWORD *)this + 100);
  while ( v12 != (DXGGLOBAL *)((char *)this + 800) && v12 )
  {
    v13 = v12;
    v12 = *(DXGGLOBAL **)v12;
    _m_prefetchw((char *)v13 + 24);
    v14 = *((_QWORD *)v13 + 3);
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 3, v14 + 1, v14);
      if ( v15 == v14 )
      {
        LOBYTE(v14) = 1;
        break;
      }
    }
    if ( (_BYTE)v14 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v13, 0LL);
      DXGADAPTER::ReleaseReference(v13);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v32) >= 0 )
      {
        v16 = *((_QWORD *)v13 + 350);
        if ( v16 )
          ADAPTER_RENDER::FlushScheduler(v16, 6u, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState(v13);
        v17 = *((_QWORD *)v13 + 350);
        if ( v17 )
          ADAPTER_RENDER::FlushScheduler(v17, 7u, 0xFFFFFFFF, 0);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    }
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  if ( DXGGLOBAL::IsVmConnectedToHost(this) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0_EtwWriteTransfer((__int64)v19, &EventVGPUGuestStart, v20);
    Global = DXGGLOBAL_GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 218), &v31);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0j_EtwWriteTransfer((__int64)v19, &EventVGPUGuestEnd, v20, (__int64)&v31);
  }
  DXGGLOBAL::CreatePerfDataWorkerThreadIfNeeded(v19, v18, v20, v21);
  DXGGLOBAL::CreatePerfDataWorkerThreadIfNeeded(v24, v23, v25, v26);
}
