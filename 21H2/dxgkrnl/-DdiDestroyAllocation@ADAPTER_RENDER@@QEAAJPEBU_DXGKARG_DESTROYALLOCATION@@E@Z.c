/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C018B750
 * Callers:
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018BD40 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019DC2C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C019F020 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
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
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C00555D8 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  KIRQL CurrentIrql; // al
  __int64 v20; // r12
  struct DXGTHREAD *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  const HANDLE *v26; // rcx
  HANDLE v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // r9d
  struct DXGTHREAD *Current; // rax
  __int64 v33; // rcx
  MOCKDRIVERSTATE *v34; // rcx
  KIRQL v35; // al
  int v36; // [rsp+58h] [rbp-B0h]
  struct DXGTHREAD *DxgThread; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BackTrace; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-98h] BYREF
  char v40; // [rsp+80h] [rbp-88h]
  _DWORD v41[2]; // [rsp+88h] [rbp-80h] BYREF
  const HANDLE *pAllocationList; // [rsp+90h] [rbp-78h]
  char v43; // [rsp+98h] [rbp-70h]
  int v44; // [rsp+99h] [rbp-6Fh]
  __int16 v45; // [rsp+9Dh] [rbp-6Bh]
  char v46; // [rsp+9Fh] [rbp-69h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  __int128 v48; // [rsp+A8h] [rbp-60h]
  PVOID v49; // [rsp+B8h] [rbp-50h]
  char v50; // [rsp+C0h] [rbp-48h]
  int v51; // [rsp+C1h] [rbp-47h]
  __int16 v52; // [rsp+C5h] [rbp-43h]
  char v53; // [rsp+C7h] [rbp-41h]
  char v54[8]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-38h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  LODWORD(v39[0]) = -1;
  v39[1] = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v40 = 1;
    LODWORD(v39[0]) = 5005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5005);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v39, 5005);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = *((_QWORD *)Current + 3)) == 0 )
  {
    v13 = v12;
  }
  v14 = v13 + 152;
  v15 = 0;
  if ( !v13 )
    v14 = 0LL;
  if ( v14 && *(struct _KTHREAD **)(v14 + 8) == KeGetCurrentThread() )
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
  if ( v13 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v31 = *(_DWORD *)(v14 + 24);
        if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v31);
      }
      ExAcquirePushLockExclusiveEx(v14, 0LL);
    }
    v15 = 2;
    *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  if ( !v3 )
  {
    v18 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(v18 + 4648) )
    {
      if ( *(_DWORD *)(v18 + 288) == 1 )
      {
        v47 = 0LL;
        v41[1] = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        v48 = 0LL;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        BackTrace = 0LL;
        RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
        v33 = *((_QWORD *)this + 2);
        v41[0] = a2->NumAllocations;
        pAllocationList = a2->pAllocationList;
        v34 = *(MOCKDRIVERSTATE **)(v33 + 4640);
        v49 = BackTrace;
        v43 = 0;
        DWORD2(v48) = 1;
        v50 = 1;
        MOCKDRIVERSTATE::ValidateMockDriverState(v34, 0, (struct _MOCKDRIVERSTATE_VALIDATE_FBR *)v41);
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v20 = CurrentIrql;
  v21 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v21 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v21 = DxgThread) != 0LL)) )
  {
    v36 = *((_DWORD *)v21 + 12);
  }
  else
  {
    v36 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v54,
    *((struct DXGADAPTER **)this + 2));
  v22 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 472LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v54[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v20 != KeGetCurrentIrql() )
  {
    v35 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v20, v35);
  }
  if ( v21 )
  {
    v24 = *((int *)v21 + 12);
    if ( (_DWORD)v24 != v36 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v21 + 12), v36, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
  v25[3] = v22;
  v25[4] = a2->Flags.Value;
  v25[5] = a2->hResource;
  v25[6] = a2->NumAllocations;
  v26 = a2->pAllocationList;
  if ( v26 )
    v27 = *v26;
  else
    v27 = 0LL;
  v25[7] = v27;
  if ( (_DWORD)v22 )
  {
    WdLogSingleEntry1(2LL, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v15 == 2 )
  {
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v39);
  if ( v40 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v39[0]);
  }
  return (unsigned int)v22;
}
