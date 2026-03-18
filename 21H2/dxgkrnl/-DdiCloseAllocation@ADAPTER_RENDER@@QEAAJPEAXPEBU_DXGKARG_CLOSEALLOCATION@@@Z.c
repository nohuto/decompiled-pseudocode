/*
 * XREFs of ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C019E3E4
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019DC2C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D5C7C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCloseAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_CLOSEALLOCATION *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // r13d
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  KIRQL CurrentIrql; // al
  __int64 v18; // r12
  struct DXGTHREAD *v19; // rdi
  int v20; // esi
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  const struct _DXGKARG_CLOSEALLOCATION *v25; // rdx
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // r9d
  struct DXGTHREAD *Current; // rax
  KIRQL v32; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-49h] BYREF
  void *v34; // [rsp+58h] [rbp-41h]
  int v35; // [rsp+60h] [rbp-39h] BYREF
  __int64 v36; // [rsp+68h] [rbp-31h]
  char v37; // [rsp+70h] [rbp-29h]
  const struct _DXGKARG_CLOSEALLOCATION *v38; // [rsp+78h] [rbp-21h]
  char v39[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v35 = -1;
  v36 = 0LL;
  v38 = a3;
  v34 = a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 5029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5029);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 5029);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v12 = *((_QWORD *)Current + 3)) == 0 )
  {
    v12 = v11;
  }
  v13 = 0;
  v14 = (v12 + 152) & -(__int64)(v12 != 0);
  if ( v14 && *(struct _KTHREAD **)(((v12 + 152) & -(__int64)(v12 != 0)) + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v12 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v12 + 152) & -(__int64)(v12 != 0), 0LL) )
    {
      if ( bTracingEnabled )
      {
        v30 = *(_DWORD *)(((v12 + 152) & -(__int64)(v12 != 0)) + 0x18);
        if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v30);
      }
      ExAcquirePushLockExclusiveEx((v12 + 152) & -(__int64)(v12 != 0), 0LL);
    }
    v13 = 2;
    *(_QWORD *)(((v12 + 152) & -(__int64)(v12 != 0)) + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v18 = CurrentIrql;
  v19 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v19 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v19 = DxgThread) != 0LL)) )
  {
    v20 = *((_DWORD *)v19 + 12);
  }
  else
  {
    v20 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v39,
    *((struct DXGADAPTER **)this + 2));
  v21 = (*(int (__fastcall **)(void *, const struct _DXGKARG_CLOSEALLOCATION *))(*((_QWORD *)this + 2) + 720LL))(
          v34,
          a3);
  if ( v39[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v18 != KeGetCurrentIrql() )
  {
    v32 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v18, v32);
  }
  if ( v19 )
  {
    v23 = *((int *)v19 + 12);
    if ( (_DWORD)v23 != v20 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v19 + 12), v20, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
  v25 = v38;
  v26 = v34;
  v24[3] = v21;
  v24[4] = v26;
  v24[5] = v25->NumAllocations;
  v24[6] = *v25->pOpenHandleList;
  if ( (_DWORD)v21 )
  {
    WdLogSingleEntry1(2LL, v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v21,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v13 == 2 )
  {
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v35);
  return (unsigned int)v21;
}
