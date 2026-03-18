/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x1C013A440
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserGetSystemDpiForProcess(char *Handle)
{
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v16; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v18; // r8d
  PVOID v19; // rbx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID *Object; // [rsp+20h] [rbp-39h]
  int v29; // [rsp+30h] [rbp-29h] BYREF
  PVOID v30; // [rsp+38h] [rbp-21h] BYREF
  __int64 v31; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 v32; // [rsp+48h] [rbp-11h]
  GUID ActivityId; // [rsp+4Ch] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp+7h] BYREF
  int *v35; // [rsp+80h] [rbp+27h]
  int v36; // [rsp+88h] [rbp+2Fh]
  int v37; // [rsp+8Ch] [rbp+33h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v32 = 0;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v31 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v31 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v37 = 0;
        v29 = v32;
        v36 = 4;
        v35 = &v29;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v34);
      }
    }
  }
  else
  {
    v31 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v31);
  v14 = PsGetCurrentThreadWin32Thread(v12);
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v16, 1);
    *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(Object) = 0;
      McTemplateK0xqx_EtwWriteTransfer(v13, &AcquiredSharedUserCritEvent, v18, v16, Object, gullUserCritAcquireToken);
    }
    if ( v16 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(Object) = 1000000 * v16 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          (__int64)gullUserCritAcquireToken,
          &AcquiredSharedUserCritTelemetryEvent,
          v18,
          v16,
          Object,
          gullUserCritAcquireToken);
      }
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v19 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  }
  else
  {
    v30 = 0LL;
    v20 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &v30, 0LL);
    v19 = v30;
    if ( v20 < 0 )
    {
      UserSetLastError(87LL, v21);
      v23 = 0;
      goto LABEL_47;
    }
    if ( (unsigned int)PsGetProcessSessionId(v30) != gSessionId )
    {
      v25 = 87LL;
      goto LABEL_44;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v19);
  }
  if ( CurrentProcessWin32Process )
  {
    v23 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
    goto LABEL_45;
  }
  v25 = 5023LL;
LABEL_44:
  UserSetLastError(v25, v24);
  v23 = 0;
LABEL_45:
  if ( v19 )
    ObfDereferenceObject(v19);
LABEL_47:
  UserSessionSwitchLeaveCrit(v22);
  return v23;
}
