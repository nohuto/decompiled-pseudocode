/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C011221C
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010C918 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0111F08 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0018734 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1C00D4234 (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D60E0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C0112414 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C0112A70 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C028F018 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C028F524 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  struct DXGGLOBAL *Global; // rax
  signed __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v19; // rcx
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 2004LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 48) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v4 = *((unsigned int *)this + 18);
  if ( (_DWORD)v4 )
  {
    if ( *((_BYTE *)this + 279) )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 36), v4);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this, v4);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGGLOBAL *)((char *)Global + 248), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((unsigned int *)this + 18));
      if ( v20[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v4);
    }
    *((_DWORD *)this + 18) = 0;
  }
  if ( (*((_DWORD *)this + 49) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else
  {
    v6 = *((_QWORD *)this + 41);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 41, 0LL, v6) )
    {
      if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
      {
        v8 = *((_QWORD *)this + 42);
        if ( v8 )
        {
          v9 = *(void **)(v8 + 48);
          if ( v9 )
          {
            ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 39), v9, v7);
            v8 = *((_QWORD *)this + 42);
          }
          DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)v8);
          *((_QWORD *)this + 42) = 0LL;
        }
      }
      (*(void (__fastcall **)(signed __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 39) + 616LL) + 8LL) + 616LL))(v6);
    }
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v4);
  v10[3] = this;
  v11 = *((unsigned int *)this + 18);
  v10[4] = v11;
  CurrentProcess = PsGetCurrentProcess(v11, v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v17 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v16, v15)) == 0LL
    || (v19 = *((_QWORD *)Current + 1)) == 0 )
  {
    v19 = v17;
  }
  v10[5] = v19;
  WdLogEvent5_WdEvent(v10);
  if ( (*((_DWORD *)this + 49) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 296));
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}
