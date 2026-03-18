/*
 * XREFs of xxxCreateThreadInfo @ 0x1C004FF68
 * Callers:
 *     UserThreadCallout @ 0x1C004EA50 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ValidateHmonitor @ 0x1C0032830 (ValidateHmonitor.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00332A8 (ApiSetEditionUpdateRawMouseMode.c)
 *     ProtectHandle @ 0x1C0036EB4 (ProtectHandle.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0036F58 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C004CFEC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     InitClientInfo @ 0x1C004FDA8 (InitClientInfo.c)
 *     RtlGetExpWinVer @ 0x1C005114C (RtlGetExpWinVer.c)
 *     LockObjectAssignment @ 0x1C0051D60 (LockObjectAssignment.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C0051DBC (IsDestroyThreadsMessagesSupported.c)
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0054A70 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     CloseProtectedHandle @ 0x1C0063328 (CloseProtectedHandle.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C0063864 (IszzzCalcStartCursorHideSupported.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     zzzCalcStartCursorHide @ 0x1C0063950 (zzzCalcStartCursorHide.c)
 *     AllocQueue @ 0x1C00768D0 (AllocQueue.c)
 *     SetUnavailableInputSource @ 0x1C00909F0 (SetUnavailableInputSource.c)
 *     PushW32ThreadLock @ 0x1C0096A30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009715C (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A3550 (PopAndFreeW32ThreadLock.c)
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00B60F8 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00B6124 (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C00BDA24 (-ParseReserved@@YAKPEBG0@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C00BF0A0 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00BF11C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DestroyThreadsMessages @ 0x1C00D2628 (DestroyThreadsMessages.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0120BB4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C01266AC (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C012810C (McTemplateK0dq_EtwWriteTransfer.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C01C836C (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01C8448 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 *     IsSetForegroundPrioritySupported @ 0x1C01F6778 (IsSetForegroundPrioritySupported.c)
 *     SetForegroundPriority @ 0x1C01F68F4 (SetForegroundPriority.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  PEPROCESS ThreadProcess; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _NT_TIB *Self; // r13
  int v8; // r15d
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessPeb; // r8
  __int64 v11; // r9
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  const void *v14; // rsi
  ULONG64 v15; // rdx
  _BYTE **v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  ULONG64 v20; // r8
  ULONG64 v21; // rdx
  _BYTE **v22; // rax
  __int64 CurrentProcessWin32Process; // r14
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int128 *v31; // rcx
  __int128 *v32; // rcx
  __int64 v33; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  int v35; // eax
  int v36; // r12d
  int v37; // eax
  HANDLE *v39; // r15
  int Event; // esi
  HANDLE v41; // rcx
  int v42; // edx
  int v43; // eax
  unsigned int v44; // eax
  _QWORD *v45; // r13
  __int64 v46; // r15
  __int64 v47; // rax
  _DWORD *v48; // r15
  int v49; // eax
  LeaveEnterCrit *v50; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v52; // r8
  __int64 v53; // rdx
  PVOID v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r15
  int v58; // eax
  int v59; // r15d
  __int64 v60; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v62; // rcx
  int v63; // eax
  int v64; // edx
  __int64 v65; // rcx
  int v66; // ecx
  int v67; // ecx
  int v68; // eax
  int v69; // eax
  struct _EPROCESS *Process; // [rsp+40h] [rbp-1F8h]
  HANDLE Handle; // [rsp+48h] [rbp-1F0h] BYREF
  struct tagDESKTOP *v73; // [rsp+50h] [rbp-1E8h]
  HANDLE v74; // [rsp+58h] [rbp-1E0h] BYREF
  _BYTE v75[8]; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v76; // [rsp+68h] [rbp-1D0h]
  _QWORD v77[10]; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD *v78; // [rsp+C0h] [rbp-178h]
  PVOID Object; // [rsp+C8h] [rbp-170h] BYREF
  _QWORD *v80; // [rsp+D0h] [rbp-168h]
  PVOID v81; // [rsp+D8h] [rbp-160h] BYREF
  _BYTE v82[8]; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v83; // [rsp+E8h] [rbp-150h] BYREF
  __int128 v84; // [rsp+F8h] [rbp-140h]
  __int128 v85; // [rsp+108h] [rbp-130h] BYREF
  __int64 v86; // [rsp+118h] [rbp-120h]
  __int128 v87; // [rsp+120h] [rbp-118h] BYREF
  __int64 v88; // [rsp+130h] [rbp-108h]
  __int128 v89; // [rsp+140h] [rbp-F8h]
  __int128 v90; // [rsp+150h] [rbp-E8h]
  __int128 v91; // [rsp+160h] [rbp-D8h]
  __int128 v92; // [rsp+170h] [rbp-C8h]
  __int128 v93; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v94; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v95; // [rsp+1C0h] [rbp-78h] BYREF
  _OWORD v96[2]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v97; // [rsp+1F0h] [rbp-48h]
  char v98; // [rsp+248h] [rbp+10h] BYREF
  int v99; // [rsp+250h] [rbp+18h]
  int v100; // [rsp+258h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v77, 0, 0x48uLL);
  v73 = 0LL;
  Handle = 0LL;
  v74 = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v76 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v4, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v4, v3, v5, v6) )
  {
    ++gdwGuiThreads;
    v8 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v8 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_QWORD *)(ThreadWin32Thread + 392) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 400) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 408) = 0;
    *(_QWORD *)(ThreadWin32Thread + 544) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 552) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 560) = 0;
    *(_QWORD *)(ThreadWin32Thread + 848) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 856) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 864) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1472) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 528) = ThreadWin32Thread + 520;
    *(_QWORD *)(ThreadWin32Thread + 520) = ThreadWin32Thread + 520;
    *(_QWORD *)(ThreadWin32Thread + 1224) = ThreadWin32Thread + 1216;
    *(_QWORD *)(ThreadWin32Thread + 1216) = ThreadWin32Thread + 1216;
    *(_QWORD *)(ThreadWin32Thread + 752) = ThreadWin32Thread + 744;
    *(_QWORD *)(ThreadWin32Thread + 744) = ThreadWin32Thread + 744;
    *(_QWORD *)(ThreadWin32Thread + 1096) = ThreadWin32Thread + 1088;
    *(_QWORD *)(ThreadWin32Thread + 1088) = ThreadWin32Thread + 1088;
    *(_DWORD *)(ThreadWin32Thread + 1104) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1152) = ThreadWin32Thread + 1144;
    *(_QWORD *)(ThreadWin32Thread + 1144) = ThreadWin32Thread + 1144;
    *(_BYTE *)(ThreadWin32Thread + 1248) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1384) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 828) = 1;
    *(_DWORD *)(ThreadWin32Thread + 892) = 3;
    ProcessPeb = PsGetProcessPeb(ThreadProcess);
    v78 = *(_QWORD **)(ProcessPeb + 32);
    v80 = v77;
    v77[0] = v78[4];
    v77[1] = v78[5];
    v77[2] = v78[17];
    v77[3] = v78[18];
    v77[4] = *(_QWORD *)((char *)v78 + 164);
    v12 = (unsigned int *)(v78 + 24);
    if ( (unsigned __int64)(v78 + 24) >= MmUserProbeAddress )
      v12 = (unsigned int *)MmUserProbeAddress;
    v13 = *v12;
    v99 = v13;
    LODWORD(v77[5]) = v13;
    v14 = (const void *)*((_QWORD *)v12 + 1);
    v77[6] = v14;
    if ( !(_WORD)v13 )
    {
      v77[6] = 0LL;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
    v16 = (_BYTE **)MmUserProbeAddress;
    if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v99) )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_17;
      if ( v15 > (unsigned __int64)v14 )
      {
LABEL_19:
        v17 = Win32AllocPoolWithQuota(LOWORD(v77[5]), 2037674837LL);
        v76 = v17;
        v77[6] = v17;
        if ( !v17 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v17, &v87, Win32FreePool);
        memmove((void *)v77[6], v14, LOWORD(v77[5]));
LABEL_23:
        v18 = (unsigned int *)(v78 + 26);
        if ( (unsigned __int64)(v78 + 26) >= MmUserProbeAddress )
          v18 = (unsigned int *)MmUserProbeAddress;
        v19 = *v18;
        v99 = v19;
        LODWORD(v77[7]) = v19;
        v20 = *((_QWORD *)v18 + 1);
        v77[8] = v20;
        if ( (v20 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = (unsigned __int16)v19 + v20 + 2;
        v22 = (_BYTE **)MmUserProbeAddress;
        if ( v21 < MmUserProbeAddress && (unsigned __int16)v19 <= HIWORD(v99) )
        {
          if ( (v19 & 1) != 0 )
            goto LABEL_32;
          if ( v21 > v20 )
            goto LABEL_34;
        }
        if ( (v19 & 1) == 0 )
        {
LABEL_33:
          **v22 = 0;
LABEL_34:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v21, v20, v11);
          v24 = v8 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v24 = v8;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
            v24 |= 0x2000000u;
          if ( IsCurrentProcessDwm(v26, v25) )
            *(_DWORD *)(ThreadWin32Thread + 1232) |= 4u;
          *(_QWORD *)(ThreadWin32Thread + 340) = 0LL;
          PsGetCurrentProcessWin32Process(v28, v27, v29, v30);
          *(_DWORD *)(ThreadWin32Thread + 328) &= ~4u;
          *(_DWORD *)(ThreadWin32Thread + 488) = v24;
          *(_DWORD *)(ThreadWin32Thread + 1368) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1372) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1360) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1364) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1412) = 0;
          if ( (dword_1C02483FC & 0x80u) != 0 )
          {
            *(_QWORD *)&v89 = ThreadWin32Thread + 440;
            *((_QWORD *)&v89 + 1) = gspklBaseLayout;
            v93 = v89;
            v31 = &v93;
            goto LABEL_49;
          }
          if ( !gspklGlobalActive )
          {
            if ( gspklBaseLayout )
            {
              *(_QWORD *)&v90 = &gspklGlobalActive;
              *((_QWORD *)&v90 + 1) = gspklBaseLayout;
              v94 = v90;
              v32 = &v94;
LABEL_47:
              HMAssignmentLock(v32);
              goto LABEL_48;
            }
            if ( gspklWinstaLessSessionLayouts )
            {
              *(_QWORD *)&v91 = &gspklGlobalActive;
              *((_QWORD *)&v91 + 1) = gspklWinstaLessSessionLayouts;
              v95 = v91;
              v32 = &v95;
              goto LABEL_47;
            }
          }
LABEL_48:
          *(_QWORD *)&v92 = ThreadWin32Thread + 440;
          *((_QWORD *)&v92 + 1) = gspklGlobalActive;
          v96[0] = v92;
          v31 = v96;
LABEL_49:
          HMAssignmentLock(v31);
          *(_QWORD *)(ThreadWin32Thread + 448) = ThreadWin32Thread + 1040;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x400) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1232) |= 0x20u;
          *(_QWORD *)(ThreadWin32Thread + 424) = CurrentProcessWin32Process;
          *(_QWORD *)(ThreadWin32Thread + 664) = *(_QWORD *)(CurrentProcessWin32Process + 320);
          *(_QWORD *)(CurrentProcessWin32Process + 320) = ThreadWin32Thread;
          ++*(_DWORD *)(CurrentProcessWin32Process + 384);
          if ( Self )
            Self[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 480) = (char *)Self + 2048;
          LODWORD(Self[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 236LL) = 0;
          v33 = *(_QWORD *)(ThreadWin32Thread + 480);
          *(_QWORD *)(ThreadWin32Thread + 360) = v33 + 232;
          *(_DWORD *)(v33 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 244LL) = 0;
          *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 480) + 240LL;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20000000u;
          if ( !*(_DWORD *)(ThreadWin32Thread + 632) )
          {
            if ( PsGetProcessPeb(Process) )
            {
              ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
              *(_DWORD *)(ThreadWin32Thread + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
            }
            else
            {
              *(_DWORD *)(ThreadWin32Thread + 632) = 1536;
            }
          }
          if ( qword_1C024FED8 )
          {
            v35 = qword_1C024FED8();
            v36 = -1073741637;
          }
          else
          {
            v36 = -1073741637;
            v35 = -1073741637;
          }
          if ( v35 >= 0 && qword_1C024FEE0 )
            qword_1C024FEE0();
          v100 = v24 & 0xC;
          if ( (v24 & 0xC) == 0 )
          {
            v37 = qword_1C024FEE8 ? qword_1C024FEE8() : -1073741637;
            if ( v37 >= 0 )
            {
              if ( qword_1C024FEF0 ? qword_1C024FEF0(ThreadWin32Thread) : 0 )
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
            }
          }
          v39 = (HANDLE *)(ThreadWin32Thread + 728);
          Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 728), 0x1F0003u, 0LL, SynchronizationEvent, 0);
          if ( Event >= 0 )
          {
            v41 = *v39;
            Object = 0LL;
            Event = ObReferenceObjectByHandle(v41, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 736) = Object;
            if ( Event < 0 )
            {
              if ( Event != -1073741816 )
                ObCloseHandle(*v39, 1);
            }
            else
            {
              Event = ProtectHandle(*v39, v42, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
            }
          }
          if ( Event < 0 )
          {
            *v39 = 0LL;
LABEL_243:
            if ( v73 )
              PopAndFreeW32ThreadLock(&v85);
            if ( v76 )
              PopAndFreeAlwaysW32ThreadLock(&v87);
            xxxDestroyThreadInfo();
            return (unsigned int)Event;
          }
          Event = ObDuplicateObject(Process, *v39, Process, ThreadWin32Thread + 1440, 0, 512, 2, 0);
          if ( Event < 0 )
          {
            *(_QWORD *)(ThreadWin32Thread + 1440) = 0LL;
            goto LABEL_243;
          }
          Event = InitializeThreadInfoIocp(Process, (void **)ThreadWin32Thread);
          if ( Event < 0 )
            goto LABEL_243;
          v43 = *(_DWORD *)(CurrentProcessWin32Process + 12);
          v99 = v43 & 0x4000;
          *(_DWORD *)(CurrentProcessWin32Process + 12) = v43 | 0x4000;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 788) && LODWORD(v77[4]) )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 788) = 28;
            *(_QWORD *)(CurrentProcessWin32Process + 792) = v77[2];
            *(_QWORD *)(CurrentProcessWin32Process + 800) = v77[3];
            *(_DWORD *)(CurrentProcessWin32Process + 808) = v77[4];
            *(_WORD *)(CurrentProcessWin32Process + 812) = WORD2(v77[4]);
          }
          if ( (v43 & 0x4000) != 0 )
          {
            v45 = v80;
          }
          else
          {
            if ( (v77[4] & 0x200) != 0 )
            {
              v44 = v77[0];
            }
            else if ( LOWORD(v77[7]) )
            {
              v44 = ParseReserved((const unsigned __int16 *)v77[8], (const unsigned __int16 *)0x4000);
            }
            else
            {
              v44 = 0;
            }
            *(_DWORD *)(CurrentProcessWin32Process + 692) = v44;
            v45 = v80;
            if ( (v80[4] & 0x400) != 0 )
            {
              v46 = v80[1];
              if ( ValidateHmonitor(v46) )
                *(_QWORD *)(CurrentProcessWin32Process + 696) = v46;
            }
          }
          v47 = AllocQueue(0LL, 0LL);
          v48 = (_DWORD *)v47;
          if ( !v47 )
          {
            Event = -1073741801;
            goto LABEL_243;
          }
          *(_QWORD *)(ThreadWin32Thread + 432) = v47;
          v96[1] = *(_OWORD *)v47;
          v97 = *(_QWORD *)(v47 + 16);
          *(_QWORD *)(v47 + 96) = ThreadWin32Thread;
          *(_QWORD *)(v47 + 88) = ThreadWin32Thread;
          ApiSetEditionUpdateRawMouseMode(v47);
          ++v48[98];
          if ( Process == gpepCSRSS )
          {
            v48[107] = 0x2000;
            v49 = 0;
          }
          else
          {
            v48[107] = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL);
            v49 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 884LL);
          }
          v48[108] = v49;
          if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) != 0 || !grpWinStaList )
          {
            *(_DWORD *)(ThreadWin32Thread + 1232) |= 0x10u;
            if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
            {
              Event = ApiSetEditionSetProcessWindowStationAtProcessInit(v45 + 5, v45[4] & 0x40000000);
              if ( Event < 0 )
                goto LABEL_243;
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
            }
            if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported() >= 0 )
              ApiSetEditionSetThreadDesktopAtThreadInit();
          }
          else
          {
            if ( qword_1C024FF08 )
              Event = qword_1C024FF08();
            else
              Event = -1073741637;
            if ( Event < 0
              || (!qword_1C024FF10
                ? (Event = -1073741637)
                : (Event = qword_1C024FF10(-1LL, v45 + 5, &v74, v45[4] & 0x40000000, &Handle)),
                  Event < 0) )
            {
              if ( Event == -1073741205 )
              {
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v98);
                ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                LeaveEnterCrit::~LeaveEnterCrit(v50);
              }
              else
              {
                CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0dq_EtwWriteTransfer(
                    Microsoft_Windows_Win32kEnableBits,
                    &DesktopResolutionFailure,
                    v52,
                    CurrentProcessId,
                    Event);
                Event = -1073741502;
              }
              goto LABEL_243;
            }
            if ( qword_1C024FF18 )
              Event = qword_1C024FF18();
            else
              Event = -1073741637;
            if ( Event < 0
              || ((UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v82), !qword_1C024FF20)
                ? (Event = -1073741637)
                : (LOBYTE(v53) = 1, Event = qword_1C024FF20(v74, v53)),
                  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v82),
                  Event < 0) )
            {
              CloseProtectedHandle(Handle);
              CloseProtectedHandle(v74);
              Handle = 0LL;
              v74 = 0LL;
              goto LABEL_243;
            }
            v81 = 0LL;
            Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v81, 0LL);
            v54 = v81;
            v73 = (struct tagDESKTOP *)v81;
            if ( Event < 0 )
              goto LABEL_243;
            PushW32ThreadLock(v81, &v85, CompositionObject::Release);
            if ( v54 )
              ObfReferenceObject(v54);
            ObfDereferenceObject(v54);
            LODWORD(v83) = 1;
            *((_QWORD *)&v83 + 1) = PsGetCurrentProcess(v56, v55);
            *(_QWORD *)&v84 = v54;
            *((_QWORD *)&v84 + 1) = 0x100000000LL;
            Event = qword_1C024FF28 ? qword_1C024FF28() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            Event = qword_1C024FF30 ? qword_1C024FF30(&v83) : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            if ( !*(_QWORD *)(CurrentProcessWin32Process + 392) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
            {
              LockObjectAssignment(CurrentProcessWin32Process + 336, v54);
              *(_QWORD *)(CurrentProcessWin32Process + 392) = Handle;
            }
          }
          if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
            goto LABEL_243;
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v75);
          if ( qword_1C024FF38 )
            Event = qword_1C024FF38();
          else
            Event = -1073741637;
          if ( Event < 0
            || (!qword_1C024FF40 ? (Event = -1073741637) : (Event = qword_1C024FF40(ThreadWin32Thread, v73, Handle)),
                Event < 0) )
          {
            UserAtomicCheck::Detach((UserAtomicCheck *)v75);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v75);
            goto LABEL_243;
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v75);
          if ( v73 == grpdeskRitInput )
          {
            v57 = 0LL;
            if ( qword_1C024FF48 )
              v58 = qword_1C024FF48();
            else
              v58 = -1073741637;
            if ( v58 >= 0 )
            {
              if ( qword_1C024FF50 )
                v57 = qword_1C024FF50(ThreadWin32Thread);
              else
                v57 = 0LL;
            }
            if ( v57 && v57 != *(_QWORD *)(ThreadWin32Thread + 432) )
            {
              if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
                DestroyThreadsMessages(*(_QWORD *)(ThreadWin32Thread + 432), ThreadWin32Thread);
              zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 432), ThreadWin32Thread);
              *(_QWORD *)(ThreadWin32Thread + 432) = v57;
              ++*(_DWORD *)(v57 + 392);
            }
          }
          v59 = v99;
          if ( *((int *)v45 + 8) < 0 )
          {
            if ( !v99 )
            {
              if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
              {
                *((_DWORD *)v45 + 8) &= ~0x80000000;
                goto LABEL_184;
              }
              gppiScreenSaver = CurrentProcessWin32Process;
              gptSSCursor = *((_QWORD *)gpsi + 620);
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
              EtwTraceScreenSaverProcessEvent(1LL);
            }
            if ( (int)IsSetForegroundPrioritySupported() >= 0 )
              SetForegroundPriority(ThreadWin32Thread);
            if ( !v59 )
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
          }
LABEL_184:
          if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) == 0 && !v59 )
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
                UserSetLastError(1003LL, v60);
LABEL_191:
                Event = -1073741823;
                goto LABEL_243;
              }
            }
          }
          v62 = (unsigned int)_InterlockedExchange(
                                (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 448) + 12LL),
                                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          if ( qword_1C024FF90 )
            v63 = qword_1C024FF90(v62);
          else
            v63 = -1073741637;
          if ( v63 >= 0 && qword_1C024FF98 )
            qword_1C024FF98(0LL, 1LL);
          SetUnavailableInputSource(ThreadWin32Thread + 1240);
          v65 = *(_QWORD *)(ThreadWin32Thread + 432);
          if ( v65 )
            SetUnavailableInputSource(v65 + 420);
          v66 = *(_DWORD *)(ThreadWin32Thread + 488);
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
            v66 |= 0x4000u;
          v67 = v66 | 0x1000000;
          *(_DWORD *)(ThreadWin32Thread + 488) = v67;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0 )
          {
            if ( !gptiForeground || CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 53) )
            {
              if ( !CInputGlobals::GetPtiLastWoken(gpInputGlobals)
                || CurrentProcessWin32Process != *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 53)
                || (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) == 0x10 )
              {
                goto LABEL_212;
              }
              v67 = *(_DWORD *)(ThreadWin32Thread + 488);
            }
            *(_DWORD *)(ThreadWin32Thread + 488) = v67 | 0x20;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v64) = 4;
              WPP_RECORDER_SF_q(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v64,
                13,
                16,
                (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids,
                ThreadWin32Thread);
            }
          }
LABEL_212:
          if ( (*(_DWORD *)gpsi & 4) != 0 )
          {
            v68 = qword_1C024FFA0 ? qword_1C024FFA0() : -1073741637;
            if ( v68 >= 0 && qword_1C024FFA8 )
              qword_1C024FFA8(0LL);
          }
          if ( !v100 )
          {
            Event = qword_1C024FFB0 ? qword_1C024FFB0() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            Event = qword_1C024FFB8 ? qword_1C024FFB8() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
          }
          if ( !v59 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 )
          {
            if ( qword_1C024FFC0 )
              v36 = qword_1C024FFC0();
            if ( v36 >= 0 && qword_1C024FFC8 )
              qword_1C024FFC8(7LL);
          }
          if ( v73 )
          {
            if ( (*((_DWORD *)v73 + 12) & 8) != 0 )
              goto LABEL_191;
            PopAndFreeW32ThreadLock(&v85);
          }
          if ( v76 )
            PopAndFreeAlwaysW32ThreadLock(&v87);
          v69 = *(_DWORD *)(ThreadWin32Thread + 1232);
          if ( (v69 & 1) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1232) = v69 & 0xFFFFFFFE;
          return (unsigned int)Event;
        }
LABEL_32:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v21, v20, v11);
        v22 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_33;
      }
    }
    if ( (v13 & 1) == 0 )
    {
LABEL_18:
      **v16 = 0;
      goto LABEL_19;
    }
LABEL_17:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v15, ProcessPeb, v11);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_18;
  }
  return 3221225738LL;
}
