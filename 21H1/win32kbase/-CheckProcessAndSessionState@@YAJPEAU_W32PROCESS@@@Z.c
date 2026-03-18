/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C000A878
 * Callers:
 *     xxxInitProcessInfo @ 0x1C006A66C (xxxInitProcessInfo.c)
 * Callees:
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C000B000 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v25; // r14
  __int64 v26; // rax
  PERESOURCE *v27; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  PERESOURCE *DomainLockRef; // rbx
  int v39; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-C0h] BYREF
  _CLIENT_ID ClientId; // [rsp+48h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-30h]
  unsigned __int8 v47; // [rsp+D8h] [rbp-28h]
  GUID ActivityId; // [rsp+DCh] [rbp-24h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+F0h] [rbp-10h] BYREF
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+120h] [rbp+20h] BYREF
  int *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+150h] [rbp+50h] BYREF
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 )
  {
    if ( qword_1C0257918 ? qword_1C0257918() : 0 )
      return 0LL;
  }
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( qword_1C0257930 )
      v5 = qword_1C0257930();
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
        v9 = qword_1C0258270 ? qword_1C0258270() : -1073741637;
        if ( v9 >= 0 && !(qword_1C0258278 ? qword_1C0258278(ProcessInformation[8]) : 0) )
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
          if ( qword_1C0257938 )
            InformationProcess = qword_1C0257938();
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
            v47 = 1;
            v29 = PsGetCurrentThreadWin32Thread();
            v46 = v29;
            if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v30, v31) )
                {
                  v39 = v47;
                  v51 = 4LL;
                  v50 = &v39;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (int)&dword_1C024C960,
                    (int)&dword_1C02199F7,
                    (int)&ActivityId,
                    0,
                    3u,
                    &v49);
                }
              }
            }
          }
          else
          {
            v46 = 0LL;
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
            && v46
            && (*(_DWORD *)(v46 + 48) || *(int *)(v46 + 24) > 0) )
          {
            *(_DWORD *)(v46 + 44) = 1;
            *(GUID *)(v46 + 28) = ActivityId;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v18) )
              {
                v40 = v47;
                v54 = 4LL;
                v53 = &v40;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024C960,
                  (int)&dword_1C02199A0,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v52);
                v32 = (unsigned int)dword_1C024C960;
              }
              if ( (unsigned int)v32 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v32, v33) )
              {
                v41 = v47;
                v57 = 4LL;
                v56 = &v41;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024C960,
                  (int)&dword_1C02199CD,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v55);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v11;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v34 = PsGetCurrentProcess(v20, v19),
                ProcessSessionId = PsGetProcessSessionIdEx(v34),
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
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
            if ( v22
              && CurrentProcessWin32Process
              && (*(_DWORD *)(v22 + 480) & 0x1000000) != 0
              && (*(_DWORD *)(v22 + 1216) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v25 = gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v26 = *(_QWORD *)v25;
                *((_QWORD *)v25 + 2) = 0LL;
                if ( !*(_DWORD *)(v26 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM();
                v27 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v27 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM();
                ExReleaseResourceAndLeaveCriticalRegion(*v27);
                HMUnlockObject(*(_QWORD *)v25);
                tagDomLock::LockExclusive((tagDomLock *)v27);
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
