/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0071CF4
 * Callers:
 *     UserThreadCallout @ 0x1C00672B0 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C00055C0 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     IsInputThread @ 0x1C00095C0 (IsInputThread.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0017D08 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C002AA28 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C0030FA0 (FreeMessageList.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0032C88 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0038434 (UserDeactivateMITInputProcessing.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C003A21C (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C003D220 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C004399C (ApiSetEditionSystemGenerateMove.c)
 *     DisableDelegation @ 0x1C00463C0 (DisableDelegation.c)
 *     CleanupResources @ 0x1C004D1BC (CleanupResources.c)
 *     IsCleanupIAMAccessSupported @ 0x1C0051CA4 (IsCleanupIAMAccessSupported.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0052B6C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0067E0C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C006E590 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C006E5D0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     EtwTraceInputProcessDelay @ 0x1C006E610 (EtwTraceInputProcessDelay.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C006ED98 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     EtwTraceProcessWindowInfo @ 0x1C006EE40 (EtwTraceProcessWindowInfo.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C006F338 (ApiSetEditionGetProcessWindowStation.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C006FAA0 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     LockObjectAssignment @ 0x1C006FAD0 (LockObjectAssignment.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C006FB2C (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C006FD98 (ProtectHandle.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C006FE3C (IsDestroyThreadsMessagesSupported.c)
 *     zzzDestroyQueue @ 0x1C006FE70 (zzzDestroyQueue.c)
 *     UnlockObjectAssignment @ 0x1C00701F0 (UnlockObjectAssignment.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0070FB0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C00710D0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00733A0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C0084240 (HMLockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     Win32FreeToPagedLookasideList @ 0x1C008BD10 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A2AC8 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C14A0 (EtwTraceMessageCheckDelay.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CDF50 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CDF9C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C00CDFEC (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00D1C70 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00D1CE8 (DestroyThreadsMessages.c)
 *     FreeHwndList @ 0x1C00D1D0C (FreeHwndList.c)
 *     _PostMessage @ 0x1C00D1D30 (_PostMessage.c)
 *     xxxWindowEvent @ 0x1C00D1D54 (xxxWindowEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0122018 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0128E9C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C012902C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C012925C (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C012928C (CleanupRimDevObjInUserModeCallback.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0131948 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C01453E0 (-TraceLoggingDeadLowLevelHook@@YAXI_K@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C015B770 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01B5A50 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01CFFD4 (ApiSetEditionRemoveFromMsdList.c)
 *     IsEditionRemoveFromMsdListSupported @ 0x1C01FDA28 (IsEditionRemoveFromMsdListSupported.c)
 *     Is_PostMessageSupported @ 0x1C01FDB30 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x1C01FDB5C (IsxxxMNEndMenuStateSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rsi
  __int64 v1; // r13
  struct _NT_TIB *Self; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 i; // rax
  int v16; // eax
  char v17; // al
  unsigned __int64 v18; // rbx
  unsigned int ThreadId; // r12d
  int v20; // r15d
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *ProcessWindowStation; // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 *v30; // rbx
  __int64 v31; // r15
  struct tagTHREADINFO *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // rcx
  __int64 v39; // r15
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 ThreadWin32Thread; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  void *v56; // rcx
  struct _ETHREAD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // r15d
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // rbx
  unsigned __int64 v66; // rdx
  unsigned int v67; // ecx
  int v68; // eax
  int v69; // eax
  _QWORD *v70; // rbx
  _QWORD *v71; // r12
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rbx
  int v76; // eax
  __int64 v77; // rax
  _DWORD *v78; // rbx
  __int64 v79; // rcx
  int v80; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  _QWORD *v84; // rdx
  struct tagTHREADINFO *v85; // rcx
  __int64 v86; // r8
  struct tagTHREADINFO *v87; // rax
  struct tagTHREADINFO *v88; // rcx
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rax
  int v92; // edx
  void *v93; // rcx
  void *v94; // rcx
  int v95; // eax
  PVOID *v96; // rbx
  struct tagTHREADINFO *v97; // rdx
  struct tagTHREADINFO *v98; // rdx
  _QWORD *v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rcx
  void **v102; // rbx
  void **j; // rcx
  CCursorClip *v104; // rcx
  __int64 v105; // rcx
  char *v106; // r8
  CInputThread *v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rax
  _QWORD *v111; // rdx
  signed __int32 v113[8]; // [rsp+0h] [rbp-188h] BYREF
  unsigned int ThreadInfoFlags; // [rsp+50h] [rbp-138h]
  __int64 *v115; // [rsp+58h] [rbp-130h] BYREF
  _QWORD v116[2]; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v117; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v118; // [rsp+74h] [rbp-114h] BYREF
  PVOID *v119; // [rsp+78h] [rbp-110h] BYREF
  int v120; // [rsp+80h] [rbp-108h] BYREF
  struct tagTHREADINFO *v121; // [rsp+88h] [rbp-100h]
  __int64 v122; // [rsp+90h] [rbp-F8h]
  char v123[8]; // [rsp+A8h] [rbp-E0h] BYREF
  __int128 v124; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v125; // [rsp+C0h] [rbp-C8h]
  __int128 v126; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-B0h]
  __int128 v128; // [rsp+E0h] [rbp-A8h]
  __int64 v129; // [rsp+F0h] [rbp-98h]
  _QWORD v130[10]; // [rsp+110h] [rbp-78h] BYREF

  memset(v130, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v130[1]);
  v130[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v130[3]) = 20;
  LOBYTE(v130[6]) = -1;
  v0 = gptiCurrent;
  v121 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 52);
  v122 = v1;
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    Self[2].StackBase = 0LL;
  v3 = *((_QWORD *)v0 + 184);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 1472) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 184) + 1216LL) &= ~0x8000000u;
    *((_QWORD *)v0 + 184) = 0LL;
    *((_DWORD *)v0 + 304) &= ~0x8000000u;
  }
  v4 = *((_QWORD *)v0 + 56);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C0258038 )
    qword_1C0258038(*((_QWORD *)v0 + 56));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 120) |= 0x41u;
  if ( qword_1C0258FC8 )
  {
    v5 = qword_1C0258FC8();
    v6 = -1073741637;
  }
  else
  {
    v6 = -1073741637;
    v5 = -1073741637;
  }
  if ( v5 >= 0 && qword_1C0258FD0 )
    qword_1C0258FD0(v0);
  if ( gpTouchProcessor )
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v0);
  if ( qword_1C0258040 )
    v7 = qword_1C0258040();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0258048 )
    qword_1C0258048(v0);
  if ( qword_1C0258050 )
    v8 = qword_1C0258050();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C0258058 )
    qword_1C0258058();
  if ( qword_1C0258060 )
    v9 = qword_1C0258060();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C0258068 )
    qword_1C0258068();
  v10 = *((_QWORD *)v0 + 56);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 && *(struct tagTHREADINFO **)(v11 + 32) == v0 )
    {
      v12 = qword_1C0258080 ? qword_1C0258080() : -1073741637;
      if ( v12 >= 0 && qword_1C0258088 )
        qword_1C0258088();
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v123, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v13 = *((_QWORD *)v0 + 56);
    v14 = *((_QWORD *)v0 + 52);
    if ( *(_QWORD *)(v13 + 256) == v14 )
    {
      for ( i = *(_QWORD *)(v14 + 320);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 448) != v13);
            i = *(_QWORD *)(i + 656) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v13 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v123);
  }
  if ( (*((_DWORD *)v0 + 304) & 8) != 0 )
  {
    v16 = qword_1C0258090 ? qword_1C0258090() : -1073741637;
    if ( v16 >= 0 && qword_1C0258098 )
      qword_1C0258098(&gMagnContext, v0, 0LL, 1LL);
  }
  EtwTraceProcessWindowInfo((__int64)v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C024B738 - 1) <= 2u
      || (qword_1C024B720 & 0x8000000000200000uLL) == 0
      || (v17 = 1, (qword_1C024B728 & 0x8000000000200000uLL) != qword_1C024B728) )
    {
      v17 = 0;
    }
    if ( v17 )
    {
      v118 = 0;
      v117 = 0;
      v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      v20 = *((_DWORD *)v0 + 290) != 0 ? v18 - *((_DWORD *)v0 + 290) : 0;
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 53), v18, &v118, &v117);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v21,
          (unsigned int)&ThreadExitEvent,
          v22,
          ThreadId,
          ThreadInfoFlags,
          v20,
          v118,
          v117);
    }
  }
  if ( (*((_DWORD *)v0 + 120) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay((struct tagQ **)v0);
  }
  v23 = *((_QWORD *)v0 + 158);
  if ( v23 )
  {
    Win32FreePool(v23);
    *((_QWORD *)v0 + 158) = 0LL;
  }
  if ( qword_1C02580A0 )
    v24 = qword_1C02580A0();
  else
    v24 = -1073741637;
  if ( v24 >= 0 && qword_1C02580A8 )
    qword_1C02580A8(v0);
  if ( *((_QWORD *)v0 + 83) )
  {
    v25 = qword_1C02580B0 ? qword_1C02580B0() : -1073741637;
    if ( v25 >= 0 && qword_1C02580B8 )
      qword_1C02580B8(v0);
  }
  v26 = *((_QWORD *)v0 + 83);
  if ( v26 )
  {
    HMAssignmentUnlock(v26 + 16);
    if ( (int)IsEditionRemoveFromMsdListSupported() >= 0 )
      ApiSetEditionRemoveFromMsdList(*((_QWORD *)v0 + 83));
    Win32FreePool(*((_QWORD *)v0 + 83));
    *((_QWORD *)v0 + 83) = 0LL;
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  if ( ProcessWindowStation )
  {
    v126 = 0LL;
    v127 = 0LL;
    if ( qword_1C0257E80 )
      qword_1C0257E80(ProcessWindowStation, &v126, CompositionObject::Release);
    ObfReferenceObject(ProcessWindowStation);
    if ( (struct tagTHREADINFO *)ProcessWindowStation[10] == v0 )
    {
      v28 = qword_1C02580C0 ? qword_1C02580C0() : -1073741637;
      if ( v28 >= 0 && qword_1C02580C8 )
        qword_1C02580C8(ProcessWindowStation);
    }
    if ( (struct tagTHREADINFO *)ProcessWindowStation[11] == v0 )
      ProcessWindowStation[11] = 0LL;
    if ( qword_1C0257F98 )
      qword_1C0257F98(&v126);
  }
  while ( *((_QWORD *)v0 + 75) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v116);
    v30 = (__int64 *)*((_QWORD *)v0 + 75);
    v31 = *v30;
    if ( *v30 != *(_QWORD *)v116[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v116);
      if ( v31 )
      {
        v116[0] = *(_QWORD *)(v31 + 88);
        ++*(_DWORD *)(v116[0] + 8LL);
      }
      else
      {
        v116[0] = &gSmartObjNullRef;
      }
    }
    v115 = v30;
    v32 = (struct tagTHREADINFO *)v30[4];
    if ( gptiCurrent == v32 )
      ++*((_DWORD *)v30 + 10);
    else
      v115 = 0LL;
    if ( v0 != v32 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v115);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v116);
      break;
    }
    v33 = *((_DWORD *)v30 + 2);
    if ( (v33 & 0x100) != 0 )
    {
      if ( qword_1C02580E0 )
        v34 = qword_1C02580E0();
      else
        v34 = -1073741637;
      if ( v34 >= 0 )
      {
        v29 = *(_QWORD *)v116[0];
        if ( qword_1C02580E8 )
          qword_1C02580E8(v30, v29);
      }
LABEL_124:
      if ( v115 )
      {
        *((_DWORD *)v115 + 10) = 0;
        v115 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported(v32, v29) >= 0 && qword_1C02580F8 )
        qword_1C02580F8(v30);
      goto LABEL_129;
    }
    *((_DWORD *)v30 + 2) = v33 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 388LL) &= ~0x100000u;
    if ( qword_1C0258110 )
      v35 = qword_1C0258110();
    else
      v35 = -1073741637;
    if ( v35 >= 0 && qword_1C0258118 )
      qword_1C0258118(*(_QWORD *)v116[0], v30);
    v32 = *(struct tagTHREADINFO **)v116[0];
    if ( (**(_DWORD **)v116[0] & 1) != 0 )
      goto LABEL_124;
    v32 = *(struct tagTHREADINFO **)v116[0];
    if ( (**(_DWORD **)v116[0] & 0x8000) != 0 )
      goto LABEL_124;
    if ( v115 )
    {
      *((_DWORD *)v115 + 10) = 0;
      v115 = 0LL;
    }
    if ( qword_1C0258120 )
      v36 = qword_1C0258120();
    else
      v36 = -1073741637;
    if ( v36 >= 0 )
    {
      v32 = *(struct tagTHREADINFO **)v116[0];
      if ( qword_1C0258128 )
        qword_1C0258128(v32);
    }
    if ( qword_1C0258130 )
      v37 = qword_1C0258130(v32);
    else
      v37 = -1073741637;
    if ( v37 >= 0 && qword_1C0258138 )
      qword_1C0258138(*(_QWORD *)v116[0]);
    v38 = *(_DWORD **)v116[0];
    if ( (**(_DWORD **)v116[0] & 0x40000000) != 0 )
    {
      *v38 &= ~0x20000000u;
    }
    else if ( v38 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C0254B58);
    }
    else
    {
      v39 = *(_QWORD *)v116[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v116[0] + 88LL));
      v40 = *((_QWORD *)gpUserTypeIsolation + 4);
      if ( v40 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v40, v39);
      if ( *(_QWORD *)v116[0] != *v30 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(*(_QWORD *)v116[0]);
      if ( *(_QWORD *)v116[0] == *v30 )
        *v30 = 0LL;
    }
    if ( qword_1C0258100 )
      v41 = qword_1C0258100();
    else
      v41 = -1073741637;
    if ( v41 >= 0 && qword_1C0258108 )
      qword_1C0258108(v0, v30);
LABEL_129:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v115);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v116);
  }
  v42 = *((_QWORD *)v0 + 89);
  if ( v42 )
  {
    HMAssignmentUnlock(v42 + 16);
    HMAssignmentUnlock(*((_QWORD *)v0 + 89) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v0 + 89) + 8LL);
    v43 = *((_QWORD *)gpUserTypeIsolation + 5);
    if ( v43 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v43, *((_QWORD *)v0 + 89));
    *((_QWORD *)v0 + 89) = 0LL;
  }
  v44 = *((_QWORD *)v0 + 52);
  if ( v44 && *(struct tagTHREADINFO **)(v44 + 328) == v0 )
    *(_QWORD *)(v44 + 328) = 0LL;
LABEL_184:
  v47 = *((_QWORD *)v0 + 77);
  while ( v47 )
  {
    if ( qword_1C0258140 )
    {
      v45 = qword_1C0258140();
      v46 = *((_QWORD *)v0 + 77);
    }
    else
    {
      v45 = -1073741637;
      v46 = v47;
    }
    v47 = v46;
    if ( v45 >= 0 && qword_1C0258148 )
    {
      qword_1C0258148(v0);
      goto LABEL_184;
    }
  }
  if ( (*((_DWORD *)v0 + 120) & 0x800) != 0 )
  {
    v124 = 0LL;
    v125 = 0LL;
    v47 = *(_QWORD *)(*((_QWORD *)v0 + 56) + 8LL);
    v48 = *(_QWORD *)(v47 + 24);
    if ( v48 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v124 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v124;
      *((_QWORD *)&v124 + 1) = v48;
      HMLockObject(v48);
      if ( qword_1C0258150 )
        v50 = qword_1C0258150();
      else
        v50 = -1073741637;
      if ( v50 >= 0 && qword_1C0258158 )
        qword_1C0258158(v48);
      ThreadUnlock1();
    }
  }
  v51 = *((_QWORD *)v0 + 52);
  if ( v51 && *(_QWORD *)(v51 + 832) )
  {
    v52 = qword_1C0258160 ? qword_1C0258160() : -1073741637;
    if ( v52 >= 0 && qword_1C0258168 )
      qword_1C0258168(v0);
  }
  if ( *((int *)v0 + 120) < 0 )
  {
    v53 = qword_1C0258170 ? qword_1C0258170() : -1073741637;
    if ( v53 >= 0 && qword_1C0258178 )
      qword_1C0258178(v0);
  }
  if ( *((_QWORD *)v0 + 143) )
  {
    v54 = qword_1C0258180 ? qword_1C0258180() : -1073741637;
    if ( v54 >= 0 && qword_1C0258188 )
      qword_1C0258188(v0);
  }
  v55 = *((_DWORD *)v0 + 304);
  if ( (v55 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 304) = v55 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v47);
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v56 = (void *)*((_QWORD *)v0 + 167);
  if ( v56 )
  {
    CleanupRimDevObjInUserModeCallback(v56);
    *((_QWORD *)v0 + 167) = 0LL;
  }
  v57 = *(struct _ETHREAD **)v0;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v57);
  if ( IsInputThread() )
    UserDeactivateMITInputProcessing((CInputThread *)v59);
  if ( !v1 || *(struct tagTHREADINFO **)(v1 + 320) != v0 || (v60 = 1, *((_QWORD *)v0 + 82)) )
    v60 = 0;
  ThreadInfoFlags = v60;
  if ( v1 )
  {
    v59 = *(unsigned __int16 *)(*((_QWORD *)v0 + 59) + 154LL);
    if ( (_WORD)v59 )
    {
      v58 = *(unsigned __int16 *)(*((_QWORD *)v0 + 59) + 154LL);
      v59 = *(unsigned __int16 *)(v1 + 816);
      if ( (int)v59 >= 0xFFFF - (int)v58 )
      {
        *(_WORD *)(v1 + 816) = -1;
      }
      else
      {
        LOWORD(v59) = v58 + v59;
        *(_WORD *)(v1 + 816) = v59;
      }
    }
    if ( v60
      && *(_WORD *)(v1 + 816)
      && (unsigned int)dword_1C024B250 > 5
      && tlgKeywordOn((__int64)&dword_1C024B250, 0x200000000000LL) )
    {
      v120 = v61;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C024B250,
        (unsigned int)&unk_1C0219F02,
        0,
        v62,
        (__int64)&v120);
    }
  }
  if ( v60 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 820) & 0x200000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v63 = *(_QWORD *)(v1 + 896);
        if ( v63 )
        {
          *(_QWORD *)(v63 + 96) = 0LL;
          v59 = *(_QWORD *)(v63 + 88);
          if ( v59 )
          {
            ZwClose((HANDLE)v59);
            *(_QWORD *)(v63 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v1 + 820) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v59, (const struct tagPROCESSINFO *)v1);
    }
    v59 = *((_QWORD *)v0 + 52);
    if ( gppiFullscreen == v59 && !gbMDEVDisabled )
    {
      xxxUserSetDisplayConfig(0, 0LL, 2191, 4u, 0LL, 0, 0LL, 0LL, 0LL, (__int64)v130);
      v59 = *((_QWORD *)v0 + 52);
    }
    if ( v59 && IsCurrentProcessDwm(v59, v58) )
      xxxDwmProcessShutdown(1u);
  }
  if ( qword_1C0258190 )
    v64 = qword_1C0258190();
  else
    v64 = -1073741637;
  if ( v64 >= 0 && qword_1C0258198 )
    qword_1C0258198(v0);
  if ( *((_DWORD *)v0 + 172) )
  {
    v65 = *((_QWORD *)v0 + 85);
    if ( v65 )
    {
      if ( *(_DWORD *)(v65 + 68) == -1 )
        v66 = *(_QWORD *)(v65 + 56);
      else
        v66 = *(_QWORD *)(v65 + 56)
            + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416)
                        + 8LL * *(int *)(v65 + 68)
                        + 408);
      v67 = *(_DWORD *)(v65 + 48);
    }
    else
    {
      v66 = 0LL;
      v67 = 0;
    }
    TraceLoggingDeadLowLevelHook(v67, v66);
  }
  if ( qword_1C02581A0 )
    v68 = qword_1C02581A0();
  else
    v68 = -1073741637;
  if ( v68 >= 0 && qword_1C02581A8 )
    qword_1C02581A8();
  if ( qword_1C02581B0 )
    v69 = qword_1C02581B0();
  else
    v69 = -1073741637;
  if ( v69 >= 0 && qword_1C02581B8 )
    qword_1C02581B8(v0);
  v70 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v71 = (_QWORD *)*v70;
      if ( (struct tagTHREADINFO *)v70[3] == v0 )
      {
        v72 = qword_1C02581C0 ? qword_1C02581C0() : -1073741637;
        if ( v72 >= 0 )
          FreeHwndList(v70);
      }
      v70 = v71;
    }
    while ( v71 );
  }
  if ( qword_1C02581D0 )
    v73 = qword_1C02581D0();
  else
    v73 = -1073741637;
  if ( v73 >= 0 && qword_1C02581D8 )
    qword_1C02581D8();
  CActivationObjectManager::OnThreadTermination((CActivationObjectManager *)v59);
  DestroyThreadsObjects();
  if ( qword_1C02581E0 )
    v74 = qword_1C02581E0();
  else
    v74 = -1073741637;
  if ( v74 >= 0 && qword_1C02581E8 )
    qword_1C02581E8(v0);
  HMAssignmentUnlock((char *)v0 + 432);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v113, 0);
    CleanupResources();
  }
  if ( v60 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) & 0x1000000) != 0 )
    {
      v75 = *((_QWORD *)v0 + 57);
      if ( v75 )
      {
        if ( *(_QWORD *)(v75 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v75 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( qword_1C0258200 )
      v76 = qword_1C0258200();
    else
      v76 = -1073741637;
    if ( v76 >= 0 && qword_1C0258208 )
      qword_1C0258208(*((_QWORD *)v0 + 52));
    *(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) &= ~0x10000000u;
    v77 = *((_QWORD *)v0 + 59);
    v78 = *(_DWORD **)(v77 + 208);
    if ( v78 )
    {
      ProbeForWrite(*(volatile void **)(v77 + 208), 4uLL, 4u);
      *v78 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 52));
  }
  HMAssignmentUnlock((char *)v0 + 784);
  v79 = *((_QWORD *)v0 + 171);
  if ( v79 )
  {
    Win32FreePool(v79);
    *((_QWORD *)v0 + 171) = 0LL;
  }
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( qword_1C02588B8 )
      v80 = qword_1C02588B8();
    else
      v80 = -1073741637;
    if ( v80 >= 0 && qword_1C02588C0 )
      qword_1C02588C0(v0);
    v79 = *((_QWORD *)v0 + 53);
    *(_DWORD *)(v79 + 384) -= *((_DWORD *)v0 + 188);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 53) + 392LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 56);
      ApiSetEditionSystemGenerateMove(0);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v79);
  v128 = *(_OWORD *)(CurrentProcessWin32Process + 296);
  v129 = *(_QWORD *)(CurrentProcessWin32Process + 312);
  v128 = *((_OWORD *)v0 + 24);
  v129 = *((_QWORD *)v0 + 50);
  v83 = PsGetCurrentProcessWin32Process(v82);
  v84 = (_QWORD *)(v83 + 320);
  v85 = *(struct tagTHREADINFO **)(v83 + 320);
  if ( v85 )
  {
    if ( v85 == v0 )
      goto LABEL_336;
    v86 = *(_QWORD *)(v83 + 320);
    do
    {
      v87 = *(struct tagTHREADINFO **)(v86 + 656);
      v88 = (struct tagTHREADINFO *)v86;
      if ( !v87 )
        break;
      v84 = (_QWORD *)(v86 + 656);
      v86 = *(_QWORD *)(v86 + 656);
      v88 = v87;
    }
    while ( v87 != v0 );
    if ( v88 == v0 )
    {
LABEL_336:
      *v84 = *((_QWORD *)v0 + 82);
      *((_QWORD *)v0 + 82) = 0LL;
    }
  }
  v119 = 0LL;
  LockObjectAssignment((void **)&v119, *((void **)v0 + 56));
  if ( qword_1C0258210 )
    v90 = qword_1C0258210();
  else
    v90 = -1073741637;
  if ( v90 >= 0 && qword_1C0258218 )
    qword_1C0258218(v0);
  if ( *((_DWORD *)v0 + 373) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 373) = 0;
  }
  v91 = *((_QWORD *)v0 + 52);
  if ( v91 )
    --*(_DWORD *)(v91 + 384);
  UninitializeThreadInfoIocp(v0, v89);
  v93 = (void *)*((_QWORD *)v0 + 178);
  if ( v93 )
  {
    ObCloseHandle(v93, 0);
    *((_QWORD *)v0 + 178) = 0LL;
  }
  v94 = (void *)*((_QWORD *)v0 + 90);
  if ( v94 )
  {
    if ( (int)ProtectHandle(v94, v92, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 304) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 90), 1);
    }
    *((_QWORD *)v0 + 90) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( qword_1C0257FE0 )
      v95 = qword_1C0257FE0();
    else
      v95 = -1073741637;
    if ( v95 >= 0 )
    {
      xxxWindowEvent(32773, 0, -4, 0, 4);
      xxxWindowEvent(3, 0, 0, 0, 4);
    }
    v96 = v119;
    if ( *((_QWORD *)v119[1] + 25) && (int)Is_PostMessageSupported() >= 0 )
      PostMessage(*((_QWORD *)v96[1] + 25), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( qword_1C0258240 )
      v6 = qword_1C0258240();
    if ( v6 >= 0 && qword_1C0258248 )
      qword_1C0258248(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v98 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 52) + 320LL);
    if ( !v98 )
      v98 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v98, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 304) & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v0, v97);
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 53), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 53) + 396LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 53), (__int64)v0);
  }
  if ( *((_QWORD *)v0 + 56) )
  {
    v99 = (_QWORD *)((char *)v0 + 736);
    v100 = *((_QWORD *)v0 + 92);
    v101 = (_QWORD *)*((_QWORD *)v0 + 93);
    if ( *(struct tagTHREADINFO **)(v100 + 8) != (struct tagTHREADINFO *)((char *)v0 + 736) || (_QWORD *)*v101 != v99 )
      __fastfail(3u);
    *v101 = v100;
    *(_QWORD *)(v100 + 8) = v101;
    *((_QWORD *)v0 + 93) = (char *)v0 + 736;
    *v99 = v99;
  }
  FreeMessageList((__int64)v0 + 800);
  v102 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v102 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v102 = *j;
      Win32FreePool(j);
    }
    else
    {
      v102 = j;
    }
  }
  MarkThreadsObjects((__int64)v0);
  if ( (struct tagTHREADINFO *)gptiShutdownWaiter == v0 )
    gptiShutdownWaiter = 0LL;
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (struct tagTHREADINFO *)gptiLockUpdate == v0 )
    gptiLockUpdate = 0LL;
  if ( gptiForeground == v0 )
  {
    DisableDelegation(v104);
    if ( qword_1C0258028 )
      qword_1C0258028(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v105 = *((_QWORD *)v0 + 53);
  if ( v105 && !*(_DWORD *)(v105 + 392) )
  {
    if ( gpqForeground == v105 )
    {
      gpqForeground = 0LL;
      v105 = *((_QWORD *)v0 + 53);
    }
    if ( gpqForegroundPrev == v105 )
    {
      gpqForegroundPrev = 0LL;
      v105 = *((_QWORD *)v0 + 53);
    }
    if ( gpqCursor == (struct tagQ *)v105 )
      gpqCursor = 0LL;
  }
  if ( v119 )
  {
    v106 = (char *)*((_QWORD *)v0 + 55);
    if ( v106 )
    {
      if ( v106 != (char *)v0 + 1024 )
      {
        RtlFreeHeap(v119[16], 0, v106);
        *((_QWORD *)v0 + 55) = (char *)v0 + 1024;
      }
    }
  }
  if ( IsInputThread() )
    CInputThread::RevokeThreadAsInput(v107);
  if ( (*((_DWORD *)v0 + 120) & 4) != 0 )
  {
    v108 = *((_QWORD *)v0 + 59);
    if ( v108 )
    {
      Win32FreePool(v108);
      *((_QWORD *)v0 + 59) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v119);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  LOBYTE(v110) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    LOBYTE(v110) = McTemplateK0_EtwWriteTransfer(v109, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v111 = (_QWORD *)*((_QWORD *)v0 + 182);
    if ( !v111 )
      break;
    *((_QWORD *)v0 + 182) = *v111;
    v110 = *(v111 - 1);
    if ( (_UNKNOWN *)v110 != &gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v111 - 1) + 8LL);
      v110 = *(v111 - 1);
      if ( !*(_DWORD *)(v110 + 8) )
      {
        v110 = *(v111 - 1);
        if ( *(_BYTE *)(v110 + 12) )
          LOBYTE(v110) = Win32FreeToPagedLookasideList(gpStackRefLookAside, *(v111 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 304) |= 0x80u;
  return v110;
}
