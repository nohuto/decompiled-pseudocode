/*
 * XREFs of GreGetDCPoint @ 0x1C0060930
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrgEx @ 0x1C00608A0 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x1C00B2140 (GreGetDCOrg.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     UserIsUserCritSecIn @ 0x1C0060D80 (UserIsUserCritSecIn.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C0143B0C (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  DC *v7; // rsi
  _BOOL8 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // r12
  __int64 v20; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v22; // rbx
  struct tagTHREADINFO **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  PVOID CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r15
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v34; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // [rsp+30h] [rbp-59h] BYREF
  __int64 v45; // [rsp+38h] [rbp-51h] BYREF
  DC *v46[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v47; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 v48; // [rsp+58h] [rbp-31h]
  GUID ActivityId; // [rsp+5Ch] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+70h] [rbp-19h] BYREF
  int *v51; // [rsp+90h] [rbp+7h]
  __int64 v52; // [rsp+98h] [rbp+Fh]

  v46[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)v46, a1);
  v7 = v46[0];
  if ( !v46[0] )
    return 0;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v9 )
  {
    v42 = *((_QWORD *)v46[0] + 122);
    v43 = v42;
    if ( (*(_DWORD *)(v42 + 340) & 0x4000) != 0 && *(_DWORD *)(v42 + 104) == 7 )
    {
      DC::vMakeIso(v46[0]);
      v43 = *((_QWORD *)v7 + 122);
    }
    *(_QWORD *)a3 = *(_QWORD *)(v43 + 332);
    goto LABEL_9;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v37 = *(_QWORD *)(*((_QWORD *)v46[0] + 122) + 316LL);
LABEL_35:
    *(_QWORD *)a3 = v37;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
    goto LABEL_9;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v37 = *(_QWORD *)(*((_QWORD *)v46[0] + 122) + 324LL);
    goto LABEL_35;
  }
  v12 = v11 - 4;
  if ( v12 )
  {
    v13 = v12 - 8;
    if ( v13 )
    {
      if ( v13 == 16 )
      {
        *(_QWORD *)a3 = *((_QWORD *)v46[0] + (*((_DWORD *)v46[0] + 10) & 1LL) + 127);
        if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
        {
          v45 = 0LL;
          if ( (unsigned int)UserIsUserCritSecIn() )
          {
            v19 = 0;
          }
          else
          {
            v19 = 1;
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            ActivityId = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v48 = 0;
              v38 = PsGetCurrentThreadWin32Thread(v20);
              v47 = v38;
              if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
              {
                EtwActivityIdControl(3u, &ActivityId);
                if ( (unsigned int)dword_1C0244A70 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v39, v40) )
                  {
                    v44 = v48;
                    v52 = 4LL;
                    v51 = &v44;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (int)&dword_1C0244A70,
                      (int)&dword_1C0211E87,
                      (int)&ActivityId,
                      0,
                      3u,
                      &v50);
                  }
                }
              }
            }
            else
            {
              v47 = 0LL;
            }
            v22 = 0LL;
            while ( 1 )
            {
              v23 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
              if ( v23 )
                v22 = *v23;
              CurrentProcess = (PVOID)PsGetCurrentProcess(v25, v24);
              if ( CurrentProcess )
              {
                if ( CurrentProcess == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v28, v27) == gpepCSRSS && v22 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v22 == gptiRit )
              {
                break;
              }
              _InterlockedAdd(&gcDITHitTestWaiters, 1u);
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            InputTraceLogging::Perf::CritAcquire::~CritAcquire(
              (InputTraceLogging::Perf::CritAcquire *)&v47,
              v27,
              v29,
              v30);
            v32 = PsGetCurrentThreadWin32Thread(v31);
            if ( v32 )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v34 = PerformanceCounter.QuadPart - *(_QWORD *)(v32 + 8);
              Instance = UserCritTelemetry::getInstance();
              UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v34, 1);
              v15 = 0x200000010000000LL;
              *(LARGE_INTEGER *)(v32 + 8) = PerformanceCounter;
              if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C0243738 - 1) > 2u
                && (qword_1C0243720 & 0x200000010000000LL) != 0
                && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                McTemplateK0xqx_EtwWriteTransfer(
                  v16,
                  (unsigned int)&AcquiredSharedUserCritEvent,
                  v17,
                  v34,
                  0,
                  gullUserCritAcquireToken);
              }
              if ( v34 >= W32kEtwUserCritAcquireDelayTimeoutQPC
                && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                  McTemplateK0xqx_EtwWriteTransfer(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                    v17,
                    v34,
                    1000000 * v34 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
              }
              *(_QWORD *)(v32 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
            }
          }
          if ( qword_1C024F0D8 )
            v36 = qword_1C024F0D8(a1, &v45);
          else
            v36 = 0;
          if ( v36 )
          {
            *(_DWORD *)a3 += v45;
            *(_DWORD *)(a3 + 4) += HIDWORD(v45);
          }
          if ( v19 )
            UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
        }
        goto LABEL_9;
      }
LABEL_65:
      v6 = 0;
      goto LABEL_9;
    }
    if ( qword_1C024F250 )
      v41 = qword_1C024F250(v8);
    else
      v41 = -1073741637;
    if ( v41 < 0 )
      goto LABEL_9;
    if ( !qword_1C024F258 )
      goto LABEL_65;
    v6 = qword_1C024F258(a1, a3);
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v46[0] + 122) + 308LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 304LL);
  }
LABEL_9:
  XDCOBJ::vUnlockFast((XDCOBJ *)v46);
  return v6;
}
