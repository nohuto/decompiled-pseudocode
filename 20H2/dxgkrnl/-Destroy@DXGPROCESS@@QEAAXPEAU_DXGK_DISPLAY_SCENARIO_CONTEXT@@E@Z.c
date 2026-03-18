/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01124C0 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C022F878 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019498 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001A41C (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0039FAC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003AC08 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C003ACE0 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C004652C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00DDE78 (DxgkDestroyCsrssProcess.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DFB30 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00E1F44 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E3544 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E36B8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0111F08 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01130B0 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01138D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     VidMmTerminateProcessX @ 0x1C0113AA8 (VidMmTerminateProcessX.c)
 *     VidSchTerminateProcessX @ 0x1C0113B4C (VidSchTerminateProcessX.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C012F53C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     OutputDuplProcessTerminate @ 0x1C013B244 (OutputDuplProcessTerminate.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C0156088 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01568B0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C015C870 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C01610CC (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C02105E0 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0239AFC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0274E8C (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C02834AC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C02846F0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C02848FC (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0284F08 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C02870F0 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028F1BC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0290B44 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0290C20 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B579C (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
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
  struct DXGFASTMUTEX *const *v26; // rbx
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
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // r14
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  DXGVIRTUALMACHINE *v82; // rcx
  __int64 v83; // rax
  void *v84; // rbx
  unsigned int v85; // eax
  unsigned int v86; // ebx
  DXGKEYEDMUTEX *v87; // rcx
  int v88; // r8d
  __int64 v89; // rax
  PERESOURCE *Global; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned int v94; // ebx
  DXGSHAREDVMOBJECT *v95; // rax
  unsigned int v96; // r12d
  __int64 v97; // rdx
  __int64 v98; // rcx
  struct DXGPROCESS *v99; // r15
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  DXGSESSIONMGR *v105; // rbx
  unsigned int v106; // eax
  struct DXGSESSIONDATA *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  DXGSESSIONMGR *v111; // rbx
  unsigned int v112; // eax
  DXGSESSIONDATA *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  struct DXGGLOBAL *v117; // rax
  DXGVIRTUALMACHINE *v118; // rcx
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // rax
  struct DXGGLOBAL *v124; // rax
  DXG_VMBUS_CHANNEL_BASE *v125; // rcx
  struct _MDL *v126; // [rsp+28h] [rbp-D8h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp-C8h] BYREF
  PERESOURCE Resource; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v130[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v131[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v132; // [rsp+60h] [rbp-A0h]
  char v133; // [rsp+68h] [rbp-98h]
  __int64 v134; // [rsp+70h] [rbp-90h] BYREF
  int v135; // [rsp+78h] [rbp-88h]
  int v136; // [rsp+7Ch] [rbp-84h]
  int v137; // [rsp+80h] [rbp-80h]
  __int64 v138; // [rsp+88h] [rbp-78h] BYREF
  __int64 v139; // [rsp+90h] [rbp-70h]
  _BYTE v140[8]; // [rsp+98h] [rbp-68h] BYREF
  DXGPUSHLOCK *v141; // [rsp+A0h] [rbp-60h]
  int v142; // [rsp+A8h] [rbp-58h]
  char v143; // [rsp+B0h] [rbp-50h] BYREF
  char v144; // [rsp+B1h] [rbp-4Fh]
  _BYTE v145[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v146; // [rsp+C8h] [rbp-38h]
  char v147; // [rsp+D0h] [rbp-30h]
  __int64 v148; // [rsp+D8h] [rbp-28h]
  _BYTE v149[16]; // [rsp+F8h] [rbp-8h] BYREF
  DXGADAPTER *v150; // [rsp+108h] [rbp+8h]
  char v151; // [rsp+110h] [rbp+10h]
  __int64 v152; // [rsp+118h] [rbp+18h]
  _BYTE v153[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v154[8]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v155[64]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v156[88]; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = a3;
  if ( *((_BYTE *)this + 346) && (*((_BYTE *)this + 347) & 0x20) == 0 )
  {
    v60 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
    if ( v60 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v59, v58);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v60, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
        (DXGAUTOPUSHLOCK *)v140,
        (struct _KTHREAD **)SessionDataForSpecifiedSession + 2369,
        0);
      DXGPUSHLOCK::AcquireExclusive(v141);
      v142 = 2;
      DispBrokerClientReference::Assign((HANDLE **)SessionDataForSpecifiedSession + 2373, 0LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v140);
    }
    Interval.QuadPart = 0LL;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v59, v58);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    v67 = PsGetCurrentProcessSessionId(v66, v65);
    DxgkLogCodePointPacketForSession(0x73u, v67, ProcessExitStatus, 0, 0, 0LL);
  }
  while ( *((_DWORD *)this + 90) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( qword_1C00B11A8 && qword_1C00B11A8 == *(_QWORD *)(*((_QWORD *)this + 8) + 72LL) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)this + 344) && (*((_BYTE *)this + 347) & 0x20) == 0 )
    DxgkDestroyCsrssProcess(v7, v6);
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
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v154, v48, 2, v8, 0);
      v51 = *(_QWORD *)(v50 + 2704);
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
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v154, v53);
      if ( !*(_QWORD *)(v50 + 2704) )
      {
        v68 = WdLogNewEntry5_WdAssertion(v55, v54);
        *(_QWORD *)(v68 + 24) = 1932LL;
        WdLogEvent5_WdAssertion(v68);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 16LL) + 200LL) == 4 )
      {
        v69 = v48 + 24;
        v70 = -v48;
        v71 = v69 & -(__int64)(v70 != 0);
        v72 = *(_QWORD *)v71;
        if ( *(_QWORD *)(*(_QWORD *)v71 + 8LL) != v71
          || (v73 = *(_QWORD **)((v69 & -(__int64)(v70 != 0)) + 8), *v73 != v71) )
        {
          __fastfail(3u);
        }
        *v73 = v72;
        *(_QWORD *)(v72 + 8) = v73;
      }
      else
      {
        if ( !*(_BYTE *)(v50 + 209) && *(_DWORD *)(v48 + 576) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v154, v54);
          v132 = v50;
          v133 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v131);
          if ( *(_DWORD *)(v50 + 200) == 1 )
            DXGDEVICE::FlushScheduler((_QWORD *)v48, 4u);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v131);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v154, v56);
          if ( v133 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v131);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v50 + 2704), (struct DXGDEVICE *)v48, 0LL);
      }
      v57 = v51 + 48;
      if ( !v52 )
        v57 = v51 + 24;
      *(_QWORD *)(v57 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v57, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v156);
      COREACCESS::~COREACCESS((COREACCESS *)v155);
    }
    v3 = a3;
  }
  if ( !DXGPROCESS::GetCurrent(v7, v6) )
  {
    v74 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v74 + 24) = 3051LL;
    WdLogEvent5_WdWarning(v74);
    goto LABEL_18;
  }
  v144 = 0;
  v146 = 0LL;
  v147 = 0;
  v148 = 0LL;
  v150 = 0LL;
  v151 = 0;
  v152 = 0LL;
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
  v23 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19) + 102);
  if ( v23 )
  {
    v24 = PsGetCurrentProcessSessionId(v22, v21);
    v25 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v23, v24);
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v25 )
  {
    v75 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v75 + 24) = 3098LL;
LABEL_103:
    WdLogEvent5_WdError(v75);
    goto LABEL_14;
  }
  v26 = (struct DXGFASTMUTEX *const *)*((_QWORD *)v25 + 1);
  if ( !v26 )
  {
    v75 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v75 + 24) = 3105LL;
    goto LABEL_103;
  }
  v27 = (struct _EPROCESS *)PsGetCurrentProcess(v22, v21);
  OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v26, v27);
LABEL_14:
  if ( v144 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v143);
  v29 = v150;
  if ( v150 )
  {
    if ( v151 )
    {
      COREACCESS::Release((COREACCESS *)v149);
      v29 = v150;
    }
    DXGADAPTER::ReleaseReference(v29);
  }
  v30 = v146;
  if ( v146 )
  {
    if ( v147 )
    {
      COREACCESS::Release((COREACCESS *)v145);
      v30 = v146;
    }
    DXGADAPTER::ReleaseReference(v30);
  }
LABEL_18:
  v31 = (_QWORD *)((char *)this + 304);
  if ( (_QWORD *)*v31 != v31 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 42));
    while ( (_QWORD *)*v31 != v31 )
    {
      v77 = (*v31 - 24LL) & -(__int64)(*v31 != 0LL);
      v78 = *(_QWORD *)(*(_QWORD *)(v77 + 0x10) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v153, (struct DXGADAPTER *const)v78);
      COREACCESS::AcquireShared((COREACCESS *)v153, 0LL);
      if ( !*(_QWORD *)(v78 + 2696) )
      {
        v81 = WdLogNewEntry5_WdAssertion(v80, v79);
        *(_QWORD *)(v81 + 24) = 2007LL;
        WdLogEvent5_WdAssertion(v81);
      }
      if ( *(_DWORD *)(v78 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v77);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v78 + 2696),
          *(_DWORD *)(v77 + 52),
          *(_DWORD *)(v77 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v153);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 42), v76);
  }
  if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
  {
    v82 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
    if ( v82 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v82);
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
          v83 = WdLogNewEntry5_WdAssertion(v32, v28);
          *(_QWORD *)(v83 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v83);
        }
        v32 = 2LL * v38;
        if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 8 )
        {
          EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v38);
          v45 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v38);
          if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
          {
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v44, v43);
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130, Global, 0);
            DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v130, v91);
            DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
            *((_DWORD *)EntryObject + 18) = 0;
            DXGPROCESS::FreeHandleSafe(this, v45);
            if ( v130[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v130);
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
            v86 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v38);
            DXGKEYEDMUTEX::SignalAbandoned(v87, v86, v88);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v86) )
            {
              v89 = WdLogNewEntry5_WdAssertion(v32, v28);
              *(_QWORD *)(v89 + 24) = 2079LL;
              WdLogEvent5_WdAssertion(v89);
            }
          }
          else if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 0xE )
          {
            v84 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v38);
            v85 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v38);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v84, v85);
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
            v92 = WdLogNewEntry5_WdAssertion(v32, v28);
            *(_QWORD *)(v92 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v92);
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
              v96 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v40);
              v99 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v40);
              if ( (*((_BYTE *)v99 + 347) & 0x20) == 0 )
              {
                v100 = WdLogNewEntry5_WdAssertion(v98, v97);
                *(_QWORD *)(v100 + 24) = 2122LL;
                WdLogEvent5_WdAssertion(v100);
              }
              CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v138, v99);
              v101 = v139;
              if ( v139 )
                DXGPROCESS::DestroyDxgProcess(v99);
              else
                DXGPROCESS::FreeHandleSafe(this, v96);
              if ( v101 )
                *(_QWORD *)(v101 + 8) = v138;
            }
            else if ( (*(_DWORD *)(*v41 + 16LL * v40 + 8) & 0x1F) == 0xD )
            {
              v94 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v40);
              v95 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v40);
              DXGSHAREDVMOBJECT::ReleaseReference(v95);
              DXGPROCESS::FreeHandleSafe(this, v94);
            }
            else if ( (_DWORD)v28 )
            {
              v93 = WdLogNewEntry5_WdAssertion(v32, v28);
              *(_QWORD *)(v93 + 24) = 2143LL;
              WdLogEvent5_WdAssertion(v93);
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
      v102 = WdLogNewEntry5_WdAssertion(v32, v28);
      *(_QWORD *)(v102 + 24) = 2156LL;
      WdLogEvent5_WdAssertion(v102);
    }
  }
  if ( *((_BYTE *)this + 488) )
  {
    v105 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v32, v28) + 102);
    if ( v105 )
    {
      v106 = PsGetCurrentProcessSessionId(v104, v103);
      v107 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v105, v106);
    }
    else
    {
      v107 = 0LL;
    }
    if ( !v107 )
    {
      v108 = WdLogNewEntry5_WdAssertion(v104, v103);
      *(_QWORD *)(v108 + 24) = 2164LL;
      WdLogEvent5_WdAssertion(v108);
    }
    v111 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v104, v103) + 102);
    if ( v111 )
    {
      v112 = PsGetCurrentProcessSessionId(v110, v109);
      v113 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v111, v112);
    }
    else
    {
      v113 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v113) < 0 )
    {
      v116 = WdLogNewEntry5_WdAssertion(v115, v114);
      *(_QWORD *)(v116 + 24) = 2166LL;
      WdLogEvent5_WdAssertion(v116);
    }
    *((_BYTE *)this + 488) = 0;
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX(this);
  if ( v3 )
  {
    v118 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
    if ( v118 )
      DXGVIRTUALMACHINE::ResetVirtualMachine(v118, 0);
    v119 = DXGPROCESS::DeferredInitialize(this, 1u);
    v122 = v119;
    if ( v119 < 0 )
    {
      v123 = WdLogNewEntry5_WdError(v121, v120);
      *(_QWORD *)(v123 + 24) = v122;
      WdLogEvent5_WdError(v123);
      *((_BYTE *)this + 520) = 0;
    }
  }
  else if ( (*((_BYTE *)this + 347) & 8) != 0 )
  {
    v117 = DXGGLOBAL::GetGlobal(v35, v34);
    DXGGLOBAL::IterateAdaptersWithCallback(v117, DestroyProcessCallback, this, 2LL);
  }
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 347) & 0x20) != 0 )
    DXGPROCESSVM::DestroyVmProcess(this);
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 106) )
  {
    v124 = DXGGLOBAL::GetGlobal(v37, v36);
    v135 = *((_DWORD *)this + 106);
    v134 = 0LL;
    v125 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)v124 + 197);
    v136 = 1;
    v137 = 1001;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v125, (struct DXGKVMB_COMMAND_BASE *)&v134, 0x18u, 0LL, 0LL, v126);
    *((_DWORD *)this + 106) = 0;
  }
}
