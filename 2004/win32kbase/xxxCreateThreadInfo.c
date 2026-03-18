/*
 * XREFs of xxxCreateThreadInfo @ 0x1C0072F8C
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C002C58C (-UserInitialize@@YAJXZ.c)
 *     UserThreadCallout @ 0x1C0072890 (UserThreadCallout.c)
 * Callees:
 *     SetUnavailableInputSource @ 0x1C0026F70 (SetUnavailableInputSource.c)
 *     CloseProtectedHandle @ 0x1C0029104 (CloseProtectedHandle.c)
 *     PushW32ThreadLock @ 0x1C0030B70 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0030EBC (PopAndFreeAlwaysW32ThreadLock.c)
 *     InitClientInfo @ 0x1C0031274 (InitClientInfo.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0041C70 (PopAndFreeW32ThreadLock.c)
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C0056338 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C0056364 (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C005D420 (-ParseReserved@@YAKPEBG0@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C005ED70 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C005EDEC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C006E3C8 (ApiSetEditionUpdateRawMouseMode.c)
 *     RtlGetExpWinVer @ 0x1C0074170 (RtlGetExpWinVer.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00762E0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C0076808 (IsDestroyThreadsMessagesSupported.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0076914 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0076AA0 (ProtectHandle.c)
 *     LockObjectAssignment @ 0x1C0076B50 (LockObjectAssignment.c)
 *     ValidateHmonitor @ 0x1C0078CD0 (ValidateHmonitor.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0092C6C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     AllocQueue @ 0x1C00ACEB0 (AllocQueue.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C00AE4A4 (IszzzCalcStartCursorHideSupported.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     zzzCalcStartCursorHide @ 0x1C00AE590 (zzzCalcStartCursorHide.c)
 *     DestroyThreadsMessages @ 0x1C00D2758 (DestroyThreadsMessages.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0122F04 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C01289FC (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C012A45C (McTemplateK0dq_EtwWriteTransfer.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C01CA6EC (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01CA7C8 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 *     IsSetForegroundPrioritySupported @ 0x1C01F80A8 (IsSetForegroundPrioritySupported.c)
 *     SetForegroundPriority @ 0x1C01F8224 (SetForegroundPriority.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  PEPROCESS ThreadProcess; // rsi
  __int64 v3; // rcx
  struct _NT_TIB *Self; // r13
  int v5; // r15d
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessPeb; // r8
  __int64 v8; // r9
  unsigned int *v9; // rdx
  __int64 v10; // rcx
  const void *v11; // rsi
  ULONG64 v12; // rdx
  _BYTE **v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  ULONG64 v18; // r8
  ULONG64 v19; // rdx
  _BYTE **v20; // rax
  __int64 CurrentProcessWin32Process; // r14
  int v22; // esi
  __int64 v23; // rcx
  __int128 *v24; // rcx
  __int128 *v25; // rcx
  __int64 v26; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  int v28; // eax
  int v29; // r12d
  int v30; // eax
  HANDLE *v32; // r15
  NTSTATUS Event; // esi
  HANDLE v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  int v37; // eax
  int v38; // eax
  _QWORD *v39; // r13
  __int64 v40; // r15
  __int64 v41; // rax
  _DWORD *v42; // r15
  int v43; // eax
  LeaveEnterCrit *v44; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r9
  PVOID v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r15
  int v53; // eax
  int v54; // r15d
  __int64 ProcessWin32Process; // rax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // edx
  __int64 v59; // rcx
  int v60; // ecx
  int v61; // ecx
  int v62; // eax
  int v63; // eax
  struct _EPROCESS *Process; // [rsp+40h] [rbp-1F8h]
  HANDLE Handle; // [rsp+48h] [rbp-1F0h] BYREF
  struct tagDESKTOP *v67; // [rsp+50h] [rbp-1E8h]
  HANDLE v68; // [rsp+58h] [rbp-1E0h] BYREF
  _BYTE v69[8]; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-1D0h]
  _QWORD v71[10]; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD *v72; // [rsp+C0h] [rbp-178h]
  PVOID Object; // [rsp+C8h] [rbp-170h] BYREF
  _QWORD *v74; // [rsp+D0h] [rbp-168h]
  PVOID v75; // [rsp+D8h] [rbp-160h] BYREF
  _BYTE v76[8]; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v77; // [rsp+E8h] [rbp-150h] BYREF
  __int128 v78; // [rsp+F8h] [rbp-140h]
  __int128 v79; // [rsp+108h] [rbp-130h] BYREF
  __int64 v80; // [rsp+118h] [rbp-120h]
  __int128 v81; // [rsp+120h] [rbp-118h] BYREF
  __int64 v82; // [rsp+130h] [rbp-108h]
  __int128 v83; // [rsp+140h] [rbp-F8h]
  __int128 v84; // [rsp+150h] [rbp-E8h]
  __int128 v85; // [rsp+160h] [rbp-D8h]
  __int128 v86; // [rsp+170h] [rbp-C8h]
  __int128 v87; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v88; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v89; // [rsp+1C0h] [rbp-78h] BYREF
  _OWORD v90[2]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v91; // [rsp+1F0h] [rbp-48h]
  char v92; // [rsp+248h] [rbp+10h] BYREF
  int v93; // [rsp+250h] [rbp+18h]
  int v94; // [rsp+258h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v71, 0, 0x48uLL);
  v67 = 0LL;
  Handle = 0LL;
  v68 = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v70 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v3, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v3) )
  {
    ++gdwGuiThreads;
    v5 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v5 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread);
    *(_QWORD *)(ThreadWin32Thread + 384) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 392) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 400) = 0;
    *(_QWORD *)(ThreadWin32Thread + 536) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 544) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 552) = 0;
    *(_QWORD *)(ThreadWin32Thread + 840) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 848) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 856) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1464) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 520) = ThreadWin32Thread + 512;
    *(_QWORD *)(ThreadWin32Thread + 512) = ThreadWin32Thread + 512;
    *(_QWORD *)(ThreadWin32Thread + 1216) = ThreadWin32Thread + 1208;
    *(_QWORD *)(ThreadWin32Thread + 1208) = ThreadWin32Thread + 1208;
    *(_QWORD *)(ThreadWin32Thread + 744) = ThreadWin32Thread + 736;
    *(_QWORD *)(ThreadWin32Thread + 736) = ThreadWin32Thread + 736;
    *(_QWORD *)(ThreadWin32Thread + 1088) = ThreadWin32Thread + 1080;
    *(_QWORD *)(ThreadWin32Thread + 1080) = ThreadWin32Thread + 1080;
    *(_DWORD *)(ThreadWin32Thread + 1096) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1144) = ThreadWin32Thread + 1136;
    *(_QWORD *)(ThreadWin32Thread + 1136) = ThreadWin32Thread + 1136;
    *(_BYTE *)(ThreadWin32Thread + 1240) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1376) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 820) = 1;
    *(_DWORD *)(ThreadWin32Thread + 884) = 3;
    ProcessPeb = PsGetProcessPeb(ThreadProcess);
    v72 = *(_QWORD **)(ProcessPeb + 32);
    v74 = v71;
    v71[0] = v72[4];
    v71[1] = v72[5];
    v71[2] = v72[17];
    v71[3] = v72[18];
    v71[4] = *(_QWORD *)((char *)v72 + 164);
    v9 = (unsigned int *)(v72 + 24);
    if ( (unsigned __int64)(v72 + 24) >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v10 = *v9;
    v93 = v10;
    LODWORD(v71[5]) = v10;
    v11 = (const void *)*((_QWORD *)v9 + 1);
    v71[6] = v11;
    if ( !(_WORD)v10 )
    {
      v71[6] = 0LL;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (ULONG64)v11 + (unsigned __int16)v10 + 2;
    v13 = (_BYTE **)MmUserProbeAddress;
    if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v93) )
    {
      if ( (v10 & 1) != 0 )
        goto LABEL_17;
      if ( v12 > (unsigned __int64)v11 )
      {
LABEL_19:
        v14 = Win32AllocPoolWithQuota(LOWORD(v71[5]), 2037674837LL);
        v70 = v14;
        v71[6] = v14;
        if ( !v14 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v14, (__int64)&v81, (__int64)Win32FreePool, v15);
        memmove((void *)v71[6], v11, LOWORD(v71[5]));
LABEL_23:
        v16 = (unsigned int *)(v72 + 26);
        if ( (unsigned __int64)(v72 + 26) >= MmUserProbeAddress )
          v16 = (unsigned int *)MmUserProbeAddress;
        v17 = *v16;
        v93 = v17;
        LODWORD(v71[7]) = v17;
        v18 = *((_QWORD *)v16 + 1);
        v71[8] = v18;
        if ( (v18 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (unsigned __int16)v17 + v18 + 2;
        v20 = (_BYTE **)MmUserProbeAddress;
        if ( v19 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v93) )
        {
          if ( (v17 & 1) != 0 )
            goto LABEL_32;
          if ( v19 > v18 )
            goto LABEL_34;
        }
        if ( (v17 & 1) == 0 )
        {
LABEL_33:
          **v20 = 0;
LABEL_34:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
          v22 = v5 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v22 = v5;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
            v22 |= 0x2000000u;
          if ( (unsigned int)IsCurrentProcessDwm() )
            *(_DWORD *)(ThreadWin32Thread + 1224) |= 4u;
          *(_QWORD *)(ThreadWin32Thread + 340) = 0LL;
          PsGetCurrentProcessWin32Process(v23);
          *(_DWORD *)(ThreadWin32Thread + 328) &= ~4u;
          *(_DWORD *)(ThreadWin32Thread + 480) = v22;
          *(_DWORD *)(ThreadWin32Thread + 1360) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1364) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1352) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1356) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1404) = 0;
          if ( (dword_1C024A3FC & 0x80u) != 0 )
          {
            *(_QWORD *)&v83 = ThreadWin32Thread + 432;
            *((_QWORD *)&v83 + 1) = gspklBaseLayout;
            v87 = v83;
            v24 = &v87;
            goto LABEL_49;
          }
          if ( !gspklGlobalActive )
          {
            if ( gspklBaseLayout )
            {
              *(_QWORD *)&v84 = &gspklGlobalActive;
              *((_QWORD *)&v84 + 1) = gspklBaseLayout;
              v88 = v84;
              v25 = &v88;
LABEL_47:
              HMAssignmentLock(v25);
              goto LABEL_48;
            }
            if ( gspklWinstaLessSessionLayouts )
            {
              *(_QWORD *)&v85 = &gspklGlobalActive;
              *((_QWORD *)&v85 + 1) = gspklWinstaLessSessionLayouts;
              v89 = v85;
              v25 = &v89;
              goto LABEL_47;
            }
          }
LABEL_48:
          *(_QWORD *)&v86 = ThreadWin32Thread + 432;
          *((_QWORD *)&v86 + 1) = gspklGlobalActive;
          v90[0] = v86;
          v24 = v90;
LABEL_49:
          HMAssignmentLock(v24);
          *(_QWORD *)(ThreadWin32Thread + 440) = ThreadWin32Thread + 1032;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x400) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x20u;
          *(_QWORD *)(ThreadWin32Thread + 416) = CurrentProcessWin32Process;
          *(_QWORD *)(ThreadWin32Thread + 656) = *(_QWORD *)(CurrentProcessWin32Process + 320);
          *(_QWORD *)(CurrentProcessWin32Process + 320) = ThreadWin32Thread;
          ++*(_DWORD *)(CurrentProcessWin32Process + 384);
          if ( Self )
            Self[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 472) = (char *)Self + 2048;
          LODWORD(Self[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 236LL) = 0;
          v26 = *(_QWORD *)(ThreadWin32Thread + 472);
          *(_QWORD *)(ThreadWin32Thread + 360) = v26 + 232;
          *(_DWORD *)(v26 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 244LL) = 0;
          *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 472) + 240LL;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x20000000u;
          if ( !*(_DWORD *)(ThreadWin32Thread + 624) )
          {
            if ( PsGetProcessPeb(Process) )
            {
              ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
              *(_DWORD *)(ThreadWin32Thread + 624) = RtlGetExpWinVer(ProcessSectionBaseAddress);
            }
            else
            {
              *(_DWORD *)(ThreadWin32Thread + 624) = 1536;
            }
          }
          if ( qword_1C0251ED8 )
          {
            v28 = qword_1C0251ED8();
            v29 = -1073741637;
          }
          else
          {
            v29 = -1073741637;
            v28 = -1073741637;
          }
          if ( v28 >= 0 && qword_1C0251EE0 )
            qword_1C0251EE0();
          v94 = v22 & 0xC;
          if ( (v22 & 0xC) == 0 )
          {
            v30 = qword_1C0251EE8 ? qword_1C0251EE8() : -1073741637;
            if ( v30 >= 0 )
            {
              if ( qword_1C0251EF0 ? qword_1C0251EF0(ThreadWin32Thread) : 0 )
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
            }
          }
          v32 = (HANDLE *)(ThreadWin32Thread + 720);
          Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 720), 0x1F0003u, 0LL, SynchronizationEvent, 0);
          if ( Event >= 0 )
          {
            v34 = *v32;
            Object = 0LL;
            Event = ObReferenceObjectByHandle(v34, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 728) = Object;
            if ( Event < 0 )
            {
              if ( Event != -1073741816 )
                ObCloseHandle(*v32, 1);
            }
            else
            {
              LOBYTE(v36) = 1;
              Event = ProtectHandle(*v32, v35, ExEventObjectType, v36);
            }
          }
          if ( Event < 0 )
          {
            *v32 = 0LL;
LABEL_243:
            if ( v67 )
              PopAndFreeW32ThreadLock();
            if ( v70 )
              PopAndFreeAlwaysW32ThreadLock((__int64)&v81);
            xxxDestroyThreadInfo();
            return (unsigned int)Event;
          }
          Event = ObDuplicateObject(Process, *v32, Process, ThreadWin32Thread + 1432, 0, 512, 2, 0);
          if ( Event < 0 )
          {
            *(_QWORD *)(ThreadWin32Thread + 1432) = 0LL;
            goto LABEL_243;
          }
          Event = InitializeThreadInfoIocp(Process, (struct tagTHREADINFO *)ThreadWin32Thread);
          if ( Event < 0 )
            goto LABEL_243;
          v37 = *(_DWORD *)(CurrentProcessWin32Process + 12);
          v93 = v37 & 0x4000;
          *(_DWORD *)(CurrentProcessWin32Process + 12) = v37 | 0x4000;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 788) && LODWORD(v71[4]) )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 788) = 28;
            *(_QWORD *)(CurrentProcessWin32Process + 792) = v71[2];
            *(_QWORD *)(CurrentProcessWin32Process + 800) = v71[3];
            *(_DWORD *)(CurrentProcessWin32Process + 808) = v71[4];
            *(_WORD *)(CurrentProcessWin32Process + 812) = WORD2(v71[4]);
          }
          if ( (v37 & 0x4000) != 0 )
          {
            v39 = v74;
          }
          else
          {
            if ( (v71[4] & 0x200) != 0 )
            {
              v38 = v71[0];
            }
            else if ( LOWORD(v71[7]) )
            {
              v38 = ParseReserved((const unsigned __int16 *)v71[8], (const unsigned __int16 *)0x4000);
            }
            else
            {
              v38 = 0;
            }
            *(_DWORD *)(CurrentProcessWin32Process + 692) = v38;
            v39 = v74;
            if ( (v74[4] & 0x400) != 0 )
            {
              v40 = v74[1];
              if ( ValidateHmonitor(v40) )
                *(_QWORD *)(CurrentProcessWin32Process + 696) = v40;
            }
          }
          v41 = AllocQueue(0LL, 0LL);
          v42 = (_DWORD *)v41;
          if ( !v41 )
          {
            Event = -1073741801;
            goto LABEL_243;
          }
          *(_QWORD *)(ThreadWin32Thread + 424) = v41;
          v90[1] = *(_OWORD *)v41;
          v91 = *(_QWORD *)(v41 + 16);
          *(_QWORD *)(v41 + 96) = ThreadWin32Thread;
          *(_QWORD *)(v41 + 88) = ThreadWin32Thread;
          ApiSetEditionUpdateRawMouseMode(v41);
          ++v42[98];
          if ( Process == gpepCSRSS )
          {
            v42[107] = 0x2000;
            v43 = 0;
          }
          else
          {
            v42[107] = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 880LL);
            v43 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 884LL);
          }
          v42[108] = v43;
          if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) != 0 || !grpWinStaList )
          {
            *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x10u;
            if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
            {
              Event = ApiSetEditionSetProcessWindowStationAtProcessInit(v39 + 5, v39[4] & 0x40000000);
              if ( Event < 0 )
                goto LABEL_243;
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
            }
            if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported() >= 0 )
              ApiSetEditionSetThreadDesktopAtThreadInit();
          }
          else
          {
            if ( qword_1C0251F08 )
              Event = qword_1C0251F08();
            else
              Event = -1073741637;
            if ( Event < 0
              || (!qword_1C0251F10
                ? (Event = -1073741637)
                : (Event = qword_1C0251F10(-1LL, v39 + 5, &v68, v39[4] & 0x40000000, &Handle)),
                  Event < 0) )
            {
              if ( Event == -1073741205 )
              {
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v92);
                ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                LeaveEnterCrit::~LeaveEnterCrit(v44);
              }
              else
              {
                CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0dq_EtwWriteTransfer(
                    Microsoft_Windows_Win32kEnableBits,
                    &DesktopResolutionFailure,
                    v46,
                    CurrentProcessId,
                    Event);
                Event = -1073741502;
              }
              goto LABEL_243;
            }
            if ( qword_1C0251F18 )
              Event = qword_1C0251F18();
            else
              Event = -1073741637;
            if ( Event < 0
              || ((UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v76), !qword_1C0251F20)
                ? (Event = -1073741637)
                : (LOBYTE(v47) = 1, Event = qword_1C0251F20(v68, v47)),
                  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v76),
                  Event < 0) )
            {
              CloseProtectedHandle(Handle);
              CloseProtectedHandle(v68);
              Handle = 0LL;
              v68 = 0LL;
              goto LABEL_243;
            }
            v75 = 0LL;
            Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v75, 0LL);
            v49 = v75;
            v67 = (struct tagDESKTOP *)v75;
            if ( Event < 0 )
              goto LABEL_243;
            PushW32ThreadLock((__int64)v75, (__int64)&v79, (__int64)CompositionObject::Release, v48);
            if ( v49 )
              ObfReferenceObject(v49);
            ObfDereferenceObject(v49);
            LODWORD(v77) = 1;
            *((_QWORD *)&v77 + 1) = PsGetCurrentProcess(v51, v50);
            *(_QWORD *)&v78 = v49;
            *((_QWORD *)&v78 + 1) = 0x100000000LL;
            Event = qword_1C0251F28 ? qword_1C0251F28() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            Event = qword_1C0251F30 ? qword_1C0251F30(&v77) : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            if ( !*(_QWORD *)(CurrentProcessWin32Process + 392) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
            {
              LockObjectAssignment(CurrentProcessWin32Process + 336, v49);
              *(_QWORD *)(CurrentProcessWin32Process + 392) = Handle;
            }
          }
          if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
            goto LABEL_243;
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v69);
          if ( qword_1C0251F38 )
            Event = qword_1C0251F38();
          else
            Event = -1073741637;
          if ( Event < 0
            || (!qword_1C0251F40 ? (Event = -1073741637) : (Event = qword_1C0251F40(ThreadWin32Thread, v67, Handle)),
                Event < 0) )
          {
            UserAtomicCheck::Detach((UserAtomicCheck *)v69);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v69);
            goto LABEL_243;
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v69);
          if ( v67 == grpdeskRitInput )
          {
            v52 = 0LL;
            if ( qword_1C0251F48 )
              v53 = qword_1C0251F48();
            else
              v53 = -1073741637;
            if ( v53 >= 0 )
            {
              if ( qword_1C0251F50 )
                v52 = qword_1C0251F50(ThreadWin32Thread);
              else
                v52 = 0LL;
            }
            if ( v52 && v52 != *(_QWORD *)(ThreadWin32Thread + 424) )
            {
              if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
                DestroyThreadsMessages(*(_QWORD *)(ThreadWin32Thread + 424), ThreadWin32Thread);
              zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 424), ThreadWin32Thread);
              *(_QWORD *)(ThreadWin32Thread + 424) = v52;
              ++*(_DWORD *)(v52 + 392);
            }
          }
          v54 = v93;
          if ( *((int *)v39 + 8) < 0 )
          {
            if ( !v93 )
            {
              if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
              {
                *((_DWORD *)v39 + 8) &= ~0x80000000;
                goto LABEL_184;
              }
              gppiScreenSaver = CurrentProcessWin32Process;
              gptSSCursor = *((_QWORD *)gpsi + 620);
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
              EtwTraceScreenSaverProcessEvent(1LL);
            }
            if ( (int)IsSetForegroundPrioritySupported() >= 0 )
              SetForegroundPriority(ThreadWin32Thread);
            if ( !v54 )
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
          }
LABEL_184:
          if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) == 0 && !v54 )
          {
            ++gdwDeferWinEvent;
            if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
            {
              ProcessWin32Process = PsGetProcessWin32Process(Process);
              zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
            }
            --gdwDeferWinEvent;
            if ( grpWinStaList )
            {
              if ( !*(_QWORD *)(CurrentProcessWin32Process + 664) )
              {
                UserSetLastError(1003LL);
LABEL_191:
                Event = -1073741823;
                goto LABEL_243;
              }
            }
          }
          v56 = (unsigned int)_InterlockedExchange(
                                (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 440) + 12LL),
                                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          if ( qword_1C0251F90 )
            v57 = qword_1C0251F90(v56);
          else
            v57 = -1073741637;
          if ( v57 >= 0 && qword_1C0251F98 )
            qword_1C0251F98(0LL, 1LL);
          SetUnavailableInputSource((_DWORD *)(ThreadWin32Thread + 1232));
          v59 = *(_QWORD *)(ThreadWin32Thread + 424);
          if ( v59 )
            SetUnavailableInputSource((_DWORD *)(v59 + 420));
          v60 = *(_DWORD *)(ThreadWin32Thread + 480);
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
            v60 |= 0x4000u;
          v61 = v60 | 0x1000000;
          *(_DWORD *)(ThreadWin32Thread + 480) = v61;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0 )
          {
            if ( !gptiForeground || CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 52) )
            {
              if ( !CInputGlobals::GetPtiLastWoken(gpInputGlobals)
                || CurrentProcessWin32Process != *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 52)
                || (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) == 0x10 )
              {
                goto LABEL_212;
              }
              v61 = *(_DWORD *)(ThreadWin32Thread + 480);
            }
            *(_DWORD *)(ThreadWin32Thread + 480) = v61 | 0x20;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v58) = 4;
              WPP_RECORDER_SF_q(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v58,
                13,
                16,
                (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids,
                ThreadWin32Thread);
            }
          }
LABEL_212:
          if ( (*(_DWORD *)gpsi & 4) != 0 )
          {
            v62 = qword_1C0251FA0 ? qword_1C0251FA0() : -1073741637;
            if ( v62 >= 0 && qword_1C0251FA8 )
              qword_1C0251FA8(0LL);
          }
          if ( !v94 )
          {
            Event = qword_1C0251FB0 ? qword_1C0251FB0() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            Event = qword_1C0251FB8 ? qword_1C0251FB8() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
          }
          if ( !v54 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 )
          {
            if ( qword_1C0251FC0 )
              v29 = qword_1C0251FC0();
            if ( v29 >= 0 && qword_1C0251FC8 )
              qword_1C0251FC8(7LL);
          }
          if ( v67 )
          {
            if ( (*((_DWORD *)v67 + 12) & 8) != 0 )
              goto LABEL_191;
            PopAndFreeW32ThreadLock();
          }
          if ( v70 )
            PopAndFreeAlwaysW32ThreadLock((__int64)&v81);
          v63 = *(_DWORD *)(ThreadWin32Thread + 1224);
          if ( (v63 & 1) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1224) = v63 & 0xFFFFFFFE;
          return (unsigned int)Event;
        }
LABEL_32:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v19, v18, v8);
        v20 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_33;
      }
    }
    if ( (v10 & 1) == 0 )
    {
LABEL_18:
      **v13 = 0;
      goto LABEL_19;
    }
LABEL_17:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12, ProcessPeb, v8);
    v13 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_18;
  }
  return 3221225738LL;
}
