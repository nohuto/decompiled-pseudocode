/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E7990
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C00026E0 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C00638A0 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRefCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8DE0 (-VmBusSignalFenceNtSharedByRefCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E080 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0048298 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4130 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBEC0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020BD94 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C024AC70 (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028F750 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  struct _KEVENT *v24; // rbx
  volatile signed __int64 *v25; // rcx
  volatile signed __int64 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int *v38; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // ebx
  int DxgAdapterSyncObject; // r12d
  DXGFASTMUTEX *v49; // rbx
  int v50; // eax
  int v51; // eax
  struct DXGADAPTER *v52; // rcx
  struct DXGADAPTER *v53; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v56; // rax
  int v57; // r9d
  __int64 v58; // rax
  _QWORD *v59; // rax
  struct _KEVENT *v60; // rcx
  __int64 v61; // rcx
  unsigned __int8 v62; // bl
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // r9
  char *v81; // rdx
  int v82; // [rsp+50h] [rbp-B0h]
  DXGFASTMUTEX *v83; // [rsp+58h] [rbp-A8h] BYREF
  char v84; // [rsp+60h] [rbp-A0h]
  PERESOURCE *v85; // [rsp+68h] [rbp-98h] BYREF
  char v86; // [rsp+70h] [rbp-90h]
  unsigned __int64 v87[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v88; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  __int64 v90; // [rsp+98h] [rbp-68h] BYREF
  char v91[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-58h]
  char v93; // [rsp+B0h] [rbp-50h]
  _QWORD v94[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGADAPTERSYNCOBJECT *v95; // [rsp+C8h] [rbp-38h] BYREF
  char v96[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-20h]
  struct DXGADAPTER *v98; // [rsp+E8h] [rbp-18h]
  char v99; // [rsp+F0h] [rbp-10h]
  char *v100; // [rsp+F8h] [rbp-8h]
  char v101[8]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v102; // [rsp+120h] [rbp+20h]
  struct DXGADAPTER *v103; // [rsp+128h] [rbp+28h]
  char v104; // [rsp+130h] [rbp+30h]
  __int64 v105; // [rsp+138h] [rbp+38h]
  __int64 v106; // [rsp+158h] [rbp+58h]
  char v107; // [rsp+160h] [rbp+60h]
  char v108[8]; // [rsp+170h] [rbp+70h] BYREF
  char v109[64]; // [rsp+178h] [rbp+78h] BYREF
  char v110[88]; // [rsp+1B8h] [rbp+B8h] BYREF

  v87[0] = a2;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v10 = *((_QWORD *)Current + 1)) == 0 )
  {
    v10 = v9;
  }
  if ( v10 != -208 && *(struct _KTHREAD **)(v10 + 216) == KeGetCurrentThread() )
  {
    v56 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v56 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v56);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v57 = *(_DWORD *)(v10 + 232);
      if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v57);
    }
    ExAcquirePushLockSharedEx(v10 + 208, 0LL);
  }
  v13 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *(_DWORD *)(v10 + 256) )
    goto LABEL_17;
  v14 = *(_QWORD *)(v10 + 240);
  v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60) || (v15 & 0x2000) != 0 || (v15 & 0x1F) == 0 )
    goto LABEL_17;
  v16 = v15 & 0x1F;
  if ( (_BYTE)v16 != 7 )
  {
    v58 = WdLogNewEntry5_WdError(v16, 2LL * (unsigned int)v13);
    *(_QWORD *)(v58 + 24) = 267LL;
    WdLogEvent5_WdError(v58);
LABEL_17:
    v17 = 0LL;
    goto LABEL_18;
  }
  v17 = *(_QWORD *)(v14 + 16LL * (unsigned int)v13);
  if ( !v17 )
    goto LABEL_18;
  _m_prefetchw((const void *)(v17 + 32));
  v18 = *(_QWORD *)(v17 + 32);
  if ( !v18 )
    goto LABEL_17;
  while ( 1 )
  {
    v19 = v18;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 32), v18 + 1, v18);
    if ( v19 == v18 )
      break;
    if ( !v18 )
      goto LABEL_17;
  }
LABEL_18:
  ExReleasePushLockSharedEx(v10 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v17 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    DxgAdapterSyncObject = -1073741811;
    v59[3] = v10;
    v59[4] = 0LL;
    v59[5] = -1073741811LL;
    WdLogEvent5_WdError(v59);
    return (unsigned int)DxgAdapterSyncObject;
  }
  v22 = *(_QWORD *)(v17 + 16);
  v82 = 0;
  v23 = v22;
  if ( v22 )
  {
    v24 = *(struct _KEVENT **)(v22 + 16);
    if ( *(_DWORD *)(v22 + 432) == 2 )
    {
      if ( KeReadStateEvent(v24 + 5) )
        goto LABEL_22;
      v60 = v24 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v24 + 4) )
      {
LABEL_22:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 104LL));
          v62 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v61, &EventBlockThread, v63, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 1u);
          if ( v62 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 104LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v23 = *(_QWORD *)(v17 + 16);
        v82 = 1;
        goto LABEL_24;
      }
      v60 = v24 + 4;
    }
    KeWaitForSingleObject(v60, Executive, 0, 0, 0LL);
    goto LABEL_22;
  }
LABEL_24:
  v25 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v99 = 0;
  v100 = 0LL;
  v98 = (struct DXGADAPTER *)v25;
  if ( v25 )
  {
    _InterlockedIncrement64(v25 + 3);
    v97 = -1LL;
  }
  v26 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v103 = (struct DXGADAPTER *)v26;
  v104 = 0;
  v105 = 0LL;
  if ( v26 )
  {
    _InterlockedIncrement64(v26 + 3);
    v102 = -1LL;
  }
  v106 = v23;
  v107 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v98 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v98 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventBlockThread, v28, 72);
      KeWaitForSingleObject((char *)v98 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v98, 0LL);
  }
  v100 = 0LL;
  v99 = 1;
  v29 = *(unsigned int *)(v106 + 576);
  if ( (_DWORD)v29 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v96);
    if ( v107 )
      COREACCESS::Release((COREACCESS *)v101);
    DxgAdapterSyncObject = -1073741130;
    goto LABEL_70;
  }
  Global = DXGGLOBAL::GetGlobal(v29, v23);
  v85 = (PERESOURCE *)Global;
  v86 = 0;
  if ( !Global )
  {
    v64 = WdLogNewEntry5_WdAssertion(v32, v31);
    *(_QWORD *)(v64 + 24) = 2423LL;
    WdLogEvent5_WdAssertion(v64);
    Global = (struct DXGGLOBAL *)v85;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v65 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v65 + 24) = 2428LL;
    WdLogEvent5_WdAssertion(v65);
  }
  if ( v86 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
    v66[5] = &v85;
    v66[3] = 275LL;
    v66[4] = 4LL;
    v66[6] = 0LL;
    v66[7] = 0LL;
    WdLogEvent5_WdCriticalError(v66);
  }
  v35 = v85;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v35[65], 1u);
  v86 = 1;
  v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v37 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v37 + 168)) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v67 + 24) = 1392LL;
    WdLogEvent5_WdAssertion(v67);
  }
  if ( (*(_BYTE *)(v10 + 347) & 0x30) != 0 )
  {
    v38 = a1;
LABEL_43:
    v84 = 0;
    v83 = (DXGFASTMUTEX *)(v38 + 8);
    if ( v38 == (unsigned int *)-32LL )
    {
      v68 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v68 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v68);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v83 + 2) == CurrentThread )
    {
      v69 = WdLogNewEntry5_WdAssertion(CurrentThread, v36);
      *(_QWORD *)(v69 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v69);
    }
    if ( v84 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v36);
      v70[5] = &v83;
      v70[3] = 275LL;
      v70[4] = 4LL;
      v70[6] = 0LL;
      v70[7] = 0LL;
      WdLogEvent5_WdCriticalError(v70);
    }
    DXGFASTMUTEX::Acquire(v83);
    v84 = 1;
    v42 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
    if ( (v38[49] & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                               (DXGSYNCOBJECTCA *)v38,
                               *(struct ADAPTER_RENDER **)(*(_QWORD *)(v17 + 16) + 16LL),
                               &v95);
      if ( DxgAdapterSyncObject >= 0 )
      {
LABEL_52:
        if ( (v38[49] & 4) != 0 )
          v43 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                              (DXGSYNCOBJECTCA *)v38,
                              *(struct ADAPTER_RENDER **)(*(_QWORD *)(v17 + 16) + 16LL))
                + 4);
        else
          v43 = *((_QWORD *)v38 + 41);
        v88 = v43;
        if ( v43 )
        {
          if ( (*(_DWORD *)(v17 + 420) & 0x10) != 0 )
          {
            v89 = *(_QWORD *)(v17 + 304);
            v44 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 616LL) + 8LL) + 648LL))(
                    1LL,
                    &v89,
                    1LL,
                    &v88,
                    0,
                    v87);
          }
          else
          {
            v90 = *(_QWORD *)(v17 + 272);
            v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 616LL) + 8LL) + 640LL))(
                    0LL,
                    0LL,
                    1LL,
                    &v90,
                    1,
                    &v88,
                    0,
                    v87);
          }
          v47 = v44;
          if ( v44 < 0 )
          {
            v75 = WdLogNewEntry5_WdAssertion(v46, v45);
            *(_QWORD *)(v75 + 24) = 1482LL;
            WdLogEvent5_WdAssertion(v75);
          }
          DxgAdapterSyncObject = v47;
        }
        else
        {
          v74 = WdLogNewEntry5_WdError(v41, v40);
          *(_QWORD *)(v74 + 24) = v38;
          WdLogEvent5_WdError(v74);
          DxgAdapterSyncObject = -1073741811;
        }
        goto LABEL_60;
      }
    }
    else
    {
      if ( !v42 || *((_QWORD *)v38 + 39) == v42 )
        goto LABEL_52;
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v71[3] = v38;
      v72 = *((_QWORD *)v38 + 39);
      v71[5] = v42;
      DxgAdapterSyncObject = -1073741811;
      v71[4] = v72;
      v71[6] = -1073741811LL;
      WdLogEvent5_WdError(v71);
    }
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
    v73[3] = v10;
    v73[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 16LL);
    v73[5] = DxgAdapterSyncObject;
    WdLogEvent5_WdError(v73);
LABEL_60:
    if ( v84 )
    {
      v49 = v83;
      v84 = 0;
      if ( *((struct _KTHREAD **)v83 + 2) != KeGetCurrentThread() )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45);
        v76[3] = 275LL;
        v76[4] = 4LL;
        v76[5] = v49;
        v76[6] = 0LL;
        v76[7] = 0LL;
        WdLogEvent5_WdCriticalError(v76);
      }
      v50 = *((_DWORD *)v49 + 6);
      if ( v50 <= 0 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v77 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v77);
        v50 = *((_DWORD *)v49 + 6);
      }
      v51 = v50 - 1;
      *((_DWORD *)v49 + 6) = v51;
      if ( !v51 )
      {
        *((_QWORD *)v49 + 2) = 0LL;
        ExReleasePushLockExclusiveEx(v49, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_68;
  }
  v38 = *(unsigned int **)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 277LL) )
    goto LABEL_43;
  DxgAdapterSyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 16LL)
                                                        + 4240LL),
                           (struct DXGPROCESS *)v10,
                           (struct DXGCONTEXT *)v17,
                           a1[2],
                           v87[0]);
LABEL_68:
  if ( v86 )
  {
    v86 = 0;
    ExReleaseResourceLite(v85[65]);
    KeLeaveCriticalRegion();
  }
LABEL_70:
  v52 = v103;
  if ( v103 )
  {
    if ( v104 )
    {
      COREACCESS::Release((COREACCESS *)v101);
      v52 = v103;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
  }
  v53 = v98;
  if ( v98 )
  {
    if ( v99 )
    {
      v99 = 0;
      v53 = v98;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v98 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v98, v100);
        v53 = v98;
      }
      v100 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
  }
  if ( v22 && v82 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v22 + 136));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v78 = *(_QWORD *)(v17 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v94,
      (struct DXGDEVICE *)v78);
    v79 = *(_QWORD *)(v17 + 16);
    v93 = 0;
    v92 = *(_QWORD *)(*(_QWORD *)(v79 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v108, v78, 2, v80, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v108, v81);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v78, (struct DXGCONTEXT *)v17, (struct COREDEVICEACCESS *)v108);
    COREACCESS::~COREACCESS((COREACCESS *)v110);
    COREACCESS::~COREACCESS((COREACCESS *)v109);
    if ( v93 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
    if ( v94[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v94);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v78 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v78 + 16), (struct DXGDEVICE *)v78);
  }
  return (unsigned int)DxgAdapterSyncObject;
}
