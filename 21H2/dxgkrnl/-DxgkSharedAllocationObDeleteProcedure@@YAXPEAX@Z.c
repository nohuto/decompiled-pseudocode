/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DCBD0
 * Callers:
 *     DxgkWslShareObjects @ 0x1C031E7F0 (DxgkWslShareObjects.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0376B34 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  struct DXGADAPTER *v5; // rdx
  struct DXGADAPTER *const v6; // rdx
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  void **v9; // rax
  DXGKEYEDMUTEX *v10; // rsi
  struct DXGSYNCOBJECT *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v15; // rax
  int v16; // [rsp+20h] [rbp-79h] BYREF
  __int64 v17; // [rsp+28h] [rbp-71h]
  char v18; // [rsp+30h] [rbp-69h]
  _BYTE v19[8]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v20[64]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v21[16]; // [rsp+88h] [rbp-11h] BYREF
  DXGADAPTER *v22; // [rsp+98h] [rbp-1h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 16000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 16000);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 16000);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(struct DXGADAPTER **)(*(_QWORD *)(v4 + 80) + 16LL);
  v19[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v20, v5);
  COREACCESS::COREACCESS((COREACCESS *)v21, v6);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v22) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 64));
  v7 = *(_QWORD *)(v4 + 80);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 256, 0LL);
  *(_QWORD *)(v7 + 264) = KeGetCurrentThread();
  v8 = *(_QWORD **)a1;
  if ( *(void **)(*(_QWORD *)a1 + 8LL) != a1 || (v9 = (void **)*((_QWORD *)a1 + 1), *v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  *(_QWORD *)(v7 + 264) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 256, 0LL);
  KeLeaveCriticalRegion();
  v10 = (DXGKEYEDMUTEX *)*((_QWORD *)a1 + 3);
  v11 = (struct DXGSYNCOBJECT *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
  {
    Global = DXGGLOBAL_GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 218),
      *((_DWORD *)a1 + 10));
    *((_DWORD *)a1 + 10) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 68), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v4, 0LL, 0);
  *((_QWORD *)a1 + 2) = 0LL;
  if ( v10 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v10);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  if ( v11 )
  {
    v15 = (PERESOURCE *)DXGGLOBAL_GetGlobal();
    DXGGLOBAL::DestroySyncObject(v15, v11, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  }
}
