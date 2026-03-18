/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C00533CC
 * Callers:
 *     UserThreadCallout @ 0x1C004EA50 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C0005580 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0007434 (UserDeactivateMITInputProcessing.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0008E90 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0028818 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0036DD4 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0036EB4 (ProtectHandle.c)
 *     Win32FreeToPagedLookasideList @ 0x1C003C900 (Win32FreeToPagedLookasideList.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C00445C0 (HMLockObject.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C004CFEC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C004F6D8 (ApiSetEditionGetProcessWindowStation.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0051B00 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0051B28 (DestroyThreadsObjects.c)
 *     LockObjectAssignment @ 0x1C0051D60 (LockObjectAssignment.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C0051DBC (IsDestroyThreadsMessagesSupported.c)
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     UnlockObjectAssignment @ 0x1C0052170 (UnlockObjectAssignment.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0054A70 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0056B00 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C0056C20 (MarkThreadsObjects.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00626AC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00626E0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0076294 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     EtwTraceProcessWindowInfo @ 0x1C00827D0 (EtwTraceProcessWindowInfo.c)
 *     IsInputThread @ 0x1C0082F20 (IsInputThread.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0091728 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C009B098 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C00A2120 (FreeMessageList.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C00A83CC (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00AB6A0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C00B1B5C (ApiSetEditionSystemGenerateMove.c)
 *     DisableDelegation @ 0x1C00B4690 (DisableDelegation.c)
 *     CleanupResources @ 0x1C00BC728 (CleanupResources.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00BFAD4 (IsCleanupIAMAccessSupported.c)
 *     EtwTraceInputProcessDelay @ 0x1C00C0400 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C0B90 (EtwTraceMessageCheckDelay.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CE21C (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CE268 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C00CE2B8 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00D2600 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00D2628 (DestroyThreadsMessages.c)
 *     FreeHwndList @ 0x1C00D264C (FreeHwndList.c)
 *     _PostMessage @ 0x1C00D2670 (_PostMessage.c)
 *     xxxWindowEvent @ 0x1C00D2694 (xxxWindowEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0119818 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0120B6C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0120CFC (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0120E14 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0120F2C (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C0120F5C (CleanupRimDevObjInUserModeCallback.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0129608 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C013CD40 (-TraceLoggingDeadLowLevelHook@@YAXI_K@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C0152EC0 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01AD970 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01C7CD4 (ApiSetEditionRemoveFromMsdList.c)
 *     IsEditionRemoveFromMsdListSupported @ 0x1C01F66C8 (IsEditionRemoveFromMsdListSupported.c)
 *     Is_PostMessageSupported @ 0x1C01F67D0 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x1C01F67FC (IsxxxMNEndMenuStateSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r9
  int v66; // r15d
  __int64 v67; // r8
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rbx
  int v71; // eax
  __int64 v72; // rbx
  unsigned __int64 v73; // rdx
  unsigned int v74; // ecx
  int v75; // eax
  int v76; // eax
  _QWORD *v77; // rbx
  _QWORD *v78; // r12
  int v79; // eax
  int v80; // eax
  int v81; // eax
  __int64 v82; // rbx
  int v83; // eax
  __int64 v84; // rax
  _DWORD *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  int v90; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  _QWORD *v97; // rdx
  struct tagTHREADINFO *v98; // rcx
  __int64 v99; // r8
  struct tagTHREADINFO *v100; // rax
  struct tagTHREADINFO *v101; // rcx
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // rax
  int v105; // edx
  void *v106; // rcx
  void *v107; // rcx
  int v108; // eax
  PVOID *v109; // rbx
  struct tagTHREADINFO *v110; // rdx
  struct tagTHREADINFO *v111; // rdx
  _QWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rcx
  void **v115; // rbx
  void **j; // rcx
  __int64 v117; // rcx
  char *v118; // r8
  CInputThread *v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rax
  _QWORD *v123; // rdx
  signed __int32 v125[8]; // [rsp+0h] [rbp-188h] BYREF
  int v126; // [rsp+28h] [rbp-160h]
  int ThreadInfoFlags; // [rsp+50h] [rbp-138h]
  __int64 *v128; // [rsp+58h] [rbp-130h] BYREF
  _QWORD v129[2]; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v130; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v131; // [rsp+74h] [rbp-114h] BYREF
  PVOID *v132; // [rsp+78h] [rbp-110h] BYREF
  int v133; // [rsp+80h] [rbp-108h] BYREF
  struct tagTHREADINFO *v134; // [rsp+88h] [rbp-100h]
  __int64 v135; // [rsp+90h] [rbp-F8h]
  char v136[8]; // [rsp+A8h] [rbp-E0h] BYREF
  __int128 v137; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v138; // [rsp+C0h] [rbp-C8h]
  __int128 v139; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v140; // [rsp+D8h] [rbp-B0h]
  __int128 v141; // [rsp+E0h] [rbp-A8h]
  __int64 v142; // [rsp+F0h] [rbp-98h]
  _QWORD v143[10]; // [rsp+110h] [rbp-78h] BYREF

  memset(v143, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v143[1]);
  v143[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v143[3]) = 20;
  LOBYTE(v143[6]) = -1;
  v0 = gptiCurrent;
  v134 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 53);
  v135 = v1;
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    Self[2].StackBase = 0LL;
  v3 = *((_QWORD *)v0 + 186);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 1488) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 186) + 1232LL) &= ~0x8000000u;
    *((_QWORD *)v0 + 186) = 0LL;
    *((_DWORD *)v0 + 308) &= ~0x8000000u;
  }
  v4 = *((_QWORD *)v0 + 57);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C0250078 )
    qword_1C0250078(*((_QWORD *)v0 + 57));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 122) |= 0x41u;
  if ( qword_1C0251008 )
  {
    v5 = qword_1C0251008();
    v6 = -1073741637;
  }
  else
  {
    v6 = -1073741637;
    v5 = -1073741637;
  }
  if ( v5 >= 0 && qword_1C0251010 )
    qword_1C0251010(v0);
  if ( gpTouchProcessor )
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v0);
  if ( qword_1C0250080 )
    v7 = qword_1C0250080();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0250088 )
    qword_1C0250088(v0);
  if ( qword_1C0250090 )
    v8 = qword_1C0250090();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C0250098 )
    qword_1C0250098();
  if ( qword_1C02500A0 )
    v9 = qword_1C02500A0();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C02500A8 )
    qword_1C02500A8();
  v10 = *((_QWORD *)v0 + 57);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 && *(struct tagTHREADINFO **)(v11 + 32) == v0 )
    {
      v12 = qword_1C02500C0 ? qword_1C02500C0() : -1073741637;
      if ( v12 >= 0 && qword_1C02500C8 )
        qword_1C02500C8();
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v136, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v13 = *((_QWORD *)v0 + 57);
    v14 = *((_QWORD *)v0 + 53);
    if ( *(_QWORD *)(v13 + 256) == v14 )
    {
      for ( i = *(_QWORD *)(v14 + 320);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 456) != v13);
            i = *(_QWORD *)(i + 664) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v13 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v136);
  }
  if ( (*((_DWORD *)v0 + 308) & 8) != 0 )
  {
    v16 = qword_1C02500D0 ? qword_1C02500D0() : -1073741637;
    if ( v16 >= 0 && qword_1C02500D8 )
      qword_1C02500D8(&gMagnContext, v0, 0LL, 1LL);
  }
  EtwTraceProcessWindowInfo(v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C0243738 - 1) <= 2u
      || (qword_1C0243720 & 0x8000000000200000uLL) == 0
      || (v17 = 1, (qword_1C0243728 & 0x8000000000200000uLL) != qword_1C0243728) )
    {
      v17 = 0;
    }
    if ( v17 )
    {
      v131 = 0;
      v130 = 0;
      v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      v20 = *((_DWORD *)v0 + 294) != 0 ? v18 - *((_DWORD *)v0 + 294) : 0;
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 54), v18, &v131, &v130);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v21,
          (unsigned int)&ThreadExitEvent,
          v22,
          ThreadId,
          ThreadInfoFlags,
          v20,
          v131,
          v130);
    }
  }
  if ( (*((_DWORD *)v0 + 122) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v23 = *((_QWORD *)v0 + 160);
  if ( v23 )
  {
    Win32FreePool(v23);
    *((_QWORD *)v0 + 160) = 0LL;
  }
  if ( qword_1C02500E0 )
    v24 = qword_1C02500E0();
  else
    v24 = -1073741637;
  if ( v24 >= 0 && qword_1C02500E8 )
    qword_1C02500E8(v0);
  if ( *((_QWORD *)v0 + 84) )
  {
    v25 = qword_1C02500F0 ? qword_1C02500F0() : -1073741637;
    if ( v25 >= 0 && qword_1C02500F8 )
      qword_1C02500F8(v0);
  }
  v26 = *((_QWORD *)v0 + 84);
  if ( v26 )
  {
    HMAssignmentUnlock(v26 + 16);
    if ( (int)IsEditionRemoveFromMsdListSupported() >= 0 )
      ApiSetEditionRemoveFromMsdList(*((_QWORD *)v0 + 84));
    Win32FreePool(*((_QWORD *)v0 + 84));
    *((_QWORD *)v0 + 84) = 0LL;
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  if ( ProcessWindowStation )
  {
    v139 = 0LL;
    v140 = 0LL;
    if ( qword_1C024FEC0 )
      qword_1C024FEC0(ProcessWindowStation, &v139, CompositionObject::Release);
    ObfReferenceObject(ProcessWindowStation);
    if ( (struct tagTHREADINFO *)ProcessWindowStation[10] == v0 )
    {
      v31 = qword_1C0250100 ? qword_1C0250100() : -1073741637;
      if ( v31 >= 0 && qword_1C0250108 )
        qword_1C0250108(ProcessWindowStation);
    }
    if ( (struct tagTHREADINFO *)ProcessWindowStation[11] == v0 )
      ProcessWindowStation[11] = 0LL;
    if ( qword_1C024FFD8 )
      qword_1C024FFD8(&v139);
  }
  while ( *((_QWORD *)v0 + 76) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v129);
    v33 = (__int64 *)*((_QWORD *)v0 + 76);
    v34 = *v33;
    if ( *v33 != *(_QWORD *)v129[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v129);
      if ( v34 )
      {
        v129[0] = *(_QWORD *)(v34 + 88);
        ++*(_DWORD *)(v129[0] + 8LL);
      }
      else
      {
        v129[0] = &gSmartObjNullRef;
      }
    }
    v128 = v33;
    v35 = (struct tagTHREADINFO *)v33[4];
    if ( gptiCurrent == v35 )
      ++*((_DWORD *)v33 + 10);
    else
      v128 = 0LL;
    if ( v0 != v35 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v128);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v129);
      break;
    }
    v36 = *((_DWORD *)v33 + 2);
    if ( (v36 & 0x100) != 0 )
    {
      if ( qword_1C0250120 )
        v37 = qword_1C0250120();
      else
        v37 = -1073741637;
      if ( v37 >= 0 )
      {
        v32 = *(_QWORD *)v129[0];
        if ( qword_1C0250128 )
          qword_1C0250128(v33, v32);
      }
LABEL_124:
      if ( v128 )
      {
        *((_DWORD *)v128 + 10) = 0;
        v128 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported(v35, v32) >= 0 && qword_1C0250138 )
        qword_1C0250138(v33);
      goto LABEL_129;
    }
    *((_DWORD *)v33 + 2) = v36 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 54) + 388LL) &= ~0x100000u;
    if ( qword_1C0250150 )
      v38 = qword_1C0250150();
    else
      v38 = -1073741637;
    if ( v38 >= 0 && qword_1C0250158 )
      qword_1C0250158(*(_QWORD *)v129[0], v33);
    v35 = *(struct tagTHREADINFO **)v129[0];
    if ( (**(_DWORD **)v129[0] & 1) != 0 )
      goto LABEL_124;
    v35 = *(struct tagTHREADINFO **)v129[0];
    if ( (**(_DWORD **)v129[0] & 0x8000) != 0 )
      goto LABEL_124;
    if ( v128 )
    {
      *((_DWORD *)v128 + 10) = 0;
      v128 = 0LL;
    }
    if ( qword_1C0250160 )
      v39 = qword_1C0250160();
    else
      v39 = -1073741637;
    if ( v39 >= 0 )
    {
      v35 = *(struct tagTHREADINFO **)v129[0];
      if ( qword_1C0250168 )
        qword_1C0250168(v35);
    }
    if ( qword_1C0250170 )
      v40 = qword_1C0250170(v35);
    else
      v40 = -1073741637;
    if ( v40 >= 0 && qword_1C0250178 )
      qword_1C0250178(*(_QWORD *)v129[0]);
    v41 = *(_DWORD **)v129[0];
    if ( (**(_DWORD **)v129[0] & 0x40000000) != 0 )
    {
      *v41 &= ~0x20000000u;
    }
    else if ( v41 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C024CBC8);
    }
    else
    {
      v42 = *(_QWORD *)v129[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v129[0] + 88LL));
      v46 = *((_QWORD *)gpUserTypeIsolation + 4);
      if ( v46 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v46, v42);
      if ( *(_QWORD *)v129[0] != *v33 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(*(_QWORD *)v129[0], v43, v44, v45);
      if ( *(_QWORD *)v129[0] == *v33 )
        *v33 = 0LL;
    }
    if ( qword_1C0250140 )
      v47 = qword_1C0250140();
    else
      v47 = -1073741637;
    if ( v47 >= 0 && qword_1C0250148 )
      qword_1C0250148(v0, v33);
LABEL_129:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v128);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v129);
  }
  v48 = *((_QWORD *)v0 + 90);
  if ( v48 )
  {
    HMAssignmentUnlock(v48 + 16);
    HMAssignmentUnlock(*((_QWORD *)v0 + 90) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v0 + 90) + 8LL);
    v27 = *((_QWORD *)v0 + 90);
    v49 = *((_QWORD *)gpUserTypeIsolation + 5);
    if ( v49 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v49, v27);
    *((_QWORD *)v0 + 90) = 0LL;
  }
  v50 = *((_QWORD *)v0 + 53);
  if ( v50 && *(struct tagTHREADINFO **)(v50 + 328) == v0 )
    *(_QWORD *)(v50 + 328) = 0LL;
LABEL_184:
  v52 = *((_QWORD *)v0 + 78);
  while ( v52 )
  {
    if ( qword_1C0250180 )
    {
      v51 = qword_1C0250180();
      v27 = *((_QWORD *)v0 + 78);
    }
    else
    {
      v51 = -1073741637;
      v27 = v52;
    }
    v52 = v27;
    if ( v51 >= 0 && qword_1C0250188 )
    {
      qword_1C0250188(v0);
      goto LABEL_184;
    }
  }
  if ( (*((_DWORD *)v0 + 122) & 0x800) != 0 )
  {
    v137 = 0LL;
    v138 = 0LL;
    v52 = *(_QWORD *)(*((_QWORD *)v0 + 57) + 8LL);
    v53 = *(_QWORD *)(v52 + 24);
    if ( v53 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v137 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v137;
      *((_QWORD *)&v137 + 1) = v53;
      HMLockObject(v53);
      if ( qword_1C0250190 )
        v55 = qword_1C0250190();
      else
        v55 = -1073741637;
      if ( v55 >= 0 && qword_1C0250198 )
        qword_1C0250198(v53);
      ThreadUnlock1();
    }
  }
  v56 = *((_QWORD *)v0 + 53);
  if ( v56 && *(_QWORD *)(v56 + 832) )
  {
    v57 = qword_1C02501A0 ? qword_1C02501A0() : -1073741637;
    if ( v57 >= 0 && qword_1C02501A8 )
      qword_1C02501A8(v0);
  }
  if ( *((int *)v0 + 122) < 0 )
  {
    v58 = qword_1C02501B0 ? qword_1C02501B0() : -1073741637;
    if ( v58 >= 0 && qword_1C02501B8 )
      qword_1C02501B8(v0);
  }
  if ( *((_QWORD *)v0 + 145) )
  {
    v59 = qword_1C02501C0 ? qword_1C02501C0() : -1073741637;
    if ( v59 >= 0 && qword_1C02501C8 )
      qword_1C02501C8(v0);
  }
  v60 = *((_DWORD *)v0 + 308);
  if ( (v60 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 308) = v60 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v27, v29, v30);
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v61 = (void *)*((_QWORD *)v0 + 169);
  if ( v61 )
  {
    CleanupRimDevObjInUserModeCallback(v61);
    *((_QWORD *)v0 + 169) = 0LL;
  }
  v62 = *(struct _ETHREAD **)v0;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v62);
  if ( (unsigned __int8)IsInputThread() )
    UserDeactivateMITInputProcessing((CInputThread *)v64);
  if ( !v1 || *(struct tagTHREADINFO **)(v1 + 320) != v0 || (v66 = 1, *((_QWORD *)v0 + 83)) )
    v66 = 0;
  ThreadInfoFlags = v66;
  if ( v1 )
  {
    v64 = *(unsigned __int16 *)(*((_QWORD *)v0 + 60) + 154LL);
    if ( (_WORD)v64 )
    {
      v63 = *(unsigned __int16 *)(*((_QWORD *)v0 + 60) + 154LL);
      v64 = *(unsigned __int16 *)(v1 + 816);
      if ( (int)v64 >= 0xFFFF - (int)v63 )
      {
        *(_WORD *)(v1 + 816) = -1;
      }
      else
      {
        LOWORD(v64) = v63 + v64;
        *(_WORD *)(v1 + 816) = v64;
      }
    }
    if ( v66 )
    {
      v67 = *(unsigned __int16 *)(v1 + 816);
      if ( (_WORD)v67 )
      {
        if ( (unsigned int)dword_1C0243250 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_1C0243250, 0x200000000000LL, v67, v65) )
        {
          v133 = v68;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C0243250,
            (unsigned int)&unk_1C0212392,
            0,
            v69,
            (__int64)&v133);
        }
      }
    }
  }
  if ( v66 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 820) & 0x200000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v70 = *(_QWORD *)(v1 + 896);
        if ( v70 )
        {
          *(_QWORD *)(v70 + 96) = 0LL;
          v64 = *(_QWORD *)(v70 + 88);
          if ( v64 )
          {
            ZwClose((HANDLE)v64);
            *(_QWORD *)(v70 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v1 + 820) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v64, (const struct tagPROCESSINFO *)v1);
    }
    v64 = *((_QWORD *)v0 + 53);
    if ( gppiFullscreen == v64 && !gbMDEVDisabled )
    {
      LOBYTE(v126) = 0;
      xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 4LL, 0LL, v126, 0LL, 0LL, 0LL, v143, ThreadInfoFlags);
      v64 = *((_QWORD *)v0 + 53);
    }
    if ( v64 && IsCurrentProcessDwm(v64, v63) )
      xxxDwmProcessShutdown(1);
  }
  if ( qword_1C02501D0 )
    v71 = qword_1C02501D0();
  else
    v71 = -1073741637;
  if ( v71 >= 0 && qword_1C02501D8 )
    qword_1C02501D8(v0);
  if ( *((_DWORD *)v0 + 174) )
  {
    v72 = *((_QWORD *)v0 + 86);
    if ( v72 )
    {
      if ( *(_DWORD *)(v72 + 68) == -1 )
        v73 = *(_QWORD *)(v72 + 56);
      else
        v73 = *(_QWORD *)(v72 + 56)
            + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424)
                        + 8LL * *(int *)(v72 + 68)
                        + 408);
      v74 = *(_DWORD *)(v72 + 48);
    }
    else
    {
      v73 = 0LL;
      v74 = 0;
    }
    TraceLoggingDeadLowLevelHook(v74, v73);
  }
  if ( qword_1C02501E0 )
    v75 = qword_1C02501E0();
  else
    v75 = -1073741637;
  if ( v75 >= 0 && qword_1C02501E8 )
    qword_1C02501E8();
  if ( qword_1C02501F0 )
    v76 = qword_1C02501F0();
  else
    v76 = -1073741637;
  if ( v76 >= 0 && qword_1C02501F8 )
    qword_1C02501F8(v0);
  v77 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v78 = (_QWORD *)*v77;
      if ( (struct tagTHREADINFO *)v77[3] == v0 )
      {
        v79 = qword_1C0250200 ? qword_1C0250200() : -1073741637;
        if ( v79 >= 0 )
          FreeHwndList(v77);
      }
      v77 = v78;
    }
    while ( v78 );
  }
  if ( qword_1C0250210 )
    v80 = qword_1C0250210();
  else
    v80 = -1073741637;
  if ( v80 >= 0 && qword_1C0250218 )
    qword_1C0250218();
  CActivationObjectManager::OnThreadTermination((CActivationObjectManager *)v64);
  DestroyThreadsObjects();
  if ( qword_1C0250220 )
    v81 = qword_1C0250220();
  else
    v81 = -1073741637;
  if ( v81 >= 0 && qword_1C0250228 )
    qword_1C0250228(v0);
  HMAssignmentUnlock((char *)v0 + 440);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v125, 0);
    CleanupResources();
  }
  if ( v66 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) & 0x1000000) != 0 )
    {
      v82 = *((_QWORD *)v0 + 58);
      if ( v82 )
      {
        if ( *(_QWORD *)(v82 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v82 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( qword_1C0250240 )
      v83 = qword_1C0250240();
    else
      v83 = -1073741637;
    if ( v83 >= 0 && qword_1C0250248 )
      qword_1C0250248(*((_QWORD *)v0 + 53));
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x10000000u;
    v84 = *((_QWORD *)v0 + 60);
    v85 = *(_DWORD **)(v84 + 208);
    if ( v85 )
    {
      ProbeForWrite(*(volatile void **)(v84 + 208), 4uLL, 4u);
      *v85 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 53));
  }
  HMAssignmentUnlock((char *)v0 + 792);
  v89 = *((_QWORD *)v0 + 173);
  if ( v89 )
  {
    Win32FreePool(v89);
    *((_QWORD *)v0 + 173) = 0LL;
  }
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( qword_1C02508F8 )
      v90 = qword_1C02508F8();
    else
      v90 = -1073741637;
    if ( v90 >= 0 && qword_1C0250900 )
      qword_1C0250900(v0);
    v89 = *((_QWORD *)v0 + 54);
    *(_DWORD *)(v89 + 384) -= *((_DWORD *)v0 + 190);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 54) + 392LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 57);
      ApiSetEditionSystemGenerateMove(0LL);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v89, v86, v87, v88);
  v141 = *(_OWORD *)(CurrentProcessWin32Process + 296);
  v142 = *(_QWORD *)(CurrentProcessWin32Process + 312);
  v141 = *(_OWORD *)((char *)v0 + 392);
  v142 = *((_QWORD *)v0 + 51);
  v96 = PsGetCurrentProcessWin32Process(v93, v92, v94, v95);
  v97 = (_QWORD *)(v96 + 320);
  v98 = *(struct tagTHREADINFO **)(v96 + 320);
  if ( v98 )
  {
    if ( v98 == v0 )
      goto LABEL_336;
    v99 = *(_QWORD *)(v96 + 320);
    do
    {
      v100 = *(struct tagTHREADINFO **)(v99 + 664);
      v101 = (struct tagTHREADINFO *)v99;
      if ( !v100 )
        break;
      v97 = (_QWORD *)(v99 + 664);
      v99 = *(_QWORD *)(v99 + 664);
      v101 = v100;
    }
    while ( v100 != v0 );
    if ( v101 == v0 )
    {
LABEL_336:
      *v97 = *((_QWORD *)v0 + 83);
      *((_QWORD *)v0 + 83) = 0LL;
    }
  }
  v132 = 0LL;
  LockObjectAssignment((void **)&v132, *((void **)v0 + 57));
  if ( qword_1C0250250 )
    v103 = qword_1C0250250();
  else
    v103 = -1073741637;
  if ( v103 >= 0 && qword_1C0250258 )
    qword_1C0250258(v0);
  if ( *((_DWORD *)v0 + 377) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 377) = 0;
  }
  v104 = *((_QWORD *)v0 + 53);
  if ( v104 )
    --*(_DWORD *)(v104 + 384);
  UninitializeThreadInfoIocp(v0, v102);
  v106 = (void *)*((_QWORD *)v0 + 180);
  if ( v106 )
  {
    ObCloseHandle(v106, 0);
    *((_QWORD *)v0 + 180) = 0LL;
  }
  v107 = (void *)*((_QWORD *)v0 + 91);
  if ( v107 )
  {
    if ( (int)ProtectHandle(v107, v105, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 308) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 91), 1);
    }
    *((_QWORD *)v0 + 91) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( qword_1C0250020 )
      v108 = qword_1C0250020();
    else
      v108 = -1073741637;
    if ( v108 >= 0 )
    {
      xxxWindowEvent(32773, 0, -4, 0, 4);
      xxxWindowEvent(3, 0, 0, 0, 4);
    }
    v109 = v132;
    if ( *((_QWORD *)v132[1] + 25) && (int)Is_PostMessageSupported() >= 0 )
      PostMessage(*((_QWORD *)v109[1] + 25), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( qword_1C0250280 )
      v6 = qword_1C0250280();
    if ( v6 >= 0 && qword_1C0250288 )
      qword_1C0250288(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v111 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 53) + 320LL);
    if ( !v111 )
      v111 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v111, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 308) & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v0, v110);
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 54), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 54) + 396LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 54), (__int64)v0);
  }
  if ( *((_QWORD *)v0 + 57) )
  {
    v112 = (_QWORD *)((char *)v0 + 744);
    v113 = *((_QWORD *)v0 + 93);
    v114 = (_QWORD *)*((_QWORD *)v0 + 94);
    if ( *(struct tagTHREADINFO **)(v113 + 8) != (struct tagTHREADINFO *)((char *)v0 + 744) || (_QWORD *)*v114 != v112 )
      __fastfail(3u);
    *v114 = v113;
    *(_QWORD *)(v113 + 8) = v114;
    *((_QWORD *)v0 + 94) = (char *)v0 + 744;
    *v112 = v112;
  }
  FreeMessageList((char *)v0 + 808);
  v115 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v115 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v115 = *j;
      Win32FreePool(j);
    }
    else
    {
      v115 = j;
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
    DisableDelegation();
    if ( qword_1C0250068 )
      qword_1C0250068(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v117 = *((_QWORD *)v0 + 54);
  if ( v117 && !*(_DWORD *)(v117 + 392) )
  {
    if ( gpqForeground == v117 )
    {
      gpqForeground = 0LL;
      v117 = *((_QWORD *)v0 + 54);
    }
    if ( gpqForegroundPrev == v117 )
    {
      gpqForegroundPrev = 0LL;
      v117 = *((_QWORD *)v0 + 54);
    }
    if ( gpqCursor == (struct tagQ *)v117 )
      gpqCursor = 0LL;
  }
  if ( v132 )
  {
    v118 = (char *)*((_QWORD *)v0 + 56);
    if ( v118 )
    {
      if ( v118 != (char *)v0 + 1040 )
      {
        RtlFreeHeap(v132[16], 0, v118);
        *((_QWORD *)v0 + 56) = (char *)v0 + 1040;
      }
    }
  }
  if ( (unsigned __int8)IsInputThread() )
    CInputThread::RevokeThreadAsInput(v119);
  if ( (*((_DWORD *)v0 + 122) & 4) != 0 )
  {
    v120 = *((_QWORD *)v0 + 60);
    if ( v120 )
    {
      Win32FreePool(v120);
      *((_QWORD *)v0 + 60) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v132);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  LOBYTE(v122) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    LOBYTE(v122) = McTemplateK0_EtwWriteTransfer(v121, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v123 = (_QWORD *)*((_QWORD *)v0 + 184);
    if ( !v123 )
      break;
    *((_QWORD *)v0 + 184) = *v123;
    v122 = *(v123 - 1);
    if ( (_UNKNOWN *)v122 != &gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v123 - 1) + 8LL);
      v122 = *(v123 - 1);
      if ( !*(_DWORD *)(v122 + 8) )
      {
        v122 = *(v123 - 1);
        if ( *(_BYTE *)(v122 + 12) )
          LOBYTE(v122) = (unsigned __int8)Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, *(v123 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 308) |= 0x80u;
  return v122;
}
