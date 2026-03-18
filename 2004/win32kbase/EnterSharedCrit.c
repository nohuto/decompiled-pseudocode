/*
 * XREFs of EnterSharedCrit @ 0x1C0091220
 * Callers:
 *     NtUserDestroyActivationObject @ 0x1C0005140 (NtUserDestroyActivationObject.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C0012BB0 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetHDevName @ 0x1C002F050 (NtUserGetHDevName.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C003E2C0 (NtUserGetKeyboardLayoutList.c)
 *     NtUserQueryActivationObject @ 0x1C004CE90 (NtUserQueryActivationObject.c)
 *     NtUserGetDpiForMonitor @ 0x1C0078AB0 (NtUserGetDpiForMonitor.c)
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 *     NtUserGetAsyncKeyState @ 0x1C00AC550 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C00AC8F0 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C00ACAB0 (NtUserGetKeyState.c)
 *     NtUserQueryDisplayConfig @ 0x1C00B3D90 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C00B4080 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C00B4150 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0132F60 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetClipCursor @ 0x1C01334B0 (NtUserGetClipCursor.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C01335F0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetPointerCursorId @ 0x1C0133980 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1C0133A70 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0133B60 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetPointerFrameTimes @ 0x1C0133C50 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInfoList @ 0x1C0133D60 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C0134260 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C0134460 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C0134570 (NtUserGetRawPointerDeviceData.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C014DBF0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtHWCursorUpdatePointer @ 0x1C014E260 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

struct tagTHREADINFO *__fastcall EnterSharedCrit(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  LARGE_INTEGER PerformanceCounter; // r14
  LONGLONG v16; // rbp
  struct UserCritTelemetry *Instance; // rax
  int v18; // ecx
  int v19; // r8d
  __int64 v21; // rax
  int v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 v24; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+44h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+58h] [rbp-50h] BYREF
  int *v27; // [rsp+78h] [rbp-30h]
  __int64 v28; // [rsp+80h] [rbp-28h]

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v24 = 0;
    v21 = PsGetCurrentThreadWin32Thread(v4);
    v23 = v21;
    if ( v21 && (*(int *)(v21 + 24) > 0 || *(_DWORD *)(v23 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v22 = v24;
        v28 = 4LL;
        v27 = &v22;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v26);
      }
    }
  }
  else
  {
    v23 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( v3
      || (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && a2 && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v23);
  v14 = PsGetCurrentThreadWin32Thread(v13);
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v16, 1LL);
    *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v18,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v19,
        v16,
        0,
        gullUserCritAcquireToken);
    }
    if ( v16 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v19,
          v16,
          1000000 * v16 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  return v6;
}
