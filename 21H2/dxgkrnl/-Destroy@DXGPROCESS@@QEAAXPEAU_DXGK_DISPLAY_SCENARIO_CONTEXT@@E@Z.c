/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C019A588 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1C0335BB0 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0358A24 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C000C224 (-Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001F90C (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C00458AC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00465B8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00465E4 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01635A0 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C016D80C (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016E59C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     OutputDuplProcessTerminateForSession @ 0x1C018867C (OutputDuplProcessTerminateForSession.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1C01BAF88 (OutputDuplProcessTerminateForWddm.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C01E51B4 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01E6290 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01E9CA4 (DxgkDestroyCsrssProcess.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C01EE95C (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C02BFD18 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C033534C (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0336108 (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0336CD0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0336F70 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C033770C (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0339ABC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C033F5C8 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C03412C8 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C03413E0 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0351E48 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0376CD4 (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2, char a3)
{
  char v3; // r12
  _QWORD *v6; // r15
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rbx
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned int v19; // esi
  __int64 v20; // rbx
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // esi
  _QWORD *v27; // r14
  unsigned int v28; // ebx
  int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // r9
  __int64 v34; // r13
  char v35; // r12
  char *v36; // rdx
  char *v37; // rdx
  __int64 v38; // rcx
  DXGSYNCOBJECT *EntryObject; // rbx
  unsigned int v40; // r15d
  DXGGLOBAL *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  DXGSESSIONMGR *v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r14
  DXGVIRTUALMACHINE *v59; // rcx
  DXGVIRTUALMACHINE *v60; // rcx
  struct DXGPROTECTEDSESSION *v61; // rbx
  unsigned int v62; // eax
  unsigned int v63; // ebx
  DXGKEYEDMUTEX *v64; // rcx
  int v65; // r8d
  struct DXGGLOBAL *Global; // rax
  unsigned int v67; // esi
  int v68; // eax
  unsigned int v69; // ebx
  DXGSHAREDVMOBJECT *v70; // rax
  unsigned int v71; // r12d
  struct DXGPROCESS *v72; // r14
  __int64 v73; // rbx
  DXGSESSIONMGR *v74; // rbx
  unsigned int v75; // eax
  DXGSESSIONMGR *v76; // rbx
  unsigned int v77; // eax
  DXGSESSIONDATA *v78; // rax
  struct DXGGLOBAL *v79; // rax
  struct DXGGLOBAL *v80; // rax
  __int64 v81; // [rsp+28h] [rbp-D8h]
  __int64 v82; // [rsp+30h] [rbp-D0h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v85[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v86[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v87; // [rsp+78h] [rbp-88h]
  char v88; // [rsp+80h] [rbp-80h]
  __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h]
  _BYTE v91[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v92[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v93[64]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v94[88]; // [rsp+128h] [rbp+28h] BYREF

  v3 = a3;
  if ( (*((_DWORD *)this + 106) & 0x104) == 4 )
  {
    v44 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v44 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v44, CurrentProcessSessionId);
      if ( SessionDataForSpecifiedSession )
        DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
    }
    Interval.QuadPart = 0LL;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v43, v42, v45, v46);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    v51 = PsGetCurrentProcessSessionId();
    DxgkLogCodePointPacketForSession(0x73u, v51, ProcessExitStatus, 0, 0, 0LL);
  }
  Feature_GuestAllocMapping__private_IsEnabledPreCheck();
  while ( *((_DWORD *)this + 110) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  KeEnterCriticalRegion();
  if ( (*((_DWORD *)this + 106) & 0x101) == 1 )
    DxgkDestroyCsrssProcess();
  v6 = (_QWORD *)((char *)this + 320);
  if ( (_QWORD *)*v6 != v6 )
  {
    if ( !v3 )
      DXGPROCESS::ReleaseVidPnSourceOwners((struct _KTHREAD **)this, a2);
    while ( (_QWORD *)*v6 != v6 )
    {
      v31 = (*v6 - 24LL) & -(__int64)(*v6 != 0LL);
      v32 = *(_QWORD *)(*(_QWORD *)(v31 + 0x10) + 16LL);
      OutputDuplProcessTerminateForWddm((struct DXGADAPTER *)v32, *(DXGADAPTER **)(v31 + 0x738));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v92, v31, 2, v33, 0);
      v34 = *(_QWORD *)(v32 + 2800);
      if ( *(_DWORD *)(v31 + 432) == 2 )
      {
        v35 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v34 + 48, 0LL);
        *(_QWORD *)(v34 + 56) = KeGetCurrentThread();
      }
      else
      {
        v35 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v34 + 24, 0LL);
        *(_QWORD *)(v34 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v92, v36);
      if ( !*(_QWORD *)(v32 + 2800) )
      {
        WdLogSingleEntry1(1LL, 1957LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter->IsRenderAdapter()", 1957LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 200LL) == 4 )
      {
        v52 = v31 + 24;
        v53 = -v31;
        v54 = v52 & -(__int64)(v53 != 0);
        v55 = *(_QWORD *)v54;
        if ( *(_QWORD *)(*(_QWORD *)v54 + 8LL) != v54
          || (v56 = *(_QWORD **)((v52 & -(__int64)(v53 != 0)) + 8), *v56 != v54) )
        {
          __fastfail(3u);
        }
        *v56 = v55;
        *(_QWORD *)(v55 + 8) = v56;
      }
      else
      {
        if ( !*(_BYTE *)(v32 + 209) && *(_DWORD *)(v31 + 576) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v92);
          v87 = v32;
          v88 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
          if ( *(_DWORD *)(v32 + 200) == 1 )
            DXGDEVICE::FlushScheduler((_QWORD *)v31, 4u, 0xFFFFFFFD, 0);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v92, v37);
          if ( v88 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v32 + 2800), (struct DXGDEVICE *)v31, 0LL);
      }
      v38 = v34 + 48;
      if ( !v35 )
        v38 = v34 + 24;
      *(_QWORD *)(v38 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v38, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v94);
      COREACCESS::~COREACCESS((COREACCESS *)v93);
    }
    v3 = a3;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  else
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = 3055LL;
  OutputDuplProcessTerminateForSession();
  v10 = (_QWORD *)((char *)this + 344);
  if ( (_QWORD *)*v10 != v10 )
  {
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)this + 376));
    while ( (_QWORD *)*v10 != v10 )
    {
      v57 = (*v10 - 24LL) & -(__int64)(*v10 != 0LL);
      v58 = *(_QWORD *)(*(_QWORD *)(v57 + 0x10) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v91, (struct DXGADAPTER *const)v58);
      COREACCESS::AcquireShared((COREACCESS *)v91, 0LL);
      if ( !*(_QWORD *)(v58 + 2792) )
      {
        WdLogSingleEntry1(1LL, 2035LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->IsDisplayAdapter()",
          2035LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v58 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection((struct _KTHREAD **)this, v57);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v58 + 2792),
          *(_DWORD *)(v57 + 52),
          *(_DWORD *)(v57 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v91);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 47);
  }
  if ( (*((_DWORD *)this + 106) & 0x80u) != 0 )
  {
    v59 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
    if ( v59 )
    {
      DXGVIRTUALMACHINE::FlushDevicesForTermination(v59);
      v60 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
      if ( v60 )
        DXGVIRTUALMACHINE::PauseVmBusChannels(v60);
    }
  }
  v11 = *((_DWORD *)this + 75);
  v12 = *((_DWORD *)this + 74);
  if ( v11 != v12 )
  {
    v26 = 0;
    if ( v12 )
    {
      v27 = (_QWORD *)((char *)this + 280);
      do
      {
        if ( v26 >= *((_DWORD *)this + 74) )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 217LL, 0LL, 0LL, 0LL, 0LL);
        }
        switch ( *(_DWORD *)(*v27 + 16LL * v26 + 8) & 0x1F )
        {
          case 8:
            EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v26);
            v40 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v26);
            if ( (*((_DWORD *)this + 106) & 0x80) != 0 )
            {
              Global = DXGGLOBAL_GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v85, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v85);
              DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
              *((_DWORD *)EntryObject + 20) = 0;
              DXGPROCESS::FreeHandleSafe(this, v40);
              if ( v85[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v85);
            }
            else
            {
              v41 = DXGGLOBAL_GetGlobal();
              DXGGLOBAL::DestroySyncObject(v41, EntryObject, v40);
            }
            break;
          case 9:
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v26);
            v63 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v26);
            DXGKEYEDMUTEX::SignalAbandoned(v64, v63, v65);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v63) )
            {
              WdLogSingleEntry1(1LL, 2118LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 2118LL, 0LL, 0LL, 0LL, 0LL);
            }
            break;
          case 14:
            v61 = (struct DXGPROTECTEDSESSION *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v26);
            v62 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v26);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v61, v62);
            break;
        }
        v12 = *((_DWORD *)this + 74);
        ++v26;
      }
      while ( v26 < v12 );
      v11 = *((_DWORD *)this + 75);
    }
  }
  v13 = v12;
  if ( (*((_DWORD *)this + 106) & 0x80u) != 0 )
  {
    if ( v11 == v12 )
      goto LABEL_14;
    v67 = 0;
    if ( v12 )
    {
      do
      {
        v68 = HMGRTABLE::GetEntryType((char *)this + 280, v67, v13) - 12;
        if ( v68 )
        {
          if ( v68 == 1 )
          {
            v69 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v67);
            v70 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v67);
            DXGSHAREDVMOBJECT::ReleaseReference(v70);
            DXGPROCESS::FreeHandleSafe(this, v69);
          }
        }
        else
        {
          v71 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v67);
          v72 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v67);
          if ( (*((_DWORD *)v72 + 106) & 0x100) == 0 )
          {
            WdLogSingleEntry1(1LL, 2158LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess->IsVmProcess()", 2158LL, 0LL, 0LL, 0LL, 0LL);
          }
          CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v89, v72);
          v73 = v90;
          if ( v90 )
            DXGPROCESS::DestroyDxgProcess(v72);
          else
            DXGPROCESS::FreeHandleSafe(this, v71);
          if ( v73 )
            *(_QWORD *)(v73 + 24) = v89;
        }
        v13 = *((unsigned int *)this + 74);
        ++v67;
      }
      while ( v67 < (unsigned int)v13 );
      v11 = *((_DWORD *)this + 75);
      v3 = a3;
    }
  }
  if ( v11 != (_DWORD)v13 )
  {
    v28 = 0;
    if ( (_DWORD)v13 )
    {
      do
      {
        if ( v28 >= *((_DWORD *)this + 74) )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 217LL, 0LL, 0LL, 0LL, 0LL);
        }
        v29 = *(_DWORD *)(*((_QWORD *)this + 35) + 16LL * v28 + 8) & 0x1F;
        if ( v29 == 1 )
        {
          v30 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v28);
          DXGADAPTER::DestroyHandle((struct _KTHREAD **)this, v30);
        }
        else if ( v29 )
        {
          WdLogSingleEntry1(1LL, 2196LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EntryType == HMGRENTRY_TYPE_FREE",
            2196LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ++v28;
      }
      while ( v28 < *((_DWORD *)this + 74) );
    }
  }
LABEL_14:
  if ( *((_QWORD *)this + 74) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 74) )
    {
      WdLogSingleEntry1(1LL, 2209LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsVailProcess()", 2209LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_BYTE *)this + 600) )
  {
    v74 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( !v74 || (v75 = PsGetCurrentProcessSessionId(), !DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v74, v75)) )
    {
      WdLogSingleEntry1(1LL, 2217LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGGLOBAL::GetGlobal()->GetSessionData()",
        2217LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v76 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v76 )
    {
      v77 = PsGetCurrentProcessSessionId();
      v78 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v76, v77);
    }
    else
    {
      v78 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v78) < 0 )
    {
      WdLogSingleEntry1(1LL, 2219LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 2219LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_BYTE *)this + 600) = 0;
  }
  v14 = 0;
  v15 = 272LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL_GetGlobal() + v15) )
    {
      v16 = DXGGLOBAL_GetGlobal();
      v17 = *((_QWORD *)this + 8);
      v18 = *(_QWORD *)((char *)v16 + v15);
      if ( v17 )
      {
        if ( *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)v18 - 1) + 16) )
        {
          (*(void (**)(void))(*(_QWORD *)(v18 + 8) + 88LL))();
          *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v18 - 1) + 16) = 0LL;
        }
      }
    }
    ++v14;
    v15 += 8LL;
  }
  while ( v14 < 2 );
  v19 = 0;
  v20 = 256LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL_GetGlobal() + v20) )
    {
      v21 = DXGGLOBAL_GetGlobal();
      v22 = *((_QWORD *)this + 8);
      v23 = *(_QWORD *)((char *)v21 + v20);
      if ( v22 )
      {
        if ( *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)v23 - 1)) )
        {
          (*(void (**)(void))(*(_QWORD *)(v23 + 8) + 376LL))();
          *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v23 - 1)) = 0LL;
        }
      }
    }
    ++v19;
    v20 += 8LL;
  }
  while ( v19 < 2 );
  while ( *((int *)this + 111) > 0 )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v24 = *((_DWORD *)this + 106);
  if ( v3 )
  {
    if ( (v24 & 0x80u) != 0 )
      DXGPROCESSVMWP::ResetVirtualMachine(this);
  }
  else if ( (v24 & 0x40) != 0 )
  {
    v79 = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v79, DestroyProcessCallback, this, 2LL);
  }
  KeLeaveCriticalRegion();
  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
  {
    DXGPROCESSVM::DestroyVmProcess(this);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v82) = *((_DWORD *)this + 106);
    LODWORD(v81) = *((_DWORD *)this + 126);
    McTemplateK0pxqt_EtwWriteTransfer(
      *((_QWORD *)this + 8),
      &EventDestroyDxgProcess,
      v25,
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      v81,
      v82);
  }
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 126) )
  {
    v80 = DXGGLOBAL_GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyProcess(*((DXG_GUEST_GLOBAL_VMBUS **)v80 + 218), *((_DWORD *)this + 126));
    *((_DWORD *)this + 126) = 0;
  }
}
