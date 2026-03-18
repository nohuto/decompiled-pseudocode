/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C019A330
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C000ECF4 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004BA80 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C019A254 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C019A4D4 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1C02C7F7C (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C033F3E0 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C033F9B4 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  signed __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdi
  __int64 v11; // r9
  struct DXGGLOBAL *Global; // rax
  unsigned int v13; // edx
  struct _KTHREAD **v14; // rcx
  struct DXGTHREAD *Current; // rax
  void *v16; // rdx
  DXGFASTMUTEX *v17; // [rsp+50h] [rbp-18h] BYREF
  char v18; // [rsp+58h] [rbp-10h]

  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 2027LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 2027LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 50) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v5 = *((unsigned int *)this + 20);
  if ( (_DWORD)v5 )
  {
    if ( (*((_DWORD *)this + 71) & 0x10) != 0 )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 36), v5);
    }
    else
    {
      Global = DXGGLOBAL_GetGlobal();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v17, (struct DXGGLOBAL *)((char *)Global + 288), 0);
      if ( v18 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v17, 0LL, 0LL);
      DXGFASTMUTEX::Acquire(v17);
      v13 = *((_DWORD *)this + 20);
      v14 = (struct _KTHREAD **)*((_QWORD *)this + 2);
      v18 = 1;
      DXGGLOBAL::FreeHandle(v14, v13);
      if ( v18 )
      {
        v18 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v17);
      }
    }
    *((_DWORD *)this + 20) = 0;
  }
  if ( (*((_DWORD *)this + 51) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else
  {
    v6 = *((_QWORD *)this + 41);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 41, 0LL, v6) )
    {
      v7 = *((_QWORD *)this + 42);
      if ( v7 )
      {
        v16 = *(void **)(v7 + 32);
        if ( v16 )
        {
          ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 39), v16);
          v7 = *((_QWORD *)this + 42);
        }
        DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v7);
        *((_QWORD *)this + 42) = 0LL;
      }
      (*(void (__fastcall **)(signed __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 39) + 624LL) + 8LL) + 616LL))(v6);
    }
  }
  CurrentProcess = PsGetCurrentProcess(this, v5, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = *((_QWORD *)Current + 3)) == 0 )
  {
    v11 = v10;
  }
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), v11);
  if ( (*((_DWORD *)this + 51) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 296));
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}
