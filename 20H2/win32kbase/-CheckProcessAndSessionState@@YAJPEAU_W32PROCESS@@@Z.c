/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C001707C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00BFFB4 (xxxInitProcessInfo.c)
 * Callees:
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C0017810 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // esi
  int v3; // ebx
  int v5; // eax
  void *ProcessInheritedFromUniqueProcessId; // rax
  __int64 v8; // rcx
  int v9; // eax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct tagKERNELHANDLETABLEENTRY *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // [rsp+30h] [rbp-D0h] BYREF
  int v59; // [rsp+34h] [rbp-CCh] BYREF
  int v60; // [rsp+38h] [rbp-C8h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-C0h] BYREF
  _CLIENT_ID ClientId; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h]
  unsigned __int8 v66; // [rsp+D8h] [rbp-28h]
  GUID ActivityId; // [rsp+DCh] [rbp-24h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+F0h] [rbp-10h] BYREF
  int *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+120h] [rbp+20h] BYREF
  int *v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+150h] [rbp+50h] BYREF
  int *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 )
  {
    if ( qword_1C024F958 ? qword_1C024F958() : 0 )
      return 0LL;
  }
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( qword_1C024F970 )
      v5 = qword_1C024F970();
    else
      v5 = -1073741637;
    if ( v5 < 0 || (gdwHydraHint & 0x10000000) != 0 )
      return 0LL;
    v3 = 1;
  }
  if ( (unsigned int)PsGetCurrentProcessSessionId() )
  {
    ProcessHandle = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_28;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0 )
      {
        v9 = qword_1C02502B0 ? qword_1C02502B0() : -1073741637;
        if ( v9 >= 0 && !(qword_1C02502B8 ? qword_1C02502B8(ProcessInformation[8]) : 0) )
          InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_28:
        if ( InformationProcess == -1073741558 || InformationProcess == -1073741813 )
          InformationProcess = 0;
        if ( InformationProcess < 0 && v3 )
        {
          UserSessionSwitchLeaveCrit(v8);
          if ( qword_1C024F978 )
            InformationProcess = qword_1C024F978();
          else
            InformationProcess = -1073741637;
          if ( InformationProcess == 259 )
          {
            InformationProcess = 0;
          }
          else if ( InformationProcess >= 0 )
          {
            gdwHydraHint |= 0x10000000u;
          }
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          ActivityId = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v66 = 1;
            v40 = PsGetCurrentThreadWin32Thread();
            v65 = v40;
            if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C0244A70 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v41, v42) )
                {
                  v58 = v66;
                  v70 = 4LL;
                  v69 = &v58;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (int)&dword_1C0244A70,
                    (int)&dword_1C0211E87,
                    (int)&ActivityId,
                    0,
                    3u,
                    &v68);
                }
              }
            }
          }
          else
          {
            v65 = 0LL;
          }
          v11 = 0LL;
          while ( 1 )
          {
            v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v12 )
              v11 = *v12;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v11 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v65
            && (*(_DWORD *)(v65 + 48) || *(int *)(v65 + 24) > 0) )
          {
            *(_DWORD *)(v65 + 44) = 1;
            *(GUID *)(v65 + 28) = ActivityId;
            if ( (unsigned int)dword_1C0244A70 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v18) )
              {
                v59 = v66;
                v73 = 4LL;
                v72 = &v59;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C0244A70,
                  (int)&dword_1C0211E30,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v71);
                v43 = (unsigned int)dword_1C0244A70;
              }
              if ( (unsigned int)v43 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v43, v44) )
              {
                v60 = v66;
                v76 = 4LL;
                v75 = &v60;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C0244A70,
                  (int)&dword_1C0211E5D,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v74);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v11;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v45 = PsGetCurrentProcess(v20, v19),
                ProcessSessionId = PsGetProcessSessionIdEx(v45),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            CurrentThread = KeGetCurrentThread();
            v22 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v22 = *ThreadWin32Thread;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24, v23, v25, v26);
            if ( v22
              && CurrentProcessWin32Process
              && (*(_DWORD *)(v22 + 488) & 0x1000000) != 0
              && (*(_DWORD *)(v22 + 1232) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v56, v57);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v32 = gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v33 = *(_QWORD *)v32;
                *((_QWORD *)v32 + 2) = 0LL;
                if ( !*(_DWORD *)(v33 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
                v36 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v36 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37, v38);
                ExReleaseResourceAndLeaveCriticalRegion(*v36);
                HMUnlockObject(*(_QWORD *)v32);
                tagDomLock::LockExclusive((tagDomLock *)v36);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
