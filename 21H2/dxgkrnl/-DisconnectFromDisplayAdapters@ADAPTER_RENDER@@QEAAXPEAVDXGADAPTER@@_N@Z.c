/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02C37B8
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C021BA30 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D4418 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02C4BD8 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(ADAPTER_RENDER *this, struct DXGADAPTER *a2, char a3)
{
  unsigned int v3; // esi
  struct _LUID *v7; // rdx
  ADAPTER_DISPLAY *v8; // rax
  unsigned int i; // edi
  PVOID v10; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  PVOID Context[2]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-C8h] BYREF

  v3 = -1;
  if ( a2 && *(struct _KTHREAD **)(*((_QWORD *)a2 + 349) + 176LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4796LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayDevice == NULL) || pDisplayDevice->GetDisplayCore()->GetChangePairedAdapterLock()->IsOwner()",
      4796LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((struct _KTHREAD **)this + 4) != KeGetCurrentThread()
    || *((struct _KTHREAD **)this + 7) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4797LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner() && m_DeviceCreationLockCdd.IsExclusiveOwner()",
      4797LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, *((struct DXGADAPTER *const *)this + 2), a2);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v13) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL, a2);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL, a2);
    if ( a2 )
      *(_BYTE *)(*((_QWORD *)a2 + 349) + 288LL) = 1;
  }
  if ( a3 )
  {
    v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 349);
    for ( i = 0; i < *((_DWORD *)v8 + 24); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v8, i) )
        break;
      v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 349);
    }
    if ( i < *(_DWORD *)(*((_QWORD *)a2 + 349) + 96LL) )
    {
      Context[0] = 0LL;
      DXGADAPTER::IsAdapterSessionized(a2, v7, 0LL, (unsigned __int64 *)Context);
      v10 = Context[0];
      if ( Context[0] == (PVOID)0x200000000LL )
        v10 = (PVOID)*(unsigned int *)(*((_QWORD *)DXGGLOBAL_GetGlobal() + 122) + 144LL);
      if ( v10 != (PVOID)0x100000000LL )
        v3 = (unsigned int)v10;
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)a2 + 27));
      if ( WorkItem )
        IoQueueWorkItemEx(WorkItem, DisconnectFromDisplayAdaptersWorkItem, DelayedWorkQueue, (PVOID)v3);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
}
