/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00110D4
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000E688 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     EditionCreateDesktopEntryPoint @ 0x1C000F400 (EditionCreateDesktopEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C00103F0 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C0125844 (xxxConnectService.c)
 * Callees:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000E688 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C00121F4 (OpenDesktopCompletion.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00135E4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     zzzDecomposeDesktop @ 0x1C001C008 (zzzDecomposeDesktop.c)
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00571B0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     _CloseDesktop @ 0x1C007DCF8 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C007DE18 (CloseProtectedHandle.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x1C0081274 (DwmAsyncDesktopFree.c)
 *     DwmAsyncDesktopCreate @ 0x1C0081BE4 (DwmAsyncDesktopCreate.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C00D7E10 (zzzSetDesktop.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C012CEAC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C012CED4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C015B368 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01E8DC0 (-CleanupDirtyDesktops@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  int v6; // r11d
  __int64 Window; // r13
  int v9; // r14d
  NTSTATUS v10; // eax
  int v11; // ebx
  ULONG v12; // eax
  ULONG v13; // eax
  int v14; // eax
  PVOID v15; // rsi
  ULONG v16; // eax
  __int64 v17; // r14
  ULONG v18; // eax
  struct tagWINDOWSTATION *v19; // r12
  void *v20; // rax
  int v21; // esi
  struct tagWINDOWSTATION **v22; // rcx
  int v23; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v25; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rsi
  __int64 v37; // rax
  BOOL v38; // ebx
  __int64 v39; // rbx
  __int64 v40; // rax
  LeaveEnterCrit *v41; // rcx
  void *v42; // rcx
  __int64 v43; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  int v47; // edx
  _QWORD *v48; // rcx
  __int64 v49; // r12
  void *v50; // rax
  HANDLE Handle; // [rsp+90h] [rbp-248h] BYREF
  struct tagWINDOWSTATION *v52; // [rsp+98h] [rbp-240h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp-238h]
  _BYTE v54[4]; // [rsp+A4h] [rbp-234h] BYREF
  int v55; // [rsp+A8h] [rbp-230h]
  PVOID Object; // [rsp+B0h] [rbp-228h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-220h]
  int v58; // [rsp+C0h] [rbp-218h]
  __int64 v59; // [rsp+C8h] [rbp-210h]
  PVOID v60; // [rsp+D0h] [rbp-208h]
  __int64 v61; // [rsp+D8h] [rbp-200h]
  _QWORD *v62; // [rsp+E8h] [rbp-1F0h]
  __int128 v63; // [rsp+F0h] [rbp-1E8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v64; // [rsp+100h] [rbp-1D8h] BYREF
  _BYTE v65[8]; // [rsp+108h] [rbp-1D0h] BYREF
  __int64 v66; // [rsp+110h] [rbp-1C8h]
  __int64 v67; // [rsp+118h] [rbp-1C0h]
  __int64 v68; // [rsp+120h] [rbp-1B8h]
  _BYTE v69[8]; // [rsp+128h] [rbp-1B0h] BYREF
  _BYTE v70[8]; // [rsp+130h] [rbp-1A8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+138h] [rbp-1A0h] BYREF
  HWINSTA v72; // [rsp+140h] [rbp-198h]
  _BYTE v73[16]; // [rsp+148h] [rbp-190h] BYREF
  _DWORD v74[2]; // [rsp+158h] [rbp-180h] BYREF
  __int64 v75; // [rsp+160h] [rbp-178h]
  PVOID v76; // [rsp+168h] [rbp-170h]
  int v77; // [rsp+170h] [rbp-168h]
  int v78; // [rsp+174h] [rbp-164h]
  __int128 v79; // [rsp+178h] [rbp-160h] BYREF
  __int64 v80; // [rsp+188h] [rbp-150h]
  __int128 v81; // [rsp+190h] [rbp-148h] BYREF
  __int64 v82; // [rsp+1A0h] [rbp-138h]
  __int128 v83; // [rsp+1A8h] [rbp-130h] BYREF
  __int64 v84; // [rsp+1B8h] [rbp-120h]
  __int128 v85; // [rsp+1C0h] [rbp-118h] BYREF
  __int64 v86; // [rsp+1D0h] [rbp-108h]
  _QWORD v87[2]; // [rsp+1E0h] [rbp-F8h] BYREF
  _QWORD v88[2]; // [rsp+1F0h] [rbp-E8h] BYREF
  _QWORD v89[2]; // [rsp+200h] [rbp-D8h] BYREF
  _QWORD v90[4]; // [rsp+210h] [rbp-C8h] BYREF
  __int128 v91; // [rsp+230h] [rbp-A8h] BYREF
  _BYTE v92[24]; // [rsp+240h] [rbp-98h] BYREF
  _BYTE v93[24]; // [rsp+258h] [rbp-80h] BYREF
  _BYTE v94[32]; // [rsp+270h] [rbp-68h] BYREF
  __int128 v95; // [rsp+290h] [rbp-48h] BYREF
  _BYTE v96[16]; // [rsp+2A0h] [rbp-38h] BYREF
  _BYTE v97[16]; // [rsp+2B0h] [rbp-28h] BYREF

  v6 = a3;
  Handle = 0LL;
  Window = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v9 = 0;
  v55 = -1;
  v85 = 0LL;
  v86 = 0LL;
  v58 = 0;
  v53 = 0;
  v72 = *(HWINSTA *)(a1 + 8);
  v64.HandleAttributes = gSessionId;
  v64.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v64, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = RtlNtStatusToDosError(v10);
    UserSetLastError(v12);
    CleanupDirtyDesktops();
LABEL_83:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v13 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v13);
      CloseProtectedHandle(Handle);
LABEL_6:
      v11 = -1073741801;
      goto LABEL_83;
    }
    *a5 = Handle;
    v9 = 1;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v14;
  v15 = Object;
  v60 = Object;
  if ( v14 < 0 )
  {
    v16 = RtlNtStatusToDosError(v14);
    UserSetLastError(v16);
    CloseProtectedHandle(Handle);
    goto LABEL_83;
  }
  if ( v9 )
  {
    v11 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v11;
  }
  v52 = (struct tagWINDOWSTATION *)*((_QWORD *)Object + 5);
  v17 = *((_QWORD *)v52 + 7);
  v62 = (_QWORD *)*((_QWORD *)Object + 1);
  v62[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle);
    ObfDereferenceObject(v15);
    goto LABEL_6;
  }
  if ( gpepCSRSS )
  {
    v74[1] = 0;
    v74[0] = 1;
    v75 = gpepCSRSS;
    v76 = v15;
    v77 = 0;
    v78 = 1;
    v11 = MapDesktop(v74);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle);
      ObfDereferenceObject(v15);
      v18 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v18);
      goto LABEL_83;
    }
  }
  v61 = ReferenceDwmApiPort();
  v19 = v52;
  if ( v61 )
  {
    if ( (*((_DWORD *)v52 + 16) & 0x200) != 0 )
    {
      v20 = (void *)ReferenceDwmApiPort();
      DwmAsyncDesktopCreate(v20);
      zzzComposeDesktop((struct tagDESKTOP *)v15);
      v58 = 1;
    }
    DereferenceDwmApiPort(v61);
  }
  v66 = *(_QWORD *)(gptiCurrent + 424LL);
  v61 = *(_QWORD *)(v66 + 336);
  v68 = *(_QWORD *)(gptiCurrent + 456LL);
  v67 = *(_QWORD *)(gptiCurrent + 592LL);
  *(_QWORD *)(gptiCurrent + 424LL) = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 424LL);
  PushW32ThreadLock(v15, &v85, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v52);
  v21 = zzzSetDesktop(gptiCurrent);
  if ( v21 < 0 )
    goto LABEL_24;
  v53 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  v23 = *(_DWORD *)(gptiCurrent + 488LL);
  v55 = v23 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 488LL) = v23 | 0x10000000;
  v63 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !PsGetCurrentProcessWin32Process()
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
        v25 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v25 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v92, 0LL);
  Window = xxxCreateWindowEx(
             0,
             32769,
             32769,
             0,
             -2113929216,
             v63,
             DWORD1(v63),
             DWORD2(v63) - (int)v63,
             HIDWORD(v63) - DWORD1(v63),
             0LL,
             (__int64)v92,
             hModuleWin,
             0LL,
             1,
             778,
             v25,
             0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v92);
  if ( !Window )
    goto LABEL_30;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v79 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v79;
  *((_QWORD *)&v79 + 1) = Window;
  HMLockObject(Window);
  if ( !PsGetCurrentProcessWin32Process()
    || (v27 = PsGetCurrentProcessWin32Process(), v28 = 1, !(unsigned int)IsImmersiveAppRestricted(v27)) )
  {
    v28 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v93, 0LL);
  v29 = xxxCreateWindowEx(
          0,
          (unsigned __int16)gatomMessage,
          (unsigned __int16)gatomMessage,
          0,
          -2113929216,
          0,
          0,
          100,
          100,
          0LL,
          (__int64)v93,
          hModuleWin,
          0LL,
          1,
          778,
          v28,
          0LL);
  v57 = v29;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v93);
  if ( !v29 )
    goto LABEL_30;
  v33 = *(unsigned __int16 *)(*(_QWORD *)(v29 + 40) + 42LL);
  if ( (v33 & 0xFFFF3FFF) != 0 )
  {
    if ( (v33 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v30, v31, v32);
    v21 = -1073741790;
    goto LABEL_24;
  }
  v34 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v81 = *(_QWORD *)(v34 + 416);
  *(_QWORD *)(v34 + 416) = &v81;
  *((_QWORD *)&v81 + 1) = v29;
  HMLockObject(v29);
  *(_WORD *)(*(_QWORD *)(v29 + 40) + 42LL) = *(_WORD *)(*(_QWORD *)(v29 + 40) + 42LL) & 0xC000 | 0x29F;
  v35 = v62 + 3;
  *(_QWORD *)(*v62 + 8LL) = *(_QWORD *)(Window + 48);
  v87[0] = v35;
  v87[1] = Window;
  HMAssignmentLock(v87);
  SetOrClrWF(0LL, Window, 1799LL, 1LL);
  SetOrClrWF(1LL, Window, 1794LL, 1LL);
  if ( (*((_DWORD *)v19 + 16) & 4) == 0 && !gspwndFullScreen )
  {
    v88[0] = &gspwndFullScreen;
    v88[1] = Window;
    HMAssignmentLock(v88);
  }
  v91 = *(_OWORD *)LockPointer(v96, v29 + 104, *(_QWORD *)(v17 + 8));
  HMAssignmentLock(&v91);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v69);
  xxxInheritWindowMonitor((struct tagWND *)v29);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v69);
  LinkWindow((struct tagWND *)v29);
  v36 = Object;
  v89[0] = (char *)Object + 104;
  v89[1] = v29;
  HMAssignmentLock(v89);
  *(_QWORD *)(*(_QWORD *)(v29 + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(v29 + 120);
  v95 = *(_OWORD *)LockPointer(v97, Window + 104, *(_QWORD *)(v17 + 8));
  HMAssignmentLock(&v95);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v70);
  xxxInheritWindowMonitor((struct tagWND *)Window);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v70);
  LinkWindow((struct tagWND *)Window);
  *(_QWORD *)(*(_QWORD *)(Window + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
    *(_QWORD *)(*(_QWORD *)(Window + 40) + 168LL) = *(_QWORD *)(gpDispInfo + 120LL);
  if ( (*((_DWORD *)v19 + 16) & 4) == 0 )
  {
    v38 = 0;
    if ( PsGetCurrentProcessWin32Process() )
    {
      v37 = PsGetCurrentProcessWin32Process();
      if ( (unsigned int)IsImmersiveAppRestricted(v37) )
        v38 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v94, 0LL);
    v39 = xxxCreateWindowEx(
            136,
            32774,
            32774,
            0,
            -2139095040,
            0,
            0,
            100,
            100,
            v36[13],
            (__int64)v94,
            hModuleWin,
            0LL,
            1,
            778,
            v38,
            0LL);
    v59 = v39;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v94);
    if ( v39 )
    {
      v90[0] = v36 + 14;
      v90[1] = v39;
      HMAssignmentLock(v90);
      v40 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v83 = *(_QWORD *)(v40 + 416);
      *(_QWORD *)(v40 + 416) = &v83;
      *((_QWORD *)&v83 + 1) = v39;
      HMLockObject(v39);
      goto LABEL_52;
    }
LABEL_30:
    v21 = -1073741801;
LABEL_24:
    v22 = &v52;
    goto LABEL_25;
  }
  v39 = v59;
LABEL_52:
  HMChangeOwnerThread(v62[3], *(_QWORD *)(v17 + 16));
  HMChangeOwnerThread(v57, *(_QWORD *)(v17 + 16));
  if ( (*((_DWORD *)v19 + 16) & 4) == 0 )
    HMChangeOwnerThread(v39, *(_QWORD *)(v17 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v53);
  v53 = 0;
  *(_QWORD *)(gptiCurrent + 424LL) = v66;
  *(_DWORD *)(gptiCurrent + 488LL) = v55 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  v21 = zzzSetDesktop(gptiCurrent);
  v22 = &v52;
  if ( v21 >= 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v52);
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(v17 + 56) )
      goto LABEL_73;
    if ( (*(_DWORD *)v17 & 2) == 0 )
    {
      *(_QWORD *)(gptiRit + 616LL) = v19;
      *(_QWORD *)(*(_QWORD *)(v17 + 16) + 616LL) = v19;
LABEL_60:
      KeSetEvent(*(PRKEVENT *)(v17 + 56), 1, 0);
      if ( (*(_DWORD *)v17 & 2) == 0 )
      {
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v54);
        while ( !grpdeskRitInput )
        {
          if ( gpEventSwitchDesktop )
          {
            Timeout.QuadPart = -200000LL;
            KeWaitForSingleObject(gpEventSwitchDesktop, Executive, 0, 0, &Timeout);
          }
          else
          {
            UserSleep(20LL);
          }
        }
        LeaveEnterCrit::~LeaveEnterCrit(v41);
      }
      v42 = *(void **)(v17 + 56);
      if ( v42 )
      {
        ObfDereferenceObject(v42);
        *(_QWORD *)(v17 + 56) = 0LL;
      }
      _InterlockedOr(gpsi, 0x800u);
LABEL_73:
      if ( v17 == gTermIO )
        xxxSetWindowPos((struct tagWND *)Window, 0, 0, 1115);
      if ( !v61 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
      if ( !gspdeskDisconnect && Object == grpdeskLogon )
      {
        if ( !(unsigned int)xxxCreateDisconnectDesktop(v72, v19) )
        {
          if ( v39 )
            ThreadUnlock1();
          ThreadUnlock1();
          ThreadUnlock1();
          v43 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)(v43 + 16) = v85;
          ObfDereferenceObject(Object);
          CloseDesktop(Handle);
          v11 = -1073741823;
          goto LABEL_83;
        }
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
      }
      v45 = v57;
      goto LABEL_87;
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v65);
    v21 = zzzSetDesktop(*(struct tagTHREADINFO **)(v17 + 16));
    v22 = (struct tagWINDOWSTATION **)v65;
    if ( v21 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v65);
      zzzEndDeferWinEventNotify();
      goto LABEL_60;
    }
  }
LABEL_25:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  while ( 1 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v73);
    if ( v53 )
      W32SetCurrentThreadDpiAwarenessContext(v53);
    v39 = v59;
    if ( v59 )
    {
      xxxDestroyWindow(v59);
      HMAssignmentUnlock((char *)v60 + 112);
    }
    v45 = v57;
    if ( v57 )
    {
      xxxDestroyWindow(v57);
      HMAssignmentUnlock((char *)v60 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window);
      v48 = v62 + 3;
      *(_QWORD *)(*v62 + 8LL) = 0LL;
      HMAssignmentUnlock(v48);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 424LL) = v66;
    if ( v55 != -1 )
      *(_DWORD *)(gptiCurrent + 488LL) = v55 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v73);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v63);
    zzzSetDesktop(gptiCurrent);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v63);
    if ( v58 )
    {
      v49 = ReferenceDwmApiPort();
      if ( v49 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v60);
        v50 = (void *)ReferenceDwmApiPort();
        DwmAsyncDesktopFree(v50);
        DereferenceDwmApiPort(v49);
        v39 = v59;
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( !v61 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
LABEL_87:
    if ( v39 )
      v59 = ThreadUnlock1();
    if ( v45 )
      v57 = ThreadUnlock1();
    if ( Window )
      Window = ThreadUnlock1();
    v46 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v46 + 16) = v85;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v47) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v47,
        3,
        22,
        (__int64)&WPP_9563cc11843c38630c872e630d898c35_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v21 = -1073741801;
  }
  if ( v21 >= 0 )
    *((_DWORD *)v60 + 12) |= 0x10u;
  ObfDereferenceObject(v60);
  *a5 = Handle;
  return (unsigned int)v21;
}
