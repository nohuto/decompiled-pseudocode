/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0074C34
 * Callers:
 *     UserThreadCallout @ 0x1C0072890 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C0005580 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C001B318 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C001B4E8 (UserDeactivateMITInputProcessing.c)
 *     IsInputThread @ 0x1C001F250 (IsInputThread.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0027A88 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C003B8A8 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C003FB40 (FreeMessageList.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0046ECC (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C004A490 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C005109C (ApiSetEditionSystemGenerateMove.c)
 *     DisableDelegation @ 0x1C0054000 (DisableDelegation.c)
 *     CleanupResources @ 0x1C005C278 (CleanupResources.c)
 *     IsCleanupIAMAccessSupported @ 0x1C005F7B4 (IsCleanupIAMAccessSupported.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006011C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0071C74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0071CB4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00762E0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0076340 (HMAssignmentUnlock.c)
 *     UnlockObjectAssignment @ 0x1C0076460 (UnlockObjectAssignment.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C0076808 (IsDestroyThreadsMessagesSupported.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0076834 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0076AA0 (ProtectHandle.c)
 *     LockObjectAssignment @ 0x1C0076B50 (LockObjectAssignment.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0076BB0 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0077098 (ApiSetEditionGetProcessWindowStation.c)
 *     EtwTraceProcessWindowInfo @ 0x1C0077800 (EtwTraceProcessWindowInfo.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0077838 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C00778E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0078070 (EtwTraceMessageCheckDelay.c)
 *     Win32FreeToPagedLookasideList @ 0x1C00810E0 (Win32FreeToPagedLookasideList.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C008B310 (HMLockObject.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0092C6C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00953E0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C0095500 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C00955C0 (DestroyThreadsObjects.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AC874 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CEA50 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CEA9C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C00CEAEC (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00D26E0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00D2758 (DestroyThreadsMessages.c)
 *     FreeHwndList @ 0x1C00D277C (FreeHwndList.c)
 *     _PostMessage @ 0x1C00D27A0 (_PostMessage.c)
 *     xxxWindowEvent @ 0x1C00D27C4 (xxxWindowEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C011BB58 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0122EBC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C012304C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0123164 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C012327C (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C01232AC (CleanupRimDevObjInUserModeCallback.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C012B958 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C013F090 (-TraceLoggingDeadLowLevelHook@@YAXI_K@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C0155420 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01AFCF0 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01CA054 (ApiSetEditionRemoveFromMsdList.c)
 *     IsEditionRemoveFromMsdListSupported @ 0x1C01F7FF8 (IsEditionRemoveFromMsdListSupported.c)
 *     Is_PostMessageSupported @ 0x1C01F8100 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x1C01F812C (IsxxxMNEndMenuStateSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v27; // rdx
  _QWORD *ProcessWindowStation; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 *v33; // rbx
  __int64 v34; // r15
  struct tagTHREADINFO *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 ThreadWin32Thread; // rax
  int v55; // eax
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  void *v61; // rcx
  struct _ETHREAD *v62; // rbx
  CInputThread *v63; // rcx
  int v64; // r15d
  int v65; // edx
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // rbx
  unsigned __int64 v71; // rdx
  unsigned int v72; // ecx
  int v73; // eax
  int v74; // eax
  _QWORD *v75; // rbx
  _QWORD *v76; // r12
  int v77; // eax
  int v78; // eax
  int v79; // eax
  __int64 v80; // rbx
  int v81; // eax
  __int64 v82; // rax
  _DWORD *v83; // rbx
  __int64 v84; // rcx
  int v85; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  _QWORD *v89; // rdx
  struct tagTHREADINFO *v90; // rcx
  __int64 v91; // r8
  struct tagTHREADINFO *v92; // rax
  struct tagTHREADINFO *v93; // rcx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rdx
  void *v97; // rcx
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rbx
  struct tagTHREADINFO *v101; // rdx
  struct tagTHREADINFO *v102; // rdx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rcx
  void **v106; // rbx
  void **j; // rcx
  CCursorClip *v108; // rcx
  __int64 v109; // rcx
  char *v110; // r8
  CInputThread *v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rax
  _QWORD *v115; // rdx
  signed __int32 v117[8]; // [rsp+0h] [rbp-188h] BYREF
  int ThreadInfoFlags; // [rsp+50h] [rbp-138h]
  __int64 *v119; // [rsp+58h] [rbp-130h] BYREF
  _QWORD v120[2]; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v121; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v122; // [rsp+74h] [rbp-114h] BYREF
  __int64 v123; // [rsp+78h] [rbp-110h] BYREF
  int v124; // [rsp+80h] [rbp-108h] BYREF
  struct tagTHREADINFO *v125; // [rsp+88h] [rbp-100h]
  __int64 v126; // [rsp+90h] [rbp-F8h]
  _BYTE v127[8]; // [rsp+A8h] [rbp-E0h] BYREF
  __int128 v128; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v129; // [rsp+C0h] [rbp-C8h]
  __int128 v130; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-B0h]
  __int128 v132; // [rsp+E0h] [rbp-A8h]
  __int64 v133; // [rsp+F0h] [rbp-98h]
  _QWORD v134[10]; // [rsp+110h] [rbp-78h] BYREF

  memset(v134, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v134[1]);
  v134[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v134[3]) = 20;
  LOBYTE(v134[6]) = -1;
  v0 = gptiCurrent;
  v125 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 52);
  v126 = v1;
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    Self[2].StackBase = 0LL;
  v3 = *((_QWORD *)v0 + 185);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 1480) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 185) + 1224LL) &= ~0x8000000u;
    *((_QWORD *)v0 + 185) = 0LL;
    *((_DWORD *)v0 + 306) &= ~0x8000000u;
  }
  v4 = *((_QWORD *)v0 + 56);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C0252078 )
    qword_1C0252078(*((_QWORD *)v0 + 56));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 120) |= 0x41u;
  if ( qword_1C0253008 )
  {
    v5 = qword_1C0253008();
    v6 = -1073741637;
  }
  else
  {
    v6 = -1073741637;
    v5 = -1073741637;
  }
  if ( v5 >= 0 && qword_1C0253010 )
    qword_1C0253010(v0);
  if ( gpTouchProcessor )
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v0);
  if ( qword_1C0252080 )
    v7 = qword_1C0252080();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0252088 )
    qword_1C0252088(v0);
  if ( qword_1C0252090 )
    v8 = qword_1C0252090();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C0252098 )
    qword_1C0252098();
  if ( qword_1C02520A0 )
    v9 = qword_1C02520A0();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C02520A8 )
    qword_1C02520A8();
  v10 = *((_QWORD *)v0 + 56);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 && *(struct tagTHREADINFO **)(v11 + 32) == v0 )
    {
      v12 = qword_1C02520C0 ? qword_1C02520C0() : -1073741637;
      if ( v12 >= 0 && qword_1C02520C8 )
        qword_1C02520C8();
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v127, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
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
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v127);
  }
  if ( (*((_DWORD *)v0 + 306) & 8) != 0 )
  {
    v16 = qword_1C02520D0 ? qword_1C02520D0() : -1073741637;
    if ( v16 >= 0 && qword_1C02520D8 )
      qword_1C02520D8(&gMagnContext, v0, 0LL, 1LL);
  }
  EtwTraceProcessWindowInfo(v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C0245748 - 1) <= 2u
      || (qword_1C0245730 & 0x8000000000200000uLL) == 0
      || (v17 = 1, (qword_1C0245738 & 0x8000000000200000uLL) != qword_1C0245738) )
    {
      v17 = 0;
    }
    if ( v17 )
    {
      v122 = 0;
      v121 = 0;
      v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      v20 = *((_DWORD *)v0 + 292) != 0 ? v18 - *((_DWORD *)v0 + 292) : 0;
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 53), v18, &v122, &v121);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v21,
          (unsigned int)&ThreadExitEvent,
          v22,
          ThreadId,
          ThreadInfoFlags,
          v20,
          v122,
          v121);
    }
  }
  if ( (*((_DWORD *)v0 + 120) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v23 = *((_QWORD *)v0 + 159);
  if ( v23 )
  {
    Win32FreePool(v23);
    *((_QWORD *)v0 + 159) = 0LL;
  }
  if ( qword_1C02520E0 )
    v24 = qword_1C02520E0();
  else
    v24 = -1073741637;
  if ( v24 >= 0 && qword_1C02520E8 )
    qword_1C02520E8(v0);
  if ( *((_QWORD *)v0 + 83) )
  {
    v25 = qword_1C02520F0 ? qword_1C02520F0() : -1073741637;
    if ( v25 >= 0 && qword_1C02520F8 )
      qword_1C02520F8(v0);
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
    v130 = 0LL;
    v131 = 0LL;
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(ProcessWindowStation, &v130, CompositionObject::Release, v30);
    ObfReferenceObject(ProcessWindowStation);
    if ( (struct tagTHREADINFO *)ProcessWindowStation[10] == v0 )
    {
      v31 = qword_1C0252100 ? qword_1C0252100() : -1073741637;
      if ( v31 >= 0 && qword_1C0252108 )
        qword_1C0252108(ProcessWindowStation);
    }
    if ( (struct tagTHREADINFO *)ProcessWindowStation[11] == v0 )
      ProcessWindowStation[11] = 0LL;
    if ( qword_1C0251FD8 )
      qword_1C0251FD8(&v130);
  }
  while ( *((_QWORD *)v0 + 75) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v120);
    v33 = (__int64 *)*((_QWORD *)v0 + 75);
    v34 = *v33;
    if ( *v33 != *(_QWORD *)v120[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v120);
      if ( v34 )
      {
        v120[0] = *(_QWORD *)(v34 + 88);
        ++*(_DWORD *)(v120[0] + 8LL);
      }
      else
      {
        v120[0] = &gSmartObjNullRef;
      }
    }
    v119 = v33;
    v35 = (struct tagTHREADINFO *)v33[4];
    if ( gptiCurrent == v35 )
      ++*((_DWORD *)v33 + 10);
    else
      v119 = 0LL;
    if ( v0 != v35 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v119);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v120);
      break;
    }
    v36 = *((_DWORD *)v33 + 2);
    if ( (v36 & 0x100) != 0 )
    {
      if ( qword_1C0252120 )
        v37 = qword_1C0252120();
      else
        v37 = -1073741637;
      if ( v37 >= 0 )
      {
        v32 = *(_QWORD *)v120[0];
        if ( qword_1C0252128 )
          qword_1C0252128(v33, v32);
      }
LABEL_124:
      if ( v119 )
      {
        *((_DWORD *)v119 + 10) = 0;
        v119 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported(v35, v32) >= 0 && qword_1C0252138 )
        qword_1C0252138(v33);
      goto LABEL_129;
    }
    *((_DWORD *)v33 + 2) = v36 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 388LL) &= ~0x100000u;
    if ( qword_1C0252150 )
      v38 = qword_1C0252150();
    else
      v38 = -1073741637;
    if ( v38 >= 0 && qword_1C0252158 )
      qword_1C0252158(*(_QWORD *)v120[0], v33);
    v35 = *(struct tagTHREADINFO **)v120[0];
    if ( (**(_DWORD **)v120[0] & 1) != 0 )
      goto LABEL_124;
    v35 = *(struct tagTHREADINFO **)v120[0];
    if ( (**(_DWORD **)v120[0] & 0x8000) != 0 )
      goto LABEL_124;
    if ( v119 )
    {
      *((_DWORD *)v119 + 10) = 0;
      v119 = 0LL;
    }
    if ( qword_1C0252160 )
      v39 = qword_1C0252160();
    else
      v39 = -1073741637;
    if ( v39 >= 0 )
    {
      v35 = *(struct tagTHREADINFO **)v120[0];
      if ( qword_1C0252168 )
        qword_1C0252168(v35);
    }
    if ( qword_1C0252170 )
      v40 = qword_1C0252170(v35);
    else
      v40 = -1073741637;
    if ( v40 >= 0 && qword_1C0252178 )
      qword_1C0252178(*(_QWORD *)v120[0]);
    v41 = *(_DWORD **)v120[0];
    if ( (**(_DWORD **)v120[0] & 0x40000000) != 0 )
    {
      *v41 &= ~0x20000000u;
    }
    else if ( v41 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C024EBC8);
    }
    else
    {
      v42 = *(_QWORD *)v120[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v120[0] + 88LL));
      v46 = *((_QWORD *)gpUserTypeIsolation + 4);
      if ( v46 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v46, v42);
      if ( *(_QWORD *)v120[0] != *v33 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(*(_QWORD *)v120[0], v43, v44, v45);
      if ( *(_QWORD *)v120[0] == *v33 )
        *v33 = 0LL;
    }
    if ( qword_1C0252140 )
      v47 = qword_1C0252140();
    else
      v47 = -1073741637;
    if ( v47 >= 0 && qword_1C0252148 )
      qword_1C0252148(v0, v33);
LABEL_129:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v119);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v120);
  }
  v48 = *((_QWORD *)v0 + 89);
  if ( v48 )
  {
    HMAssignmentUnlock(v48 + 16);
    HMAssignmentUnlock(*((_QWORD *)v0 + 89) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v0 + 89) + 8LL);
    v27 = *((_QWORD *)v0 + 89);
    v49 = *((_QWORD *)gpUserTypeIsolation + 5);
    if ( v49 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v49, v27);
    *((_QWORD *)v0 + 89) = 0LL;
  }
  v50 = *((_QWORD *)v0 + 52);
  if ( v50 && *(struct tagTHREADINFO **)(v50 + 328) == v0 )
    *(_QWORD *)(v50 + 328) = 0LL;
LABEL_184:
  v52 = *((_QWORD *)v0 + 77);
  while ( v52 )
  {
    if ( qword_1C0252180 )
    {
      v51 = qword_1C0252180();
      v27 = *((_QWORD *)v0 + 77);
    }
    else
    {
      v51 = -1073741637;
      v27 = v52;
    }
    v52 = v27;
    if ( v51 >= 0 && qword_1C0252188 )
    {
      qword_1C0252188(v0);
      goto LABEL_184;
    }
  }
  if ( (*((_DWORD *)v0 + 120) & 0x800) != 0 )
  {
    v128 = 0LL;
    v129 = 0LL;
    v52 = *(_QWORD *)(*((_QWORD *)v0 + 56) + 8LL);
    v53 = *(_QWORD *)(v52 + 24);
    if ( v53 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v128 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v128;
      *((_QWORD *)&v128 + 1) = v53;
      HMLockObject(v53);
      if ( qword_1C0252190 )
        v55 = qword_1C0252190();
      else
        v55 = -1073741637;
      if ( v55 >= 0 && qword_1C0252198 )
        qword_1C0252198(v53);
      ThreadUnlock1();
    }
  }
  v56 = *((_QWORD *)v0 + 52);
  if ( v56 && *(_QWORD *)(v56 + 832) )
  {
    v57 = qword_1C02521A0 ? qword_1C02521A0() : -1073741637;
    if ( v57 >= 0 && qword_1C02521A8 )
      qword_1C02521A8(v0);
  }
  if ( *((int *)v0 + 120) < 0 )
  {
    v58 = qword_1C02521B0 ? qword_1C02521B0() : -1073741637;
    if ( v58 >= 0 && qword_1C02521B8 )
      qword_1C02521B8(v0);
  }
  if ( *((_QWORD *)v0 + 144) )
  {
    v59 = qword_1C02521C0 ? qword_1C02521C0() : -1073741637;
    if ( v59 >= 0 && qword_1C02521C8 )
      qword_1C02521C8(v0);
  }
  v60 = *((_DWORD *)v0 + 306);
  if ( (v60 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 306) = v60 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v27, v29, v30);
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v61 = (void *)*((_QWORD *)v0 + 168);
  if ( v61 )
  {
    CleanupRimDevObjInUserModeCallback(v61);
    *((_QWORD *)v0 + 168) = 0LL;
  }
  v62 = *(struct _ETHREAD **)v0;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v62);
  if ( IsInputThread() )
    UserDeactivateMITInputProcessing(v63);
  if ( !v1 || *(struct tagTHREADINFO **)(v1 + 320) != v0 || (v64 = 1, *((_QWORD *)v0 + 82)) )
    v64 = 0;
  ThreadInfoFlags = v64;
  if ( v1 )
  {
    v63 = (CInputThread *)*(unsigned __int16 *)(*((_QWORD *)v0 + 59) + 154LL);
    if ( (_WORD)v63 )
    {
      v65 = *(unsigned __int16 *)(*((_QWORD *)v0 + 59) + 154LL);
      v63 = (CInputThread *)*(unsigned __int16 *)(v1 + 816);
      if ( (int)v63 >= 0xFFFF - v65 )
      {
        *(_WORD *)(v1 + 816) = -1;
      }
      else
      {
        LOWORD(v63) = v65 + (_WORD)v63;
        *(_WORD *)(v1 + 816) = (_WORD)v63;
      }
    }
    if ( v64
      && *(_WORD *)(v1 + 816)
      && (unsigned int)dword_1C0245250 > 5
      && tlgKeywordOn((__int64)&dword_1C0245250, 0x200000000000LL) )
    {
      v124 = v66;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C0245250,
        (unsigned int)&unk_1C0214392,
        0,
        v67,
        (__int64)&v124);
    }
  }
  if ( v64 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 820) & 0x200000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v68 = *(_QWORD *)(v1 + 896);
        if ( v68 )
        {
          *(_QWORD *)(v68 + 96) = 0LL;
          v63 = *(CInputThread **)(v68 + 88);
          if ( v63 )
          {
            ZwClose(v63);
            *(_QWORD *)(v68 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v1 + 820) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces(v63, (const struct tagPROCESSINFO *)v1);
    }
    v63 = (CInputThread *)*((_QWORD *)v0 + 52);
    if ( (CInputThread *)gppiFullscreen == v63 && !gbMDEVDisabled )
    {
      xxxUserSetDisplayConfig(0, 0LL, 2191, 4u, 0LL, 0, 0LL, 0LL, 0LL, (__int64)v134);
      v63 = (CInputThread *)*((_QWORD *)v0 + 52);
    }
    if ( v63 && (unsigned int)IsCurrentProcessDwm() )
      xxxDwmProcessShutdown(1u);
  }
  if ( qword_1C02521D0 )
    v69 = qword_1C02521D0();
  else
    v69 = -1073741637;
  if ( v69 >= 0 && qword_1C02521D8 )
    qword_1C02521D8(v0);
  if ( *((_DWORD *)v0 + 172) )
  {
    v70 = *((_QWORD *)v0 + 85);
    if ( v70 )
    {
      if ( *(_DWORD *)(v70 + 68) == -1 )
        v71 = *(_QWORD *)(v70 + 56);
      else
        v71 = *(_QWORD *)(v70 + 56)
            + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416)
                        + 8LL * *(int *)(v70 + 68)
                        + 408);
      v72 = *(_DWORD *)(v70 + 48);
    }
    else
    {
      v71 = 0LL;
      v72 = 0;
    }
    TraceLoggingDeadLowLevelHook(v72, v71);
  }
  if ( qword_1C02521E0 )
    v73 = qword_1C02521E0();
  else
    v73 = -1073741637;
  if ( v73 >= 0 && qword_1C02521E8 )
    qword_1C02521E8();
  if ( qword_1C02521F0 )
    v74 = qword_1C02521F0();
  else
    v74 = -1073741637;
  if ( v74 >= 0 && qword_1C02521F8 )
    qword_1C02521F8(v0);
  v75 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v76 = (_QWORD *)*v75;
      if ( (struct tagTHREADINFO *)v75[3] == v0 )
      {
        v77 = qword_1C0252200 ? qword_1C0252200() : -1073741637;
        if ( v77 >= 0 )
          FreeHwndList(v75);
      }
      v75 = v76;
    }
    while ( v76 );
  }
  if ( qword_1C0252210 )
    v78 = qword_1C0252210();
  else
    v78 = -1073741637;
  if ( v78 >= 0 && qword_1C0252218 )
    qword_1C0252218();
  CActivationObjectManager::OnThreadTermination(v63);
  DestroyThreadsObjects();
  if ( qword_1C0252220 )
    v79 = qword_1C0252220();
  else
    v79 = -1073741637;
  if ( v79 >= 0 && qword_1C0252228 )
    qword_1C0252228(v0);
  HMAssignmentUnlock((char *)v0 + 432);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v117, 0);
    CleanupResources();
  }
  if ( v64 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) & 0x1000000) != 0 )
    {
      v80 = *((_QWORD *)v0 + 57);
      if ( v80 )
      {
        if ( *(_QWORD *)(v80 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v80 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( qword_1C0252240 )
      v81 = qword_1C0252240();
    else
      v81 = -1073741637;
    if ( v81 >= 0 && qword_1C0252248 )
      qword_1C0252248(*((_QWORD *)v0 + 52));
    *(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) &= ~0x10000000u;
    v82 = *((_QWORD *)v0 + 59);
    v83 = *(_DWORD **)(v82 + 208);
    if ( v83 )
    {
      ProbeForWrite(*(volatile void **)(v82 + 208), 4uLL, 4u);
      *v83 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 52));
  }
  HMAssignmentUnlock((char *)v0 + 784);
  v84 = *((_QWORD *)v0 + 172);
  if ( v84 )
  {
    Win32FreePool(v84);
    *((_QWORD *)v0 + 172) = 0LL;
  }
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( qword_1C02528F8 )
      v85 = qword_1C02528F8();
    else
      v85 = -1073741637;
    if ( v85 >= 0 && qword_1C0252900 )
      qword_1C0252900(v0);
    v84 = *((_QWORD *)v0 + 53);
    *(_DWORD *)(v84 + 384) -= *((_DWORD *)v0 + 188);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 53) + 392LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 56);
      ApiSetEditionSystemGenerateMove(0);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v84);
  v132 = *(_OWORD *)(CurrentProcessWin32Process + 296);
  v133 = *(_QWORD *)(CurrentProcessWin32Process + 312);
  v132 = *((_OWORD *)v0 + 24);
  v133 = *((_QWORD *)v0 + 50);
  v88 = PsGetCurrentProcessWin32Process(v87);
  v89 = (_QWORD *)(v88 + 320);
  v90 = *(struct tagTHREADINFO **)(v88 + 320);
  if ( v90 )
  {
    if ( v90 == v0 )
      goto LABEL_336;
    v91 = *(_QWORD *)(v88 + 320);
    do
    {
      v92 = *(struct tagTHREADINFO **)(v91 + 656);
      v93 = (struct tagTHREADINFO *)v91;
      if ( !v92 )
        break;
      v89 = (_QWORD *)(v91 + 656);
      v91 = *(_QWORD *)(v91 + 656);
      v93 = v92;
    }
    while ( v92 != v0 );
    if ( v93 == v0 )
    {
LABEL_336:
      *v89 = *((_QWORD *)v0 + 82);
      *((_QWORD *)v0 + 82) = 0LL;
    }
  }
  v123 = 0LL;
  LockObjectAssignment(&v123, *((_QWORD *)v0 + 56));
  if ( qword_1C0252250 )
    v94 = qword_1C0252250();
  else
    v94 = -1073741637;
  if ( v94 >= 0 && qword_1C0252258 )
    qword_1C0252258(v0);
  if ( *((_DWORD *)v0 + 375) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 375) = 0;
  }
  v95 = *((_QWORD *)v0 + 52);
  if ( v95 )
    --*(_DWORD *)(v95 + 384);
  UninitializeThreadInfoIocp(v0);
  v97 = (void *)*((_QWORD *)v0 + 179);
  if ( v97 )
  {
    ObCloseHandle(v97, 0);
    *((_QWORD *)v0 + 179) = 0LL;
  }
  v98 = *((_QWORD *)v0 + 90);
  if ( v98 )
  {
    if ( (int)ProtectHandle(v98, v96, ExEventObjectType, 0LL) >= 0 && (*((_DWORD *)v0 + 306) & 0x1000000) == 0 )
      ObCloseHandle(*((HANDLE *)v0 + 90), 1);
    *((_QWORD *)v0 + 90) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( qword_1C0252020 )
      v99 = qword_1C0252020();
    else
      v99 = -1073741637;
    if ( v99 >= 0 )
    {
      xxxWindowEvent(32773, 0, -4, 0, 4);
      xxxWindowEvent(3, 0, 0, 0, 4);
    }
    v100 = v123;
    if ( *(_QWORD *)(*(_QWORD *)(v123 + 8) + 200LL) && (int)Is_PostMessageSupported() >= 0 )
      PostMessage(*(_QWORD *)(*(_QWORD *)(v100 + 8) + 200LL), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( qword_1C0252280 )
      v6 = qword_1C0252280();
    if ( v6 >= 0 && qword_1C0252288 )
      qword_1C0252288(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v102 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 52) + 320LL);
    if ( !v102 )
      v102 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v102, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 306) & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v0, v101);
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 53), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 53) + 396LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 53), v0);
  }
  if ( *((_QWORD *)v0 + 56) )
  {
    v103 = (_QWORD *)((char *)v0 + 736);
    v104 = *((_QWORD *)v0 + 92);
    v105 = (_QWORD *)*((_QWORD *)v0 + 93);
    if ( *(struct tagTHREADINFO **)(v104 + 8) != (struct tagTHREADINFO *)((char *)v0 + 736) || (_QWORD *)*v105 != v103 )
      __fastfail(3u);
    *v105 = v104;
    *(_QWORD *)(v104 + 8) = v105;
    *((_QWORD *)v0 + 93) = (char *)v0 + 736;
    *v103 = v103;
  }
  FreeMessageList((__int64)v0 + 800);
  v106 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v106 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v106 = *j;
      Win32FreePool(j);
    }
    else
    {
      v106 = j;
    }
  }
  MarkThreadsObjects(v0);
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
    DisableDelegation(v108);
    if ( qword_1C0252068 )
      qword_1C0252068(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v109 = *((_QWORD *)v0 + 53);
  if ( v109 && !*(_DWORD *)(v109 + 392) )
  {
    if ( gpqForeground == v109 )
    {
      gpqForeground = 0LL;
      v109 = *((_QWORD *)v0 + 53);
    }
    if ( gpqForegroundPrev == v109 )
    {
      gpqForegroundPrev = 0LL;
      v109 = *((_QWORD *)v0 + 53);
    }
    if ( gpqCursor == (struct tagQ *)v109 )
      gpqCursor = 0LL;
  }
  if ( v123 )
  {
    v110 = (char *)*((_QWORD *)v0 + 55);
    if ( v110 )
    {
      if ( v110 != (char *)v0 + 1032 )
      {
        RtlFreeHeap(*(PVOID *)(v123 + 128), 0, v110);
        *((_QWORD *)v0 + 55) = (char *)v0 + 1032;
      }
    }
  }
  if ( IsInputThread() )
    CInputThread::RevokeThreadAsInput(v111);
  if ( (*((_DWORD *)v0 + 120) & 4) != 0 )
  {
    v112 = *((_QWORD *)v0 + 59);
    if ( v112 )
    {
      Win32FreePool(v112);
      *((_QWORD *)v0 + 59) = 0LL;
    }
  }
  UnlockObjectAssignment(&v123);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  LOBYTE(v114) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    LOBYTE(v114) = McTemplateK0_EtwWriteTransfer(v113, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v115 = (_QWORD *)*((_QWORD *)v0 + 183);
    if ( !v115 )
      break;
    *((_QWORD *)v0 + 183) = *v115;
    v114 = *(v115 - 1);
    if ( (_UNKNOWN *)v114 != &gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v115 - 1) + 8LL);
      v114 = *(v115 - 1);
      if ( !*(_DWORD *)(v114 + 8) )
      {
        v114 = *(v115 - 1);
        if ( *(_BYTE *)(v114 + 12) )
          LOBYTE(v114) = Win32FreeToPagedLookasideList(gpStackRefLookAside, *(v115 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 306) |= 0x80u;
  return v114;
}
