/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C016F250
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C000A820 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C00766F0 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03811D0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0059A28 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C037CCCC (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rdi
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // r14
  __int64 v18; // rdx
  int v19; // r13d
  struct _KEVENT *v20; // rbx
  volatile signed __int64 *v21; // rcx
  volatile signed __int64 *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // eax
  int v37; // ebx
  __int64 v38; // rbx
  int v39; // eax
  int v40; // eax
  struct DXGADAPTER *v41; // rcx
  struct DXGADAPTER *v42; // rcx
  int v44; // r9d
  struct DXGTHREAD *Current; // rax
  int v46; // r9d
  int DxgAdapterSyncObject; // r15d
  struct _KEVENT *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // eax
  __int64 v52; // rbx
  const wchar_t *v53; // r9
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r9
  char *v58; // rdx
  __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h]
  char v61; // [rsp+68h] [rbp-98h]
  unsigned int *v62; // [rsp+70h] [rbp-90h] BYREF
  struct DXGGLOBAL *v63; // [rsp+78h] [rbp-88h]
  char v64; // [rsp+80h] [rbp-80h]
  unsigned __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTERSYNCOBJECT *v67; // [rsp+98h] [rbp-68h] BYREF
  char v68[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-58h]
  char v70; // [rsp+B0h] [rbp-50h]
  _QWORD v71[4]; // [rsp+B8h] [rbp-48h] BYREF
  char v72[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v73; // [rsp+E0h] [rbp-20h]
  struct DXGADAPTER *v74; // [rsp+E8h] [rbp-18h]
  char v75; // [rsp+F0h] [rbp-10h]
  char *v76; // [rsp+F8h] [rbp-8h]
  char v77[8]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v78; // [rsp+120h] [rbp+20h]
  struct DXGADAPTER *v79; // [rsp+128h] [rbp+28h]
  char v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  char v83; // [rsp+160h] [rbp+60h]
  char v84[8]; // [rsp+170h] [rbp+70h] BYREF
  char v85[64]; // [rsp+178h] [rbp+78h] BYREF
  char v86[88]; // [rsp+1B8h] [rbp+B8h] BYREF

  v4 = a3;
  v62 = a1;
  v65 = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v8 = *((_QWORD *)Current + 3), (v59 = v8) == 0) )
  {
    v8 = v7;
    v59 = v7;
  }
  if ( v8 != -248 && *(struct _KTHREAD **)(v8 + 256) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v46 = *(_DWORD *)(v8 + 272);
      if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (const EVENT_DESCRIPTOR *)"g", v10, v46);
    }
    ExAcquirePushLockSharedEx(v8 + 248, 0LL);
  }
  v11 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *(_DWORD *)(v8 + 296) )
    goto LABEL_17;
  v12 = *(_QWORD *)(v8 + 280);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( ((v4 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60) || (v13 & 0x2000) != 0 || (v13 & 0x1F) == 0 )
    goto LABEL_17;
  if ( (v13 & 0x1F) != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_17:
    ExReleasePushLockSharedEx(v8 + 248, 0LL);
    KeLeaveCriticalRegion();
    DxgAdapterSyncObject = -1073741811;
    WdLogSingleEntry3(2LL, v59, 0LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      v59,
      0LL,
      -1073741811LL,
      0LL,
      0LL);
    return (unsigned int)DxgAdapterSyncObject;
  }
  v14 = *(_QWORD *)(v12 + 16LL * (unsigned int)v11);
  if ( !v14 )
    goto LABEL_17;
  _m_prefetchw((const void *)(v14 + 32));
  v15 = *(_QWORD *)(v14 + 32);
  if ( !v15 )
    goto LABEL_17;
  while ( 1 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 32), v15 + 1, v15);
    if ( v16 == v15 )
      break;
    if ( !v15 )
      goto LABEL_17;
  }
  ExReleasePushLockSharedEx(v8 + 248, 0LL);
  KeLeaveCriticalRegion();
  v17 = *(_QWORD *)(v14 + 16);
  v18 = v17;
  v19 = 0;
  if ( v17 )
  {
    v20 = *(struct _KEVENT **)(v17 + 16);
    if ( *(_DWORD *)(v17 + 432) == 2 )
    {
      if ( KeReadStateEvent(v20 + 5) )
        goto LABEL_21;
      v48 = v20 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v20 + 4) )
      {
LABEL_21:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v49, (const EVENT_DESCRIPTOR *)"g", v50, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
        }
        v18 = *(_QWORD *)(v14 + 16);
        v19 = 1;
        goto LABEL_23;
      }
      v48 = v20 + 4;
    }
    KeWaitForSingleObject(v48, Executive, 0, 0, 0LL);
    goto LABEL_21;
  }
LABEL_23:
  v21 = *(volatile signed __int64 **)(*(_QWORD *)(v18 + 16) + 16LL);
  v74 = (struct DXGADAPTER *)v21;
  v75 = 0;
  v76 = 0LL;
  if ( v21 )
  {
    _InterlockedIncrement64(v21 + 3);
    v73 = -1LL;
  }
  v22 = *(volatile signed __int64 **)(*(_QWORD *)(v18 + 16) + 16LL);
  v79 = (struct DXGADAPTER *)v22;
  v80 = 0;
  v81 = 0LL;
  if ( v22 )
  {
    _InterlockedIncrement64(v22 + 3);
    v78 = -1LL;
  }
  v82 = v18;
  v83 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v74 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v74 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (const EVENT_DESCRIPTOR *)"g", v24, 72);
      KeWaitForSingleObject((char *)v74 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v74, 0LL);
  }
  v76 = 0LL;
  v75 = 1;
  if ( *(_DWORD *)(v82 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v72);
    if ( v83 )
      COREACCESS::Release((COREACCESS *)v77);
    DxgAdapterSyncObject = -1073741130;
    goto LABEL_72;
  }
  Global = DXGGLOBAL_GetGlobal();
  v63 = Global;
  v64 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2725LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
  {
    WdLogSingleEntry1(1LL, 2730LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v26 = v63;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v26 + 79), 1u);
  v64 = 1;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 168)) )
  {
    WdLogSingleEntry1(1LL, 1383LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgContext->GetRenderCore()->IsCoreResourceSharedOwner()",
      1383LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*(_DWORD *)(v8 + 424) & 0x180) != 0 )
  {
    v28 = (__int64)v62;
LABEL_40:
    v61 = 0;
    v60 = v28 + 32;
    if ( v28 == -32 )
    {
      WdLogSingleEntry1(1LL, 573LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _KTHREAD **)(v60 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 580LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
    }
    v29 = v60;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v29 + 24) == KeGetCurrentThread() )
    {
      v51 = *(_DWORD *)(v29 + 32);
      if ( v51 <= 0 )
      {
        WdLogSingleEntry1(1LL, 472LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
        v51 = *(_DWORD *)(v29 + 32);
      }
      v32 = v51 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29 + 8, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v44 = *(_DWORD *)(v29 + 36);
          if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v30, (const EVENT_DESCRIPTOR *)"g", v31, v44);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v29 + 16));
        ExAcquirePushLockExclusiveEx(v29 + 8, 0LL);
      }
      if ( *(_QWORD *)(v29 + 24) )
      {
        WdLogSingleEntry1(1LL, 496LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(v29 + 32) )
      {
        WdLogSingleEntry1(1LL, 497LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_QWORD *)(v29 + 24) = KeGetCurrentThread();
      v32 = 1;
    }
    *(_DWORD *)(v29 + 32) = v32;
    v61 = 1;
    v33 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
    if ( (*(_DWORD *)(v28 + 204) & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                               (DXGSYNCOBJECTCA *)v28,
                               *(struct ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 16LL),
                               &v67);
      if ( DxgAdapterSyncObject >= 0 )
        goto LABEL_54;
    }
    else
    {
      if ( !v33 || (v34 = *(_QWORD *)(v28 + 312), v34 == v33) )
      {
LABEL_54:
        if ( (*(_DWORD *)(v28 + 204) & 4) != 0 )
          v35 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                              (DXGSYNCOBJECTCA *)v28,
                              *(struct ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 16LL))
                + 4);
        else
          v35 = *(_QWORD *)(v28 + 328);
        v66 = v35;
        if ( v35 )
        {
          if ( (*(_DWORD *)(v14 + 404) & 0x10) != 0 )
          {
            v62 = *(unsigned int **)(v14 + 288);
            v36 = (*(__int64 (__fastcall **)(__int64, unsigned int **, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 624LL) + 8LL) + 648LL))(
                    1LL,
                    &v62,
                    1LL,
                    &v66,
                    0,
                    &v65);
          }
          else
          {
            v59 = *(_QWORD *)(v14 + 256);
            v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 624LL) + 8LL) + 640LL))(
                    0LL,
                    0LL,
                    1LL,
                    &v59,
                    1,
                    &v66,
                    0,
                    &v65);
          }
          v37 = v36;
          if ( v36 < 0 )
          {
            WdLogSingleEntry1(1LL, 1476LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(ntStatus)", 1476LL, 0LL, 0LL, 0LL, 0LL);
          }
          DxgAdapterSyncObject = v37;
          goto LABEL_62;
        }
        WdLogSingleEntry1(2LL, v28);
        v54 = 0LL;
        v53 = L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.";
        v52 = 0LL;
        DxgAdapterSyncObject = -1073741811;
LABEL_129:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v53, v28, v54, v52, 0LL, 0LL);
LABEL_62:
        if ( v61 )
        {
          v38 = v60;
          v61 = 0;
          if ( *(struct _KTHREAD **)(v60 + 24) != KeGetCurrentThread() )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v60, 0LL, 0LL);
          v39 = *(_DWORD *)(v38 + 32);
          if ( v39 <= 0 )
          {
            WdLogSingleEntry1(1LL, 516LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
            v39 = *(_DWORD *)(v38 + 32);
          }
          v40 = v39 - 1;
          *(_DWORD *)(v38 + 32) = v40;
          if ( !v40 )
          {
            *(_QWORD *)(v38 + 24) = 0LL;
            ExReleasePushLockExclusiveEx(v38 + 8, 0LL);
          }
          KeLeaveCriticalRegion();
        }
        goto LABEL_70;
      }
      DxgAdapterSyncObject = -1073741811;
      WdLogSingleEntry4(2LL, v28, v34, *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
        v28,
        *(_QWORD *)(v28 + 312),
        v33,
        -1073741811LL,
        0LL);
    }
    v28 = v59;
    v52 = DxgAdapterSyncObject;
    WdLogSingleEntry3(2LL, v59, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL), DxgAdapterSyncObject);
    v53 = L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x";
    v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL);
    goto LABEL_129;
  }
  v28 = *(_QWORD *)v62;
  if ( (*(_DWORD *)(*(_QWORD *)v62 + 284LL) & 2) == 0 )
    goto LABEL_40;
  DxgAdapterSyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL)
                                                        + 4344LL),
                           (struct DXGPROCESS *)v8,
                           (struct DXGCONTEXT *)v14,
                           v62[2],
                           v65);
LABEL_70:
  if ( v64 )
  {
    v64 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v63 + 79));
    KeLeaveCriticalRegion();
  }
LABEL_72:
  v41 = v79;
  if ( v79 )
  {
    if ( v80 )
    {
      COREACCESS::Release((COREACCESS *)v77);
      v41 = v79;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v41 + 2), v41);
  }
  v42 = v74;
  if ( v74 )
  {
    if ( v75 )
    {
      v75 = 0;
      v42 = v74;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v74 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v74, v76);
        v42 = v74;
      }
      v76 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v42 + 2), v42);
  }
  if ( v17 && v19 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v17 + 136));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v55 = *(_QWORD *)(v14 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v71,
      (struct DXGDEVICE *)v55);
    v56 = *(_QWORD *)(v14 + 16);
    v70 = 0;
    v69 = *(_QWORD *)(*(_QWORD *)(v56 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, v55, 2, v57, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v84, v58);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v55, (struct DXGCONTEXT *)v14, (struct COREDEVICEACCESS *)v84);
    COREACCESS::~COREACCESS((COREACCESS *)v86);
    COREACCESS::~COREACCESS((COREACCESS *)v85);
    if ( v70 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    if ( v71[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v55 + 16), (struct DXGDEVICE *)v55);
  }
  return (unsigned int)DxgAdapterSyncObject;
}
