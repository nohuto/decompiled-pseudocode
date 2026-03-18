/*
 * XREFs of GreGetDCPoint @ 0x1C00A4F40
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrgEx @ 0x1C00A4EB0 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x1C00A6670 (GreGetDCOrg.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     UserIsUserCritSecIn @ 0x1C00A5D80 (UserIsUserCritSecIn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C0145FB0 (-vMakeIso@DC@@QEAAXXZ.c)
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
  __int64 v29; // rcx
  __int64 v30; // r15
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v32; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // [rsp+30h] [rbp-59h] BYREF
  __int64 v41; // [rsp+38h] [rbp-51h] BYREF
  DC *v42[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v43; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 v44; // [rsp+58h] [rbp-31h]
  GUID ActivityId; // [rsp+5Ch] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+70h] [rbp-19h] BYREF
  int *v47; // [rsp+90h] [rbp+7h]
  __int64 v48; // [rsp+98h] [rbp+Fh]

  v42[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)v42, a1);
  v7 = v42[0];
  if ( !v42[0] )
    return 0;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v9 )
  {
    v38 = *((_QWORD *)v42[0] + 122);
    v39 = v38;
    if ( (*(_DWORD *)(v38 + 340) & 0x4000) != 0 && *(_DWORD *)(v38 + 104) == 7 )
    {
      DC::vMakeIso(v42[0]);
      v39 = *((_QWORD *)v7 + 122);
    }
    *(_QWORD *)a3 = *(_QWORD *)(v39 + 332);
    goto LABEL_9;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v35 = *(_QWORD *)(*((_QWORD *)v42[0] + 122) + 316LL);
LABEL_35:
    *(_QWORD *)a3 = v35;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
    goto LABEL_9;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v35 = *(_QWORD *)(*((_QWORD *)v42[0] + 122) + 324LL);
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
        *(_QWORD *)a3 = *((_QWORD *)v42[0] + (*((_DWORD *)v42[0] + 10) & 1LL) + 127);
        if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
        {
          v41 = 0LL;
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
              v44 = 0;
              v36 = PsGetCurrentThreadWin32Thread(v20);
              v43 = v36;
              if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
              {
                EtwActivityIdControl(3u, &ActivityId);
                if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v40 = v44;
                  v48 = 4LL;
                  v47 = &v40;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E87,
                    &ActivityId,
                    0LL,
                    3u,
                    &v46);
                }
              }
            }
            else
            {
              v43 = 0LL;
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
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v43);
            v30 = PsGetCurrentThreadWin32Thread(v29);
            if ( v30 )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v32 = PerformanceCounter.QuadPart - *(_QWORD *)(v30 + 8);
              Instance = UserCritTelemetry::getInstance();
              UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v32, 1);
              v15 = 0x200000010000000LL;
              *(LARGE_INTEGER *)(v30 + 8) = PerformanceCounter;
              if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C0245748 - 1) > 2u
                && (qword_1C0245730 & 0x200000010000000LL) != 0
                && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                McTemplateK0xqx_EtwWriteTransfer(
                  v16,
                  (unsigned int)&AcquiredSharedUserCritEvent,
                  v17,
                  v32,
                  0,
                  gullUserCritAcquireToken);
              }
              if ( v32 >= W32kEtwUserCritAcquireDelayTimeoutQPC
                && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                  McTemplateK0xqx_EtwWriteTransfer(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                    v17,
                    v32,
                    1000000 * v32 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
              }
              *(_QWORD *)(v30 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
            }
          }
          if ( qword_1C02510D8 )
            v34 = qword_1C02510D8(a1, &v41);
          else
            v34 = 0;
          if ( v34 )
          {
            *(_DWORD *)a3 += v41;
            *(_DWORD *)(a3 + 4) += HIDWORD(v41);
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
    if ( qword_1C0251250 )
      v37 = qword_1C0251250(v8);
    else
      v37 = -1073741637;
    if ( v37 < 0 )
      goto LABEL_9;
    if ( !qword_1C0251258 )
      goto LABEL_65;
    v6 = qword_1C0251258(a1, a3);
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v42[0] + 122) + 308LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 304LL);
  }
LABEL_9:
  XDCOBJ::vUnlockFast((XDCOBJ *)v42);
  return v6;
}
