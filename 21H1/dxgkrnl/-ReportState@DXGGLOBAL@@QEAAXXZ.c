/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0266CFC
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C0264B6C (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0038248 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1C0040094 (McTemplateK0j_EtwWriteTransfer.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C015967C (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C020ABEC (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C0246B54 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C028D208 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportState(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  DXGGLOBAL *v4; // rdi
  DXGGLOBAL *v5; // rbx
  struct DXGSYNCOBJECT *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  DXGGLOBAL *v10; // rdi
  DXGGLOBAL *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  _BYTE v23[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v27; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[144]; // [rsp+70h] [rbp-90h] BYREF

  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v25, this, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v25, v2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(this + 44), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v4 = (DXGGLOBAL *)this[49];
  while ( v4 != (DXGGLOBAL *)(this + 49) && v4 )
  {
    v5 = v4;
    v6 = v4;
    v4 = *(DXGGLOBAL **)v4;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGGLOBAL *)((char *)v5 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    if ( (*((_DWORD *)v5 + 49) & 4) != 0 )
    {
      v7 = (_QWORD *)*((_QWORD *)v5 + 37);
      v8 = (_QWORD *)((char *)v6 + 296);
      while ( v7 != v8 )
      {
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v8 - 40LL), v6);
        v7 = (_QWORD *)*v7;
      }
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v5 + 296), v5);
    }
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v3);
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v3);
  if ( v25[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v25, v3);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(this + 59), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v10 = (DXGGLOBAL *)this[69];
  while ( v10 != (DXGGLOBAL *)(this + 69) && v10 )
  {
    v11 = v10;
    v10 = *(DXGGLOBAL **)v10;
    _m_prefetchw((char *)v11 + 24);
    v12 = *((_QWORD *)v11 + 3);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 3, v12 + 1, v12);
      if ( v13 == v12 )
      {
        LOBYTE(v12) = 1;
        break;
      }
    }
    if ( (_BYTE)v12 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v11, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v11);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v28, 2LL, 0) >= 0 )
      {
        v15 = *((_QWORD *)v11 + 335);
        if ( v15 )
          ADAPTER_RENDER::FlushScheduler(v15, 6, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState(v11);
        v16 = *((_QWORD *)v11 + 335);
        if ( v16 )
          ADAPTER_RENDER::FlushScheduler(v16, 7, 0xFFFFFFFF, 0);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28, v14);
    }
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v9);
  if ( DXGGLOBAL::IsVmConnectedToHost((DXGGLOBAL *)this) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0_EtwWriteTransfer(v18, &EventVGPUGuestStart, v19);
    Global = DXGGLOBAL::GetGlobal(v18, v17);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 183), &v27);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v21, &EventVGPUGuestEnd, v22, (__int64)&v27);
  }
}
