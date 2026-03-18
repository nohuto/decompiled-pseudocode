/*
 * XREFs of xxxHardErrorControl @ 0x1C0242CAC
 * Callers:
 *     NtUserHardErrorControl @ 0x1C01FD960 (NtUserHardErrorControl.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     CanForceForeground @ 0x1C00287E0 (CanForceForeground.c)
 *     zzzAttachToQueue @ 0x1C0038AB4 (zzzAttachToQueue.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BD330 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BD5C0 (xxxSetCsrssThreadDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  void **v15; // rbx
  _DWORD *v16; // rbx
  NTSTATUS v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // rax
  int v22; // ebx
  NTSTATUS v23; // eax
  PVOID v24; // rbp
  __int64 ThreadWin32Thread; // rax
  int v26; // eax
  int v27; // r9d
  __int128 v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+40h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        gHardErrorHandler = gptiCurrent;
LABEL_37:
        *(_DWORD *)(gptiCurrent + 480LL) &= ~0x40000000u;
        return 0LL;
      }
      return 1LL;
    case 1:
      if ( gHardErrorHandler == gptiCurrent )
      {
        gHardErrorHandler = 0LL;
        return 0LL;
      }
      return 1LL;
    case 2:
LABEL_39:
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 424LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL);
      goto LABEL_40;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(grpdeskRitInput) )
          {
            v6 = (_QWORD *)grpdeskRitInput;
            goto LABEL_29;
          }
LABEL_30:
          v12 = 0LL;
          goto LABEL_31;
        }
        if ( gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(gspdeskShouldBeForeground) )
          {
            v6 = (_QWORD *)gspdeskShouldBeForeground;
LABEL_29:
            v12 = ObQueryNameInfo(*v6) + 8;
LABEL_31:
            if ( v12
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v12 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v12 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v12 + 8))) )
            {
              UserSetLastError(5LL, v13, v14);
              return 2LL;
            }
            if ( a1 == 8 )
              goto LABEL_37;
            goto LABEL_39;
          }
          goto LABEL_30;
        }
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x40000000u;
      v7 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( !*(_DWORD *)(v7 + 396) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, a2);
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 396LL);
      v8 = (_DWORD *)*((_QWORD *)&gHardErrorHandler + 1);
      if ( !v8[99] && !v8[98] && (v8[97] & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(gHardErrorHandler, a2);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v9 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 424LL) != v9 )
      {
        AllocQueue(0LL, v9);
        ++*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 392LL);
        zzzAttachToQueue(gptiCurrent, *((struct tagQ **)&gHardErrorHandler + 1), 0LL, 0);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&Object);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
LABEL_40:
      v15 = (void **)grpdeskRitInput;
      if ( grpdeskRitInput
        && ((PVOID)grpdeskRitInput != gspdeskDisconnect
         || gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect) )
      {
        HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          v15 = (void **)gspdeskShouldBeForeground;
          HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 1;
        }
        v16 = *v15;
        PushW32ThreadLock((__int64)v16, &v28, UserDereferenceObject);
        if ( v16 )
          ObfReferenceObject(v16);
        v17 = xxxSetCsrssThreadDesktop(v16, a3);
        PopAndFreeW32ThreadLock((__int64)&v28);
        if ( v17 >= 0 )
        {
          v22 = 0;
          if ( a2 )
          {
            Object = 0LL;
            v23 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
            v24 = Object;
            if ( v23 >= 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
              if ( !ThreadWin32Thread || CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 416)) )
                v22 = 1;
              ObfDereferenceObject(v24);
            }
          }
          v26 = *(_DWORD *)(gptiCurrent + 480LL);
          if ( v22 )
          {
            *(_DWORD *)(gptiCurrent + 480LL) = v26 | 0x20;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v27 = 10;
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 480LL) = v26 & 0xFFFFFFDF;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v27 = 11;
          }
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_q(
            v19,
            v18,
            2,
            v27,
            (__int64)&WPP_7391b7e2570331a275a7a80e10f9077a_Traceguids,
            gptiCurrent,
            v28,
            v29);
          return 0LL;
        }
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          v20 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( !*(_DWORD *)(v20 + 396) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
            v20 = *(_QWORD *)(gptiCurrent + 424LL);
          }
          --*(_DWORD *)(v20 + 396);
          v21 = *(_DWORD **)(gptiCurrent + 424LL);
          if ( !v21[99] && !v21[98] && (v21[97] & 0x4000000) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
        }
      }
      return 1LL;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v10 = *(_QWORD *)(gptiCurrent + 448LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    return grpdeskRitInput != v10 ? 3 : 0;
  HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
  return 3LL;
}
