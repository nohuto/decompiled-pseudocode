/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x1C0132450
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v18; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v20; // r8d
  PVOID v21; // rbx
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID *Object; // [rsp+20h] [rbp-39h]
  int v33; // [rsp+30h] [rbp-29h] BYREF
  PVOID v34; // [rsp+38h] [rbp-21h] BYREF
  __int64 v35; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 v36; // [rsp+48h] [rbp-11h]
  GUID ActivityId; // [rsp+4Ch] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+60h] [rbp+7h] BYREF
  int *v39; // [rsp+80h] [rbp+27h]
  int v40; // [rsp+88h] [rbp+2Fh]
  int v41; // [rsp+8Ch] [rbp+33h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v36 = 0;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v35 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v41 = 0;
        v33 = v36;
        v40 = 4;
        v39 = &v33;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v38);
      }
    }
  }
  else
  {
    v35 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v35, v10, v12, v13);
  v16 = PsGetCurrentThreadWin32Thread(v14);
  if ( v16 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = PerformanceCounter.QuadPart - *(_QWORD *)(v16 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v18, 1);
    *(LARGE_INTEGER *)(v16 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(Object) = 0;
      McTemplateK0xqx_EtwWriteTransfer(v15, &AcquiredSharedUserCritEvent, v20, v18, Object, gullUserCritAcquireToken);
    }
    if ( v18 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(Object) = 1000000 * v18 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          (__int64)gullUserCritAcquireToken,
          &AcquiredSharedUserCritTelemetryEvent,
          v20,
          v18,
          Object,
          gullUserCritAcquireToken);
      }
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v21 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
  }
  else
  {
    v34 = 0LL;
    v22 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &v34, 0LL);
    v21 = v34;
    if ( v22 < 0 )
    {
      UserSetLastError(87LL, v23);
      v28 = 0;
      goto LABEL_47;
    }
    if ( (unsigned int)PsGetProcessSessionId(v34) != gSessionId )
    {
      v29 = 87LL;
      goto LABEL_44;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v21);
  }
  if ( CurrentProcessWin32Process )
  {
    v28 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
    goto LABEL_45;
  }
  v29 = 5023LL;
LABEL_44:
  UserSetLastError(v29, v24);
  v28 = 0;
LABEL_45:
  if ( v21 )
    ObfDereferenceObject(v21);
LABEL_47:
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v28;
}
