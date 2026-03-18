/*
 * XREFs of xxxCreateWindowStation @ 0x1C000CF8C
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C7F0 (EditionCreateWindowStationEntryPoint.c)
 *     xxxConnectService @ 0x1C0125844 (xxxConnectService.c)
 * Callees:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C000C210 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxInitWindowStation @ 0x1C000C67C (xxxInitWindowStation.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C000E9D8 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00C08F4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C00D7E10 (zzzSetDesktop.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012D6C0 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  char *v14; // r12
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  NTSTATUS GlobalAtomTable; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS DesktopNotificationEvent; // esi
  struct tagWND **v22; // rbx
  NTSTATUS inserted; // eax
  _QWORD *i; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  int v28; // esi
  int v29; // esi
  __int64 CurrentProcessWin32Process; // rax
  BOOL v31; // edi
  __int64 Window; // rdi
  ULONG v33; // esi
  ULONG v34; // edi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v38; // eax
  NTSTATUS v39; // ecx
  ULONG v40; // eax
  ULONG v41; // eax
  int v42; // edi
  __int64 v43; // rbx
  int v44; // edi
  PVOID Object; // [rsp+98h] [rbp-69h] BYREF
  _BYTE v46[8]; // [rsp+A0h] [rbp-61h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-59h]
  HANDLE Handle; // [rsp+B0h] [rbp-51h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-49h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-41h]
  _QWORD v51[2]; // [rsp+C8h] [rbp-39h] BYREF
  _BYTE v52[16]; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-19h]
  __int128 v54; // [rsp+F0h] [rbp-11h] BYREF
  __int64 v55; // [rsp+100h] [rbp-1h]
  int v56; // [rsp+148h] [rbp+47h]
  __int64 v58; // [rsp+160h] [rbp+5Fh]

  v58 = a4;
  v49 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v13 = 0;
  v56 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = (char *)&gTermNOIO;
  }
  else
  {
    v14 = (char *)gTermIO;
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 216, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v38 = RtlNtStatusToDosError(v15);
    UserSetLastError(v38);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xD8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 7) = v14;
    if ( (*(_DWORD *)v14 & 2) != 0 )
      *((_DWORD *)Object + 16) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*(_DWORD *)v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v39 = GlobalAtomTable;
      goto LABEL_48;
    }
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v39 = -1073741801;
LABEL_48:
      v40 = RtlNtStatusToDosError(v39);
      UserSetLastError(v40);
      goto LABEL_60;
    }
    v22 = (struct tagWND **)(v14 + 8);
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
          v13 = v56;
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
        DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v49);
        if ( DesktopNotificationEvent >= 0 )
        {
          for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
            ;
          LockObjectAssignment(i, Object);
          if ( (*((_DWORD *)Object + 16) & 4) == 0 )
          {
            if ( a8 )
            {
              v54 = 0LL;
              v55 = 0LL;
              PushW32ThreadLock(Object, &v54, UserDereferenceObject);
              if ( !xxxSafeLoadKeyboardLayoutEx(Object, v58, 0LL, a5, a6, a7, a8, a9, -2147483647) )
                DesktopNotificationEvent = -1073741823;
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = v54;
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
    v26 = *(_QWORD *)(gptiCurrent + 424LL);
    v27 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    v11 = *(void **)(gptiCurrent + 456LL);
    v47 = *(_QWORD *)(gptiCurrent + 592LL);
    v50 = v26;
    *(_QWORD *)(gptiCurrent + 424LL) = v27;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 744LL) != gptiCurrent + 744LL )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v18, v19, v20);
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v46);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 456LL) && v11 )
        zzzSetDesktop(gptiCurrent);
      UserAtomicCheck::Detach((UserAtomicCheck *)v46);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 424LL) = v26;
    }
    else
    {
      v28 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(gptiCurrent + 488LL) = v28 | 0x10000000;
      v29 = v28 & 0x10000000;
      v31 = 0;
      if ( PsGetCurrentProcessWin32Process() )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v31 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(v52, 0LL);
      v53 = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 32769,
                 32769,
                 0,
                 -2113929216,
                 -32768,
                 -32768,
                 0xFFFF,
                 0xFFFF,
                 0LL,
                 (__int64)v52,
                 hModuleWin,
                 0LL,
                 1,
                 778,
                 v31,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v52);
      if ( Window )
      {
        v51[0] = v14 + 8;
        v51[1] = Window;
        HMAssignmentLock(v51);
        *(_DWORD *)(gptiCurrent + 488LL) = v29 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        SetVisible(*v22);
        HMChangeOwnerThread(*v22, *((_QWORD *)v14 + 2));
        v13 = 1;
        *(_QWORD *)(gptiCurrent + 424LL) = v50;
        v56 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent);
        if ( DesktopNotificationEvent < 0 )
        {
          UserAtomicCheck::Detach((UserAtomicCheck *)v46);
          zzzEndDeferWinEventNotify();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v46);
          goto LABEL_60;
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v46);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      UserAtomicCheck::Detach((UserAtomicCheck *)v46);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 424LL) = v50;
      zzzSetDesktop(gptiCurrent);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v46);
    v13 = 0;
    goto LABEL_60;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_60:
  v41 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v41);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v42 = *(_DWORD *)(v10 + 488);
    v43 = *(_QWORD *)(v10 + 424);
    *(_DWORD *)(v10 + 488) = v42 | 0x10000000;
    *(_QWORD *)(v10 + 424) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v49);
    xxxCleanupMotherDesktopWindow(v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v49);
    v44 = (*(_DWORD *)(v10 + 488) ^ v42) & 0x10000000;
    *(_QWORD *)(v10 + 424) = v43;
    *(_DWORD *)(v10 + 488) ^= v44;
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
