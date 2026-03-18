/*
 * XREFs of GreGetDCPoint @ 0x1C00B4970
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrg @ 0x1C00B4620 (GreGetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00B48E0 (GreGetDCOrgEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     UserIsUserCritSecIn @ 0x1C00B4D20 (UserIsUserCritSecIn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C014C300 (-vMakeIso@DC@@QEAAXXZ.c)
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
  __int64 v15; // rcx
  char v16; // r12
  __int64 v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v19; // rbx
  struct tagTHREADINFO **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r15
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v29; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v31; // r8d
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // [rsp+30h] [rbp-59h] BYREF
  __int64 v39; // [rsp+38h] [rbp-51h] BYREF
  DC *v40[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v41; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 v42; // [rsp+58h] [rbp-31h]
  GUID ActivityId; // [rsp+5Ch] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+70h] [rbp-19h] BYREF
  int *v45; // [rsp+90h] [rbp+7h]
  __int64 v46; // [rsp+98h] [rbp+Fh]

  v40[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)v40, a1);
  v7 = v40[0];
  if ( !v40[0] )
    return 0;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v9 )
  {
    v36 = *((_QWORD *)v40[0] + 122);
    v37 = v36;
    if ( (*(_DWORD *)(v36 + 340) & 0x4000) != 0 && *(_DWORD *)(v36 + 104) == 7 )
    {
      DC::vMakeIso(v40[0]);
      v37 = *((_QWORD *)v7 + 122);
    }
    *(_QWORD *)a3 = *(_QWORD *)(v37 + 332);
    goto LABEL_9;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v33 = *(_QWORD *)(*((_QWORD *)v40[0] + 122) + 316LL);
LABEL_35:
    *(_QWORD *)a3 = v33;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
    goto LABEL_9;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v33 = *(_QWORD *)(*((_QWORD *)v40[0] + 122) + 324LL);
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
        *(_QWORD *)a3 = *((_QWORD *)v40[0] + (*((_DWORD *)v40[0] + 10) & 1LL) + 127);
        if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
        {
          v39 = 0LL;
          if ( (unsigned int)UserIsUserCritSecIn() )
          {
            v16 = 0;
          }
          else
          {
            v16 = 1;
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            ActivityId = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v42 = 0;
              v34 = PsGetCurrentThreadWin32Thread(v17);
              v41 = v34;
              if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
              {
                EtwActivityIdControl(3u, &ActivityId);
                if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v38 = v42;
                  v46 = 4LL;
                  v45 = &v38;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199F7,
                    &ActivityId,
                    0LL,
                    3u,
                    &v44);
                }
              }
            }
            else
            {
              v41 = 0LL;
            }
            v19 = 0LL;
            while ( 1 )
            {
              v20 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
              if ( v20 )
                v19 = *v20;
              CurrentProcess = (PVOID)PsGetCurrentProcess(v22, v21);
              if ( CurrentProcess )
              {
                if ( CurrentProcess == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v25, v24) == gpepCSRSS && v19 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v19 == gptiRit )
              {
                break;
              }
              _InterlockedAdd(&gcDITHitTestWaiters, 1u);
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v41);
            v27 = PsGetCurrentThreadWin32Thread(v26);
            if ( v27 )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v29 = PerformanceCounter.QuadPart - *(_QWORD *)(v27 + 8);
              Instance = UserCritTelemetry::getInstance();
              UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v29, 1);
              *(LARGE_INTEGER *)(v27 + 8) = PerformanceCounter;
              if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C024B738 - 1) > 2u
                && (qword_1C024B720 & 0x200000010000000LL) != 0
                && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                McTemplateK0xqx_EtwWriteTransfer(
                  v15,
                  (unsigned int)&AcquiredSharedUserCritEvent,
                  v31,
                  v29,
                  0,
                  gullUserCritAcquireToken);
              }
              if ( v29 >= W32kEtwUserCritAcquireDelayTimeoutQPC
                && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                  McTemplateK0xqx_EtwWriteTransfer(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                    v31,
                    v29,
                    1000000 * v29 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
              }
              *(_QWORD *)(v27 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
            }
          }
          if ( qword_1C0257098 )
            v32 = qword_1C0257098(a1, &v39);
          else
            v32 = 0;
          if ( v32 )
          {
            *(_DWORD *)a3 += v39;
            *(_DWORD *)(a3 + 4) += HIDWORD(v39);
          }
          if ( v16 )
            UserSessionSwitchLeaveCrit(v15);
        }
        goto LABEL_9;
      }
LABEL_65:
      v6 = 0;
      goto LABEL_9;
    }
    if ( qword_1C0257210 )
      v35 = qword_1C0257210(v8);
    else
      v35 = -1073741637;
    if ( v35 < 0 )
      goto LABEL_9;
    if ( !qword_1C0257218 )
      goto LABEL_65;
    v6 = qword_1C0257218(a1, a3);
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v40[0] + 122) + 308LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 304LL);
  }
LABEL_9:
  XDCOBJ::vUnlockFast((XDCOBJ *)v40);
  return v6;
}
