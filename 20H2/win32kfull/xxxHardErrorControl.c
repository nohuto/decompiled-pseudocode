/*
 * XREFs of xxxHardErrorControl @ 0x1C0241A0C
 * Callers:
 *     NtUserHardErrorControl @ 0x1C01FCAF0 (NtUserHardErrorControl.c)
 * Callees:
 *     CanForceForeground @ 0x1C003BA20 (CanForceForeground.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007DBE0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007DE70 (xxxSetCsrssThreadDesktop.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3, __int64 a4)
{
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  void **v15; // rbx
  _DWORD *v16; // rbx
  NTSTATUS v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _DWORD *v23; // rax
  int v24; // ebx
  NTSTATUS v25; // eax
  PVOID v26; // rbp
  __int64 ThreadWin32Thread; // rax
  int v28; // eax
  int v29; // r9d
  __int128 v30; // [rsp+30h] [rbp-38h] BYREF
  __int64 v31; // [rsp+40h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0LL;
  v31 = 0LL;
  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        gHardErrorHandler = gptiCurrent;
LABEL_37:
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
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
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 432LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL);
      goto LABEL_40;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(grpdeskRitInput) )
          {
            v7 = (_QWORD *)grpdeskRitInput;
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
            v7 = (_QWORD *)gspdeskShouldBeForeground;
LABEL_29:
            v12 = ObQueryNameInfo(*v7) + 8;
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
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
      v8 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( !*(_DWORD *)(v8 + 396) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3, a4);
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 396LL);
      v9 = (_DWORD *)*((_QWORD *)&gHardErrorHandler + 1);
      if ( !v9[99] && !v9[98] && (v9[97] & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(gHardErrorHandler, a2, a3, a4);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      if ( *(_QWORD *)(gptiCurrent + 432LL) != *((_QWORD *)&gHardErrorHandler + 1) )
      {
        AllocQueue(0LL);
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
        LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          v15 = (void **)gspdeskShouldBeForeground;
          LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 1;
        }
        v16 = *v15;
        PushW32ThreadLock((__int64)v16, &v30, UserDereferenceObject);
        if ( v16 )
          ObfReferenceObject(v16);
        v17 = xxxSetCsrssThreadDesktop(v16, a3);
        PopAndFreeW32ThreadLock((__int64)&v30);
        if ( v17 >= 0 )
        {
          v24 = 0;
          if ( a2 )
          {
            Object = 0LL;
            v25 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
            v26 = Object;
            if ( v25 >= 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
              if ( !ThreadWin32Thread || CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 424)) )
                v24 = 1;
              ObfDereferenceObject(v26);
            }
          }
          v28 = *(_DWORD *)(gptiCurrent + 488LL);
          if ( v24 )
          {
            *(_DWORD *)(gptiCurrent + 488LL) = v28 | 0x20;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v29 = 10;
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 488LL) = v28 & 0xFFFFFFDF;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v29 = 11;
          }
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_q(
            v19,
            v18,
            2,
            v29,
            (__int64)&WPP_7391b7e2570331a275a7a80e10f9077a_Traceguids,
            gptiCurrent,
            v30,
            v31);
          return 0LL;
        }
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          v22 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( !*(_DWORD *)(v22 + 396) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
            v22 = *(_QWORD *)(gptiCurrent + 432LL);
          }
          --*(_DWORD *)(v22 + 396);
          v23 = *(_DWORD **)(gptiCurrent + 432LL);
          if ( !v23[99] && !v23[98] && (v23[97] & 0x4000000) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
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
  v10 = *(_QWORD *)(gptiCurrent + 456LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    return grpdeskRitInput != v10 ? 3 : 0;
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
  return 3LL;
}
