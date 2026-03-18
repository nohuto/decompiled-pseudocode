/*
 * XREFs of ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C01CB520
 * Callers:
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C01CB490 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0367F10 (-VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z @ 0x1C0374404 (-VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z.c)
 */

__int64 __fastcall DxgkpCddSyncGPUAccess(struct DXGPROCESS *a1, unsigned int a2, int a3)
{
  bool v4; // zf
  struct _KTHREAD **v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // edx
  struct _EX_RUNDOWN_REF **v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // rbx
  struct DXGTHREAD *DxgThread; // rax
  __int64 v16; // r15
  struct _KEVENT *v17; // rdi
  char v18; // r12
  __int64 v19; // rdi
  struct DXGADAPTER *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r14d
  unsigned int v24; // r14d
  struct DXGADAPTER *v25; // rcx
  struct DXGADAPTER *v26; // rcx
  struct DXGTHREAD *v27; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r9d
  struct _KTHREAD **v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  struct DXGTHREAD *v37; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGTHREAD *v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  struct _KTHREAD **v41; // [rsp+80h] [rbp-88h]
  int v42; // [rsp+88h] [rbp-80h]
  char v43; // [rsp+98h] [rbp-70h] BYREF
  char v44; // [rsp+99h] [rbp-6Fh]
  char v45[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-60h]
  struct DXGADAPTER *v47; // [rsp+B0h] [rbp-58h]
  char v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  char v50[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v52; // [rsp+F0h] [rbp-18h]
  char v53; // [rsp+F8h] [rbp-10h]
  char *v54; // [rsp+100h] [rbp-8h]

  v4 = (struct DXGPROCESS *)((char *)a1 + 248) == 0LL;
  v5 = (struct _KTHREAD **)((char *)a1 + 248);
  LODWORD(v37) = a3;
  v41 = v5;
  v6 = a2;
  if ( !v4 && v5[1] == KeGetCurrentThread() )
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
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v41, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v31 = *((_DWORD *)v41 + 6);
      if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (const EVENT_DESCRIPTOR *)"g", v8, v31);
    }
    ExAcquirePushLockSharedEx(v41, 0LL);
  }
  v42 = 1;
  v9 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)a1 + 74) )
  {
    v10 = *((_QWORD *)a1 + 35);
    v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
    if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0 )
    {
      v12 = (struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
      if ( (v11 & 0x1F) == 5 )
      {
        v13 = *v12;
        goto LABEL_13;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v13 = 0LL;
LABEL_13:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v13);
  v14 = v39;
  v39 = 0LL;
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v38 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v38) >= 0 )
    {
      DxgThread = v38;
      if ( v38 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v38 = DxgThread) != 0LL) )
      {
        if ( *((_DWORD *)DxgThread + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
      }
    }
  }
  if ( !v14 )
  {
    v24 = -1073741811;
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v40);
    goto LABEL_63;
  }
  v16 = *(_QWORD *)(v14 + 8);
  if ( v42 == 1 )
  {
    v42 = 0;
    ExReleasePushLockSharedEx(v41, 0LL);
LABEL_21:
    KeLeaveCriticalRegion();
    goto LABEL_22;
  }
  if ( v42 == 2 )
  {
    v32 = v41;
    v42 = 0;
    v41[1] = 0LL;
    ExReleasePushLockExclusiveEx(v32, 0LL);
    goto LABEL_21;
  }
LABEL_22:
  v17 = *(struct _KEVENT **)(v16 + 16);
  v18 = 1;
  if ( !KeReadStateEvent(v17 + 5) )
    KeWaitForSingleObject(&v17[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (const EVENT_DESCRIPTOR *)"g", v30, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
  }
  v19 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v19 + 136, 0LL);
  v44 = 0;
  v48 = 0;
  v49 = 0LL;
  v47 = (struct DXGADAPTER *)v19;
  if ( v19 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
    v46 = -1LL;
    v52 = (struct DXGADAPTER *)v19;
    v53 = 0;
    v54 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
    v51 = -1LL;
    if ( v53 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v50, 0LL, 0LL);
  }
  else
  {
    v52 = 0LL;
    v53 = 0;
    v54 = 0LL;
  }
  v20 = v52;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v52 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (const EVENT_DESCRIPTOR *)"g", v22, 72);
      KeWaitForSingleObject((char *)v52 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v52, 0LL);
    v20 = v52;
  }
  v54 = 0LL;
  v53 = 1;
  if ( *((_DWORD *)v20 + 50) != 1 )
    goto LABEL_90;
  if ( v47 != v52 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v45, 0LL);
    if ( *((_DWORD *)v47 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v45);
LABEL_90:
      COREACCESS::Release((COREACCESS *)v50);
      v33 = (__int64)a1;
      v34 = v19;
      v24 = -1073741130;
      v35 = 4LL;
      v36 = -1073741130LL;
      goto LABEL_91;
    }
  }
  v44 = 1;
  if ( !*(_QWORD *)(v19 + 2800) )
  {
    WdLogSingleEntry1(1LL, 2125LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      2125LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_BYTE *)(v19 + 209) )
  {
    v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddSyncGpuAccess(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v19 + 4344),
            a1,
            *(_DWORD *)(v14 + 20),
            (_DWORD)v37 != 0);
    goto LABEL_46;
  }
  if ( *(_QWORD *)(v14 + 24) )
  {
    v23 = 0;
    if ( (_DWORD)v37 )
    {
      v23 = 1;
      *(_DWORD *)(*(_QWORD *)(v14 + 48) + 4LL) &= ~0x400u;
    }
    if ( v47 != v52 )
      COREACCESS::Release((COREACCESS *)v45);
    if ( !v53 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v50, 0LL, 0LL);
    v53 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 23) )
      DXGADAPTER::ReleaseCoreResource(v52, v54);
    v54 = 0LL;
    v44 = 0;
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
    KeLeaveCriticalRegion();
    v18 = 0;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 2800)
                                                                                             + 648LL)
                                                                                 + 8LL)
                                                                     + 624LL))(
            *(_QWORD *)(*(_QWORD *)(v19 + 2800) + 656LL),
            *(_QWORD *)(v14 + 24),
            v6 & 0x3F,
            v23);
    goto LABEL_46;
  }
  v24 = -1073741811;
  v36 = v6;
  v33 = -1073741811LL;
  v34 = v14;
  v35 = 3LL;
LABEL_91:
  WdLogSingleEntry3(v35, v36, v34, v33);
LABEL_46:
  if ( v44 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v43);
  v25 = v52;
  if ( v52 )
  {
    if ( v53 )
    {
      COREACCESS::Release((COREACCESS *)v50);
      v25 = v52;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v25 + 2), v25);
  }
  v26 = v47;
  if ( v47 )
  {
    if ( v48 )
    {
      COREACCESS::Release((COREACCESS *)v45);
      v26 = v47;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v26);
  }
  ExReleasePushLockSharedEx(v19 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v19 + 16), (struct DXGADAPTER *)v19);
  if ( v18 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
    KeLeaveCriticalRegion();
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v14 + 88));
LABEL_63:
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v37 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v37) >= 0 )
    {
      v27 = v37;
      if ( v37 || (v27 = DxgkThreadObjectCreateDxgThread(), (v37 = v27) != 0LL) )
      {
        if ( *((_DWORD *)v27 + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v27 + 12), 0LL, 0LL);
      }
    }
  }
  return v24;
}
