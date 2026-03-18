/*
 * XREFs of xxxCreateWindowStation @ 0x1C00C1C7C
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C00C14E0 (EditionCreateWindowStationEntryPoint.c)
 *     xxxConnectService @ 0x1C0124554 (xxxConnectService.c)
 * Callees:
 *     xxxInitWindowStation @ 0x1C0009574 (xxxInitWindowStation.c)
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0033860 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     zzzSetDesktop @ 0x1C00B3880 (zzzSetDesktop.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BA988 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00C1070 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00C3438 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        char a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        HANDLE *a10)
{
  __int64 v10; // r14
  void *v11; // r15
  void *SecurityDescriptor; // r13
  int v13; // edi
  int *v14; // r12
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  NTSTATUS GlobalAtomTable; // eax
  __int64 v18; // rdx
  NTSTATUS DesktopNotificationEvent; // esi
  struct tagWND **v20; // rbx
  NTSTATUS inserted; // eax
  _QWORD *i; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  int v26; // esi
  int v27; // esi
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v30; // edi
  __int64 Window; // rdi
  void *v32; // r8
  ULONG v33; // esi
  ULONG v34; // edi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  NTSTATUS v41; // ecx
  ULONG v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  void *v45; // r8
  ULONG v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // edi
  __int64 v50; // rbx
  int v51; // edi
  PVOID Object; // [rsp+98h] [rbp-69h] BYREF
  _BYTE v53[8]; // [rsp+A0h] [rbp-61h] BYREF
  void *v54; // [rsp+A8h] [rbp-59h]
  HANDLE Handle; // [rsp+B0h] [rbp-51h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-49h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-41h]
  _QWORD v58[2]; // [rsp+C8h] [rbp-39h] BYREF
  _QWORD v59[3]; // [rsp+D8h] [rbp-29h] BYREF
  __int128 v60; // [rsp+F0h] [rbp-11h] BYREF
  __int64 v61; // [rsp+100h] [rbp-1h]
  int v62; // [rsp+148h] [rbp+47h]
  __int64 v64; // [rsp+160h] [rbp+5Fh]

  v64 = a4;
  v56 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v13 = 0;
  v62 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO[0];
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 216, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v38 = RtlNtStatusToDosError(v15);
    UserSetLastError(v38, v39, v40);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xD8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 7) = v14;
    if ( (*v14 & 2) != 0 )
      *((_DWORD *)Object + 16) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v41 = GlobalAtomTable;
      goto LABEL_48;
    }
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v41 = -1073741801;
LABEL_48:
      v42 = RtlNtStatusToDosError(v41);
      UserSetLastError(v42, v43, v44);
      goto LABEL_60;
    }
    v20 = (struct tagWND **)(v14 + 2);
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 16) & 4) == 0 )
      {
        v33 = RtlLengthSid(SeExports->SeWorldSid);
        v34 = v33 + 8;
        v35 = Win32AllocPoolWithQuota(v33 + 8, 1702064981LL);
        v36 = v35;
        if ( !v35
          || (*(_WORD *)v35 = 0,
              *(_WORD *)(v35 + 2) = v34,
              *(_DWORD *)(v35 + 4) = 0x100000,
              RtlCopySid(v33, (PSID)(v35 + 8), SeExports->SeWorldSid),
              SecurityDescriptor = (void *)CreateSecurityDescriptor(v36, v34, 0LL),
              Win32FreePool(v36),
              !SecurityDescriptor) )
        {
          DesktopNotificationEvent = -1073741801;
          goto LABEL_59;
        }
        DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor);
        if ( DesktopNotificationEvent < 0 )
        {
LABEL_59:
          v13 = v62;
          goto LABEL_60;
        }
        Win32FreePool(SecurityDescriptor);
      }
      inserted = ObInsertObject(Object, 0LL, a3, 1u, &Object, &Handle);
      DesktopNotificationEvent = inserted;
      if ( inserted < 0 )
      {
        Object = 0LL;
      }
      else
      {
        if ( inserted == 0x40000000 )
        {
LABEL_20:
          ObfDereferenceObject(Object);
          *a10 = Handle;
          return 0LL;
        }
        DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v56);
        if ( DesktopNotificationEvent >= 0 )
        {
          for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
            ;
          LockObjectAssignment(i, Object);
          if ( (*((_DWORD *)Object + 16) & 4) == 0 )
          {
            if ( a8 )
            {
              v60 = 0LL;
              v61 = 0LL;
              PushW32ThreadLock((__int64)Object, &v60, UserDereferenceObject);
              if ( !xxxSafeLoadKeyboardLayoutEx(Object, v64, 0LL, a5, a6, a7, a8, a9, -2147483647) )
                DesktopNotificationEvent = -1073741823;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = v60;
            }
          }
        }
      }
      SecurityDescriptor = 0LL;
      if ( DesktopNotificationEvent >= 0 )
        goto LABEL_20;
      goto LABEL_59;
    }
    v10 = gptiCurrent;
    v24 = *(_QWORD *)(gptiCurrent + 416LL);
    v25 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
    v11 = *(void **)(gptiCurrent + 448LL);
    v54 = *(void **)(gptiCurrent + 584LL);
    v57 = v24;
    *(_QWORD *)(gptiCurrent + 416LL) = v25;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 736LL) != gptiCurrent + 736LL )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v18);
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v53);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 448LL) && v11 )
        zzzSetDesktop(gptiCurrent, (unsigned int *)v11, v54);
      UserAtomicCheck::Detach((UserAtomicCheck *)v53);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 416LL) = v24;
    }
    else
    {
      v26 = *(_DWORD *)(gptiCurrent + 480LL);
      *(_DWORD *)(gptiCurrent + 480LL) = v26 | 0x10000000;
      v27 = v26 & 0x10000000;
      v30 = 0;
      if ( PsGetCurrentProcessWin32Process(0x10000000LL) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v30 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(v59, 0LL);
      v59[2] = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 (wchar_t *)0x8001,
                 32769LL,
                 0LL,
                 -2113929216,
                 -32768,
                 -32768,
                 0xFFFFu,
                 0xFFFFu,
                 0LL,
                 (__int64)v59,
                 hModuleWin,
                 0LL,
                 1u,
                 778,
                 v30,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v59);
      if ( Window )
      {
        v58[0] = v14 + 2;
        v58[1] = Window;
        HMAssignmentLock(v58);
        *(_DWORD *)(gptiCurrent + 480LL) = v27 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
        SetVisible(*v20, 1u);
        HMChangeOwnerThread(*v20, *((_QWORD *)v14 + 2));
        v13 = 1;
        v32 = v54;
        *(_QWORD *)(gptiCurrent + 416LL) = v57;
        v62 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (unsigned int *)v11, v32);
        if ( DesktopNotificationEvent < 0 )
        {
          UserAtomicCheck::Detach((UserAtomicCheck *)v53);
          zzzEndDeferWinEventNotify();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v53);
          goto LABEL_60;
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v53);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      UserAtomicCheck::Detach((UserAtomicCheck *)v53);
      zzzEndDeferWinEventNotify();
      v45 = v54;
      *(_QWORD *)(gptiCurrent + 416LL) = v57;
      zzzSetDesktop(gptiCurrent, (unsigned int *)v11, v45);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v53);
    v13 = 0;
    goto LABEL_60;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_60:
  v46 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v46, v47, v48);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v49 = *(_DWORD *)(v10 + 480);
    v50 = *(_QWORD *)(v10 + 416);
    *(_DWORD *)(v10 + 480) = v49 | 0x10000000;
    *(_QWORD *)(v10 + 416) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v56);
    xxxCleanupMotherDesktopWindow((__int64)v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v56);
    v51 = (*(_DWORD *)(v10 + 480) ^ v49) & 0x10000000;
    *(_QWORD *)(v10 + 416) = v50;
    *(_DWORD *)(v10 + 480) ^= v51;
    zzzEndDeferWinEventNotify();
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)DesktopNotificationEvent;
}
