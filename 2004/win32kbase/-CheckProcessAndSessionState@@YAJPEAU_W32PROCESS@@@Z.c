/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00BC78C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00C2204 (xxxInitProcessInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C00BCF20 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // esi
  int v3; // ebx
  int v5; // eax
  void *ProcessInheritedFromUniqueProcessId; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  PERESOURCE *v39; // rdi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // rax
  int ProcessSessionId; // ebx
  __int64 v49; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // [rsp+30h] [rbp-D0h] BYREF
  int v62; // [rsp+34h] [rbp-CCh] BYREF
  int v63; // [rsp+38h] [rbp-C8h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-C0h] BYREF
  _CLIENT_ID ClientId; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h]
  unsigned __int8 v69; // [rsp+D8h] [rbp-28h]
  GUID ActivityId; // [rsp+DCh] [rbp-24h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+F0h] [rbp-10h] BYREF
  int *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+120h] [rbp+20h] BYREF
  int *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+150h] [rbp+50h] BYREF
  int *v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 )
  {
    if ( qword_1C0251958 ? qword_1C0251958() : 0 )
      return 0LL;
  }
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( qword_1C0251970 )
      v5 = qword_1C0251970();
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
        v12 = qword_1C02522B0 ? qword_1C02522B0() : -1073741637;
        if ( v12 >= 0 && !(qword_1C02522B8 ? qword_1C02522B8(ProcessInformation[8]) : 0) )
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
          UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
          if ( qword_1C0251978 )
            InformationProcess = qword_1C0251978();
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
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v44);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          ActivityId = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v69 = 1;
            v45 = PsGetCurrentThreadWin32Thread(v42);
            v68 = v45;
            if ( v45 && (*(int *)(v45 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v61 = v69;
                v73 = 4LL;
                v72 = &v61;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E87,
                  &ActivityId,
                  0LL,
                  3u,
                  &v71);
              }
            }
          }
          else
          {
            v68 = 0LL;
          }
          v14 = 0LL;
          while ( 1 )
          {
            v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v15 )
              v14 = *v15;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v14 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            if ( v68 )
            {
              v20 = *(unsigned int *)(v68 + 24);
              if ( *(_DWORD *)(v68 + 48) || (int)v20 > 0 )
              {
                *(_DWORD *)(v68 + 44) = 1;
                *(GUID *)(v68 + 28) = ActivityId;
                if ( (unsigned int)dword_1C0246A70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                  {
                    v62 = v69;
                    v76 = 4LL;
                    v75 = &v62;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C0246A70,
                      (unsigned __int8 *)dword_1C0213E30,
                      &ActivityId,
                      0LL,
                      3u,
                      &v74);
                    v46 = dword_1C0246A70;
                  }
                  if ( v46 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                  {
                    v63 = v69;
                    v79 = 4LL;
                    v78 = &v63;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C0246A70,
                      (unsigned __int8 *)dword_1C0213E5D,
                      &ActivityId,
                      0LL,
                      3u,
                      &v77);
                  }
                }
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit(v20);
          gptiCurrent = v14;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess(v21)
            || (v47 = PsGetCurrentProcess(v23, v22),
                ProcessSessionId = PsGetProcessSessionIdEx(v47),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v49),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            CurrentThread = KeGetCurrentThread();
            v25 = 0LL;
            if ( !IsThreadCrossSessionAttached(v23) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v25 = *ThreadWin32Thread;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
            if ( v25
              && CurrentProcessWin32Process
              && (*(_DWORD *)(v25 + 480) & 0x1000000) != 0
              && (*(_DWORD *)(v25 + 1224) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v28, v29, v30);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59, v60);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v35 = (__int64 *)gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v36 = *v35;
                v35[2] = 0LL;
                if ( !*(_DWORD *)(v36 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
                v39 = (PERESOURCE *)GetDomainLockRef(12LL, v31, v33, v34);
                if ( v39 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v40, v41);
                ExReleaseResourceAndLeaveCriticalRegion(*v39);
                HMUnlockObject(*v35);
                tagDomLock::LockExclusive(v39);
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
