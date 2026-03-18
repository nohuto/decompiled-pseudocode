/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01164F0 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0116F30 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C022C7E8 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00081FC (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C00118CC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001A47C (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C00391DC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0039E38 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0039EB8 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C00455CC (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00DAB60 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBC04 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00DD24C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0116F30 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C011C0AC (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C011C210 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     VidMmTerminateProcessX @ 0x1C011C3C4 (VidMmTerminateProcessX.c)
 *     VidSchTerminateProcessX @ 0x1C011C468 (VidSchTerminateProcessX.c)
 *     OutputDuplProcessTerminate @ 0x1C012C3C0 (OutputDuplProcessTerminate.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C01496E8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C014A160 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C014E8C0 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C01513BC (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0155968 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C015A65C (DxgkDestroyCsrssProcess.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C020D540 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0236A1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0248DD4 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0271A0C (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C027FFFC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C028122C (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0281438 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0281A44 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0283C30 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028BCFC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C028D680 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C028D75C (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B223C (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _ERESOURCE *a2, char a3)
{
  char v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGSESSIONMGR *v23; // rbx
  unsigned int v24; // eax
  struct DXGSESSIONDATA *v25; // rax
  OUTPUTDUPL_SESSION_MGR *v26; // rbx
  struct _EPROCESS *v27; // rax
  __int64 v28; // rdx
  DXGADAPTER *v29; // rcx
  DXGADAPTER *v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // esi
  _QWORD *v39; // r14
  unsigned int v40; // esi
  _QWORD *v41; // r14
  DXGSYNCOBJECT *EntryObject; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // r15d
  PERESOURCE *v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // r13
  char v52; // r12
  char *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  char *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  DXGSESSIONMGR *v60; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  __int64 v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rdx
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // r14
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  DXGVIRTUALMACHINE *v81; // rcx
  __int64 v82; // rax
  struct DXGPROTECTEDSESSION *v83; // rbx
  unsigned int v84; // eax
  unsigned int v85; // ebx
  DXGKEYEDMUTEX *v86; // rcx
  int v87; // r8d
  __int64 v88; // rax
  PERESOURCE *Global; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned int v93; // ebx
  DXGSHAREDVMOBJECT *v94; // rax
  unsigned int v95; // r12d
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct DXGPROCESS *v98; // r15
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  DXGSESSIONMGR *v104; // rbx
  unsigned int v105; // eax
  struct DXGSESSIONDATA *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  DXGSESSIONMGR *v109; // rbx
  unsigned int v110; // eax
  DXGSESSIONDATA *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  struct DXGGLOBAL *v115; // rax
  DXGVIRTUALMACHINE *v116; // rcx
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rbx
  __int64 v121; // rax
  struct DXGGLOBAL *v122; // rax
  DXG_VMBUS_CHANNEL_BASE *v123; // rcx
  struct _MDL *v124; // [rsp+28h] [rbp-D8h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp-C8h] BYREF
  PERESOURCE Resource; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v128[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v129[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v130; // [rsp+60h] [rbp-A0h]
  char v131; // [rsp+68h] [rbp-98h]
  __int64 v132; // [rsp+70h] [rbp-90h] BYREF
  int v133; // [rsp+78h] [rbp-88h]
  int v134; // [rsp+7Ch] [rbp-84h]
  int v135; // [rsp+80h] [rbp-80h]
  __int64 v136; // [rsp+88h] [rbp-78h] BYREF
  __int64 v137; // [rsp+90h] [rbp-70h]
  _BYTE v138[8]; // [rsp+98h] [rbp-68h] BYREF
  DXGPUSHLOCK *v139; // [rsp+A0h] [rbp-60h]
  int v140; // [rsp+A8h] [rbp-58h]
  char v141; // [rsp+B0h] [rbp-50h] BYREF
  char v142; // [rsp+B1h] [rbp-4Fh]
  _BYTE v143[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v144; // [rsp+C8h] [rbp-38h]
  char v145; // [rsp+D0h] [rbp-30h]
  __int64 v146; // [rsp+D8h] [rbp-28h]
  _BYTE v147[16]; // [rsp+F8h] [rbp-8h] BYREF
  DXGADAPTER *v148; // [rsp+108h] [rbp+8h]
  char v149; // [rsp+110h] [rbp+10h]
  __int64 v150; // [rsp+118h] [rbp+18h]
  _BYTE v151[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v152[8]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v153[64]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v154[88]; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = a3;
  if ( *((_BYTE *)this + 346) && (*((_BYTE *)this + 347) & 0x20) == 0 )
  {
    v60 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 88);
    if ( v60 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v59);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v60, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
        (DXGAUTOPUSHLOCK *)v138,
        (struct _KTHREAD **)SessionDataForSpecifiedSession + 2369,
        0);
      DXGPUSHLOCK::AcquireExclusive(v139);
      v140 = 2;
      DispBrokerClientReference::Assign((HANDLE **)SessionDataForSpecifiedSession + 2373, 0LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v138);
    }
    Interval.QuadPart = 0LL;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v59, v58);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    v66 = PsGetCurrentProcessSessionId(v65);
    DxgkLogCodePointPacketForSession(0x73u, v66, ProcessExitStatus, 0, 0, 0LL);
  }
  while ( *((_DWORD *)this + 90) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( qword_1C00B00A8 && qword_1C00B00A8 == *(_QWORD *)(*((_QWORD *)this + 8) + 72LL) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)this + 344) && (*((_BYTE *)this + 347) & 0x20) == 0 )
    DxgkDestroyCsrssProcess();
  v9 = (__int64 *)((char *)this + 280);
  if ( (__int64 *)*v9 != v9 )
  {
    if ( !v3 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
    while ( 1 )
    {
      v7 = *v9;
      if ( (__int64 *)*v9 == v9 )
        break;
      v48 = (v7 - 24) & -(__int64)(v7 != 0);
      v49 = *(_QWORD *)(v48 + 0x10);
      v50 = *(_QWORD *)(v49 + 16);
      if ( *(_QWORD *)(v48 + 0x738) )
        OutputDuplProcessTerminate(0LL, *(_QWORD *)(v49 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, v48, 2, v8, 0);
      v51 = *(_QWORD *)(v50 + 2680);
      if ( *(_DWORD *)(v48 + 432) == 2 )
      {
        v52 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v51 + 48, 0LL);
        *(_QWORD *)(v51 + 56) = KeGetCurrentThread();
      }
      else
      {
        v52 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v51 + 24, 0LL);
        *(_QWORD *)(v51 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v152, v53);
      if ( !*(_QWORD *)(v50 + 2680) )
      {
        v67 = WdLogNewEntry5_WdAssertion(v55, v54);
        *(_QWORD *)(v67 + 24) = 1917LL;
        WdLogEvent5_WdAssertion(v67);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 16LL) + 200LL) == 4 )
      {
        v68 = v48 + 24;
        v69 = -v48;
        v70 = v68 & -(__int64)(v69 != 0);
        v71 = *(_QWORD *)v70;
        if ( *(_QWORD *)(*(_QWORD *)v70 + 8LL) != v70
          || (v72 = *(_QWORD **)((v68 & -(__int64)(v69 != 0)) + 8), *v72 != v70) )
        {
          __fastfail(3u);
        }
        *v72 = v71;
        *(_QWORD *)(v71 + 8) = v72;
      }
      else
      {
        if ( !*(_BYTE *)(v50 + 209) && *(_DWORD *)(v48 + 576) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v152);
          v130 = v50;
          v131 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
          if ( *(_DWORD *)(v50 + 200) == 1 )
            DXGDEVICE::FlushScheduler((_QWORD *)v48, 4u);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v152, v56);
          if ( v131 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v50 + 2680), (struct DXGDEVICE *)v48, 0LL);
      }
      v57 = v51 + 48;
      if ( !v52 )
        v57 = v51 + 24;
      *(_QWORD *)(v57 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v57, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v154);
      COREACCESS::~COREACCESS((COREACCESS *)v153);
    }
    v3 = a3;
  }
  if ( !DXGPROCESS::GetCurrent(v7, v6) )
  {
    v73 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v73 + 24) = 3051LL;
    WdLogEvent5_WdWarning(v73);
    goto LABEL_18;
  }
  v142 = 0;
  v144 = 0LL;
  v145 = 0;
  v146 = 0LL;
  v148 = 0LL;
  v149 = 0;
  v150 = 0LL;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    v18 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 1LL;
    *(_OWORD *)(v18 + 32) = 0LL;
  }
  v23 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19) + 88);
  if ( v23 )
  {
    v24 = PsGetCurrentProcessSessionId(v22);
    v25 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v23, v24);
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v25 )
  {
    v74 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v74 + 24) = 3098LL;
LABEL_103:
    WdLogEvent5_WdError(v74);
    goto LABEL_14;
  }
  v26 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)v25 + 1);
  if ( !v26 )
  {
    v74 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v74 + 24) = 3105LL;
    goto LABEL_103;
  }
  v27 = (struct _EPROCESS *)PsGetCurrentProcess(v22, v21);
  OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v26, v27);
LABEL_14:
  if ( v142 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v141);
  v29 = v148;
  if ( v148 )
  {
    if ( v149 )
    {
      COREACCESS::Release((COREACCESS *)v147);
      v29 = v148;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v29);
  }
  v30 = v144;
  if ( v144 )
  {
    if ( v145 )
    {
      COREACCESS::Release((COREACCESS *)v143);
      v30 = v144;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v30);
  }
LABEL_18:
  v31 = (_QWORD *)((char *)this + 304);
  if ( (_QWORD *)*v31 != v31 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 42));
    while ( (_QWORD *)*v31 != v31 )
    {
      v76 = (*v31 - 24LL) & -(__int64)(*v31 != 0LL);
      v77 = *(_QWORD *)(*(_QWORD *)(v76 + 0x10) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v151, (struct DXGADAPTER *const)v77);
      COREACCESS::AcquireShared((COREACCESS *)v151, 0LL);
      if ( !*(_QWORD *)(v77 + 2672) )
      {
        v80 = WdLogNewEntry5_WdAssertion(v79, v78);
        *(_QWORD *)(v80 + 24) = 1992LL;
        WdLogEvent5_WdAssertion(v80);
      }
      if ( *(_DWORD *)(v77 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v76);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v77 + 2672),
          *(_DWORD *)(v76 + 52),
          *(_DWORD *)(v76 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v151);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 42), v75);
  }
  if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
  {
    v81 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
    if ( v81 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v81);
  }
  v32 = *((unsigned int *)this + 65);
  v33 = *((_DWORD *)this + 64);
  if ( (_DWORD)v32 != v33 )
  {
    v38 = 0;
    if ( v33 )
    {
      v39 = (_QWORD *)((char *)this + 240);
      do
      {
        if ( v38 >= *((_DWORD *)this + 64) )
        {
          v82 = WdLogNewEntry5_WdAssertion(v32, v28);
          *(_QWORD *)(v82 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v82);
        }
        v32 = 2LL * v38;
        if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 8 )
        {
          EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v38);
          v45 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v38);
          if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
          {
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v44, v43);
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v128, Global, 0);
            DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v128, v90);
            DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
            *((_DWORD *)EntryObject + 18) = 0;
            DXGPROCESS::FreeHandleSafe(this, v45);
            if ( v128[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v128, v28);
          }
          else
          {
            v46 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v44, v43);
            DXGGLOBAL::DestroySyncObject(v46, EntryObject, v45);
          }
        }
        else
        {
          v28 = (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1Fu) - 9;
          if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 9 )
          {
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v38);
            v85 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v38);
            DXGKEYEDMUTEX::SignalAbandoned(v86, v85, v87);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v85) )
            {
              v88 = WdLogNewEntry5_WdAssertion(v32, v28);
              *(_QWORD *)(v88 + 24) = 2064LL;
              WdLogEvent5_WdAssertion(v88);
            }
          }
          else if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 0xE )
          {
            v83 = (struct DXGPROTECTEDSESSION *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v38);
            v84 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v38);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v83, v84);
          }
        }
        v33 = *((_DWORD *)this + 64);
        ++v38;
      }
      while ( v38 < v33 );
      v32 = *((unsigned int *)this + 65);
    }
    if ( (_DWORD)v32 != v33 )
    {
      v40 = 0;
      if ( v33 )
      {
        v41 = (_QWORD *)((char *)this + 240);
        do
        {
          if ( v40 >= *((_DWORD *)this + 64) )
          {
            v91 = WdLogNewEntry5_WdAssertion(v32, v28);
            *(_QWORD *)(v91 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v91);
          }
          v28 = *(_DWORD *)(*v41 + 16LL * v40 + 8) & 0x1F;
          if ( (*(_DWORD *)(*v41 + 16LL * v40 + 8) & 0x1F) == 1 )
          {
            v47 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v40);
            DXGADAPTER::DestroyHandle((struct _KTHREAD **)this, v47);
          }
          else
          {
            v32 = (*(_DWORD *)(*v41 + 16LL * v40 + 8) & 0x1Fu) - 12;
            if ( (*(_DWORD *)(*v41 + 16LL * v40 + 8) & 0x1F) == 0xC )
            {
              v95 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v40);
              v98 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v40);
              if ( (*((_BYTE *)v98 + 347) & 0x20) == 0 )
              {
                v99 = WdLogNewEntry5_WdAssertion(v97, v96);
                *(_QWORD *)(v99 + 24) = 2107LL;
                WdLogEvent5_WdAssertion(v99);
              }
              CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v136, v98);
              v100 = v137;
              if ( v137 )
                DXGPROCESS::DestroyDxgProcess(v98);
              else
                DXGPROCESS::FreeHandleSafe(this, v95);
              if ( v100 )
                *(_QWORD *)(v100 + 8) = v136;
            }
            else if ( (*(_DWORD *)(*v41 + 16LL * v40 + 8) & 0x1F) == 0xD )
            {
              v93 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v40);
              v94 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v40);
              DXGSHAREDVMOBJECT::ReleaseReference(v94);
              DXGPROCESS::FreeHandleSafe(this, v93);
            }
            else if ( (_DWORD)v28 )
            {
              v92 = WdLogNewEntry5_WdAssertion(v32, v28);
              *(_QWORD *)(v92 + 24) = 2128LL;
              WdLogEvent5_WdAssertion(v92);
            }
          }
          ++v40;
        }
        while ( v40 < *((_DWORD *)this + 64) );
        v3 = a3;
      }
    }
  }
  if ( *((_QWORD *)this + 60) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 60) )
    {
      v101 = WdLogNewEntry5_WdAssertion(v32, v28);
      *(_QWORD *)(v101 + 24) = 2141LL;
      WdLogEvent5_WdAssertion(v101);
    }
  }
  if ( *((_BYTE *)this + 488) )
  {
    v104 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v32, v28) + 88);
    if ( v104 )
    {
      v105 = PsGetCurrentProcessSessionId(v103);
      v106 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v104, v105);
    }
    else
    {
      v106 = 0LL;
    }
    if ( !v106 )
    {
      v107 = WdLogNewEntry5_WdAssertion(v103, v102);
      *(_QWORD *)(v107 + 24) = 2149LL;
      WdLogEvent5_WdAssertion(v107);
    }
    v109 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v103, v102) + 88);
    if ( v109 )
    {
      v110 = PsGetCurrentProcessSessionId(v108);
      v111 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v109, v110);
    }
    else
    {
      v111 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v111) < 0 )
    {
      v114 = WdLogNewEntry5_WdAssertion(v113, v112);
      *(_QWORD *)(v114 + 24) = 2151LL;
      WdLogEvent5_WdAssertion(v114);
    }
    *((_BYTE *)this + 488) = 0;
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX(this);
  if ( v3 )
  {
    v116 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
    if ( v116 )
      DXGVIRTUALMACHINE::ResetVirtualMachine(v116, 0);
    v117 = DXGPROCESS::DeferredInitialize(this, 1u);
    v120 = v117;
    if ( v117 < 0 )
    {
      v121 = WdLogNewEntry5_WdError(v119, v118);
      *(_QWORD *)(v121 + 24) = v120;
      WdLogEvent5_WdError(v121);
      *((_BYTE *)this + 520) = 0;
    }
  }
  else if ( (*((_BYTE *)this + 347) & 8) != 0 )
  {
    v115 = DXGGLOBAL::GetGlobal(v35, v34);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v115,
      (__int64 (__fastcall *)(_QWORD *, __int64))DestroyProcessCallback,
      (__int64)this,
      2);
  }
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 347) & 0x20) != 0 )
    DXGPROCESSVM::DestroyVmProcess(this);
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 106) )
  {
    v122 = DXGGLOBAL::GetGlobal(v37, v36);
    v133 = *((_DWORD *)this + 106);
    v132 = 0LL;
    v123 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)v122 + 183);
    v134 = 1;
    v135 = 1001;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v123, (struct DXGKVMB_COMMAND_BASE *)&v132, 0x18u, 0LL, 0LL, v124);
    *((_DWORD *)this + 106) = 0;
  }
}
