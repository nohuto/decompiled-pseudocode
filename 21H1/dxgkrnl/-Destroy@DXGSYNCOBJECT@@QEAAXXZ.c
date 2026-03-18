/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01162AC
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00081FC (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0018964 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C011621C (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C011644C (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C028BB58 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C028C064 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this, __int64 a2)
{
  __int64 v3; // rdx
  signed __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v17; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v17 + 24) = 1865LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_DWORD *)this + 48) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v3 = *((unsigned int *)this + 18);
  if ( (_DWORD)v3 )
  {
    if ( *((_BYTE *)this + 279) )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 36), v3);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this, v3);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGGLOBAL *)((char *)Global + 136), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((unsigned int *)this + 18));
      if ( v18[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v3);
    }
    *((_DWORD *)this + 18) = 0;
  }
  if ( (*((_DWORD *)this + 49) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else
  {
    v4 = *((_QWORD *)this + 41);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 41, 0LL, v4) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 39) + 616LL) + 8LL) + 616LL))();
  }
  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(v4, v3);
  v5[3] = this;
  v6 = *((unsigned int *)this + 18);
  v5[4] = v6;
  CurrentProcess = PsGetCurrentProcess(v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v11, v10)) == 0LL
    || (v13 = *((_QWORD *)Current + 1)) == 0 )
  {
    v13 = v12;
  }
  v5[5] = v13;
  WdLogEvent5_WdEvent(v5);
  if ( (*((_DWORD *)this + 49) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 296), v14);
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}
