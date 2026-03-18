/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00C52A4
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00C30E8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     EditionCreateDesktopEntryPoint @ 0x1C00C3A80 (EditionCreateDesktopEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C00C45C0 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C0124554 (xxxConnectService.c)
 * Callees:
 *     DwmAsyncDesktopCreate @ 0x1C000DEE0 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C000E3C4 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C003BFB0 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C009B4D0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     zzzSetDesktop @ 0x1C00B3880 (zzzSetDesktop.c)
 *     _CloseDesktop @ 0x1C00BD448 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C00BD568 (CloseProtectedHandle.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00C30E8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C00C5FC4 (OpenDesktopCompletion.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0157E84 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0157EAC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0158D14 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01E9A6C (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  int v6; // r11d
  __int64 Window; // r13
  __int64 *v9; // r12
  NTSTATUS v10; // eax
  int v11; // ebx
  int v12; // eax
  _QWORD *v13; // rsi
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // esi
  int v19; // eax
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v22; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // esi
  __int64 *v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  UserAtomicCheck *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // r14
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r12d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  LeaveEnterCrit *v46; // rcx
  void *v47; // rcx
  ULONG v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  ULONG v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  ULONG v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  ULONG v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 **v60; // rax
  __int64 v61; // rbx
  void *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rcx
  PVOID v69; // rbx
  __int64 **v70; // rcx
  __int64 v71; // rbx
  void *v72; // rax
  HANDLE Handle; // [rsp+90h] [rbp-258h] BYREF
  int v74; // [rsp+98h] [rbp-250h] BYREF
  unsigned int v75; // [rsp+A0h] [rbp-248h]
  _BYTE v76[4]; // [rsp+A4h] [rbp-244h] BYREF
  int v77; // [rsp+A8h] [rbp-240h]
  PVOID Object; // [rsp+B0h] [rbp-238h] BYREF
  int v79; // [rsp+B8h] [rbp-230h]
  PVOID v80; // [rsp+C0h] [rbp-228h]
  __int64 *v81; // [rsp+C8h] [rbp-220h]
  __int64 v82; // [rsp+D0h] [rbp-218h]
  unsigned int *v83; // [rsp+D8h] [rbp-210h]
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp-208h] BYREF
  _QWORD *v85; // [rsp+F0h] [rbp-1F8h]
  __int128 v86; // [rsp+F8h] [rbp-1F0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v87; // [rsp+108h] [rbp-1E0h] BYREF
  _BYTE v88[8]; // [rsp+110h] [rbp-1D8h] BYREF
  __int64 v89; // [rsp+118h] [rbp-1D0h]
  void *v90; // [rsp+120h] [rbp-1C8h]
  _BYTE v91[8]; // [rsp+130h] [rbp-1B8h] BYREF
  _BYTE v92[8]; // [rsp+138h] [rbp-1B0h] BYREF
  __int64 **v93; // [rsp+140h] [rbp-1A8h]
  HWINSTA v94; // [rsp+148h] [rbp-1A0h]
  _BYTE v95[8]; // [rsp+150h] [rbp-198h] BYREF
  _DWORD v96[2]; // [rsp+158h] [rbp-190h] BYREF
  __int64 v97; // [rsp+160h] [rbp-188h]
  _QWORD *v98; // [rsp+168h] [rbp-180h]
  int v99; // [rsp+170h] [rbp-178h]
  int v100; // [rsp+174h] [rbp-174h]
  __int128 v101; // [rsp+178h] [rbp-170h] BYREF
  __int64 v102; // [rsp+188h] [rbp-160h]
  __int128 v103; // [rsp+190h] [rbp-158h] BYREF
  __int64 v104; // [rsp+1A0h] [rbp-148h]
  __int128 v105; // [rsp+1A8h] [rbp-140h] BYREF
  __int64 v106; // [rsp+1B8h] [rbp-130h]
  __int128 v107; // [rsp+1C0h] [rbp-128h] BYREF
  __int64 v108; // [rsp+1D0h] [rbp-118h]
  _QWORD v109[2]; // [rsp+1E0h] [rbp-108h] BYREF
  _QWORD v110[2]; // [rsp+1F0h] [rbp-F8h] BYREF
  _QWORD v111[2]; // [rsp+200h] [rbp-E8h] BYREF
  _QWORD v112[4]; // [rsp+210h] [rbp-D8h] BYREF
  __int128 v113; // [rsp+230h] [rbp-B8h] BYREF
  _BYTE v114[24]; // [rsp+240h] [rbp-A8h] BYREF
  _BYTE v115[24]; // [rsp+258h] [rbp-90h] BYREF
  _BYTE v116[32]; // [rsp+270h] [rbp-78h] BYREF
  __int128 v117; // [rsp+290h] [rbp-58h] BYREF
  __int64 v118; // [rsp+2A0h] [rbp-48h] BYREF
  __int64 v119; // [rsp+2B0h] [rbp-38h] BYREF
  char v120; // [rsp+2F8h] [rbp+10h]

  v120 = a2;
  v6 = a3;
  Handle = 0LL;
  Window = 0LL;
  v81 = 0LL;
  v9 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v74 = 0;
  v77 = -1;
  v107 = 0LL;
  v108 = 0LL;
  v79 = 0;
  v75 = 0;
  v94 = *(HWINSTA *)(a1 + 8);
  v87.HandleAttributes = gSessionId;
  v87.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v87, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v48 = RtlNtStatusToDosError(v10);
    UserSetLastError(v48, v49, v50);
    CleanupDirtyDesktops();
    goto LABEL_96;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v51 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v51, v52, v53);
      CloseProtectedHandle(Handle, 0);
LABEL_76:
      v11 = -1073741801;
      goto LABEL_96;
    }
    *a5 = Handle;
    v74 = 1;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v12;
  v13 = Object;
  v80 = Object;
  if ( v12 < 0 )
  {
    v54 = RtlNtStatusToDosError(v12);
    UserSetLastError(v54, v55, v56);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_96;
  }
  if ( v74 )
  {
    v11 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v13);
    return (unsigned int)v11;
  }
  v15 = *((_QWORD *)Object + 5);
  v82 = v15;
  v16 = *(_QWORD *)(v15 + 56);
  v85 = (_QWORD *)*((_QWORD *)Object + 1);
  v85[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v120 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v13);
    goto LABEL_76;
  }
  v17 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v96[1] = 0;
    v96[0] = 1;
    v97 = gpepCSRSS;
    v98 = v13;
    v99 = 0;
    v100 = 1;
    v74 = MapDesktop((__int64)v96);
    if ( v74 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v13);
      v57 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v57, v58, v59);
      v11 = v74;
      goto LABEL_96;
    }
  }
  v83 = (unsigned int *)ReferenceDwmApiPort(v17);
  if ( v83 )
  {
    if ( (*(_DWORD *)(v15 + 64) & 0x200) != 0 )
    {
      v60 = (__int64 **)v13[1];
      v61 = **v60;
      v62 = (void *)ReferenceDwmApiPort(*v60);
      DwmAsyncDesktopCreate(v62, v61);
      zzzComposeDesktop((struct tagDESKTOP *)v13);
      v79 = 1;
      v15 = v82;
    }
    DereferenceDwmApiPort(v83);
  }
  v89 = *(_QWORD *)(gptiCurrent + 416LL);
  v82 = *(_QWORD *)(v89 + 336);
  v83 = *(unsigned int **)(gptiCurrent + 448LL);
  v90 = *(void **)(gptiCurrent + 584LL);
  *(_QWORD *)(gptiCurrent + 416LL) = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL);
  PushW32ThreadLock((__int64)v13, &v107, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v74);
  v18 = zzzSetDesktop(gptiCurrent, (unsigned int *)v13, Handle);
  if ( v18 < 0 )
    goto LABEL_83;
  v75 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  v19 = *(_DWORD *)(gptiCurrent + 480LL);
  v77 = v19 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 480LL) = v19 | 0x10000000;
  v86 = *(_OWORD *)(*gpDispInfo + 24LL);
  v22 = 0;
  if ( PsGetCurrentProcessWin32Process(gpDispInfo) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v22 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v114, 0LL);
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)0x8001,
             32769LL,
             0LL,
             -2113929216,
             v86,
             SDWORD1(v86),
             DWORD2(v86) - (int)v86,
             HIDWORD(v86) - DWORD1(v86),
             0LL,
             (__int64)v114,
             hModuleWin,
             0LL,
             1u,
             778,
             v22,
             0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v114);
  if ( !Window )
    goto LABEL_82;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v101 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v101;
  *((_QWORD *)&v101 + 1) = Window;
  HMLockObject(Window);
  v27 = 0;
  if ( PsGetCurrentProcessWin32Process(v24) )
  {
    v26 = PsGetCurrentProcessWin32Process(v25);
    if ( (unsigned int)IsImmersiveAppRestricted(v26) )
      v27 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v115, 0LL);
  v28 = (__int64 *)xxxCreateWindowEx(
                     0,
                     (wchar_t *)(unsigned __int16)gatomMessage,
                     (unsigned __int16)gatomMessage,
                     0LL,
                     -2113929216,
                     0,
                     0,
                     0x64u,
                     0x64u,
                     0LL,
                     (__int64)v115,
                     hModuleWin,
                     0LL,
                     1u,
                     778,
                     v27,
                     0LL);
  v81 = v28;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v115);
  if ( !v28 )
  {
LABEL_82:
    v18 = -1073741801;
LABEL_83:
    v32 = (UserAtomicCheck *)&v74;
    goto LABEL_84;
  }
  v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v103 = *(_QWORD *)(v29 + 408);
  *(_QWORD *)(v29 + 408) = &v103;
  *((_QWORD *)&v103 + 1) = v28;
  HMLockObject(v28);
  *(_WORD *)(v28[5] + 42) = *(_WORD *)(v28[5] + 42) & 0xC000 | 0x29F;
  v30 = v85 + 3;
  *(_QWORD *)(*v85 + 8LL) = *(_QWORD *)(Window + 48);
  v109[0] = v30;
  v109[1] = Window;
  HMAssignmentLock(v109);
  SetOrClrWF(0, Window, 0x707u, 1);
  SetOrClrWF(1, Window, 0x702u, 1);
  if ( (*(_DWORD *)(v15 + 64) & 4) == 0 && !gspwndFullScreen )
  {
    v110[0] = &gspwndFullScreen;
    v110[1] = Window;
    HMAssignmentLock(v110);
  }
  v113 = *(_OWORD *)LockPointer(&v118, (__int64)(v28 + 13), *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v113);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v91);
  xxxInheritWindowMonitor((struct tagWND *)v28, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v91);
  LinkWindow((struct tagWND *)v28, 0LL, *(__int64 **)(v16 + 8));
  v93 = (__int64 **)((char *)Object + 104);
  v111[0] = (char *)Object + 104;
  v111[1] = v28;
  HMAssignmentLock(v111);
  *(_QWORD *)(v28[5] + 64) = 0LL;
  HMAssignmentUnlock(v28 + 15);
  v117 = *(_OWORD *)LockPointer(&v119, Window + 104, *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v117);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v92);
  xxxInheritWindowMonitor((struct tagWND *)Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v92);
  LinkWindow((struct tagWND *)Window, 0LL, *(__int64 **)(v16 + 8));
  *(_QWORD *)(*(_QWORD *)(Window + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
  {
    v31 = *(_QWORD *)(Window + 40);
    *(_QWORD *)(v31 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
  }
  if ( (*(_DWORD *)(v15 + 64) & 4) == 0 )
  {
    v41 = 0;
    if ( PsGetCurrentProcessWin32Process(v31) )
    {
      v40 = PsGetCurrentProcessWin32Process(v39);
      if ( (unsigned int)IsImmersiveAppRestricted(v40) )
        v41 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v116, 0LL);
    v9 = (__int64 *)xxxCreateWindowEx(
                      136,
                      (wchar_t *)0x8006,
                      32774LL,
                      0LL,
                      -2139095040,
                      0,
                      0,
                      0x64u,
                      0x64u,
                      *v93,
                      (__int64)v116,
                      hModuleWin,
                      0LL,
                      1u,
                      778,
                      v41,
                      0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v116);
    if ( v9 )
    {
      v112[0] = (char *)Object + 112;
      v112[1] = v9;
      HMAssignmentLock(v112);
      v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v105 = *(_QWORD *)(v42 + 408);
      *(_QWORD *)(v42 + 408) = &v105;
      *((_QWORD *)&v105 + 1) = v9;
      HMLockObject(v9);
      goto LABEL_28;
    }
    goto LABEL_82;
  }
LABEL_28:
  HMChangeOwnerThread(v85[3], *(_QWORD *)(v16 + 16));
  HMChangeOwnerThread(v28, *(_QWORD *)(v16 + 16));
  if ( (*(_DWORD *)(v15 + 64) & 4) == 0 )
    HMChangeOwnerThread(v9, *(_QWORD *)(v16 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v75);
  v75 = 0;
  *(_QWORD *)(gptiCurrent + 416LL) = v89;
  *(_DWORD *)(gptiCurrent + 480LL) = v77 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  v18 = zzzSetDesktop(gptiCurrent, v83, v90);
  v32 = (UserAtomicCheck *)&v74;
  if ( v18 < 0 )
    goto LABEL_84;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v74);
  zzzEndDeferWinEventNotify();
  if ( !*(_QWORD *)(v16 + 56) )
    goto LABEL_32;
  if ( (*(_DWORD *)v16 & 2) != 0 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v88);
    v18 = zzzSetDesktop(*(struct tagTHREADINFO **)(v16 + 16), (unsigned int *)Object, 0LL);
    v32 = (UserAtomicCheck *)v88;
    if ( v18 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v88);
      zzzEndDeferWinEventNotify();
      goto LABEL_63;
    }
LABEL_84:
    UserAtomicCheck::~UserAtomicCheck(v32);
    goto LABEL_98;
  }
  *(_QWORD *)(gptiRit + 608LL) = v15;
  *(_QWORD *)(*(_QWORD *)(v16 + 16) + 608LL) = v15;
LABEL_63:
  KeSetEvent(*(PRKEVENT *)(v16 + 56), 1, 0);
  if ( (*(_DWORD *)v16 & 2) == 0 )
  {
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v76);
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
    LeaveEnterCrit::~LeaveEnterCrit(v46);
  }
  v47 = *(void **)(v16 + 56);
  if ( v47 )
  {
    ObfDereferenceObject(v47);
    *(_QWORD *)(v16 + 56) = 0LL;
  }
  v34 = gpsi;
  _InterlockedOr(gpsi, 0x800u);
LABEL_32:
  if ( v16 == gTermIO[0] )
    xxxSetWindowPos((struct tagWND *)Window, 1LL, 0LL, 0LL, 0, 0, 1115);
  if ( !v82 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  if ( !gspdeskDisconnect && Object == grpdeskLogon )
  {
    if ( (unsigned int)xxxCreateDisconnectDesktop(v94, (struct tagWINDOWSTATION *)v15) )
    {
      KeSetEvent(gpEventDiconnectDesktop, 1, 0);
      gdwHydraHint |= 0x40000u;
      goto LABEL_37;
    }
    if ( v9 )
      ThreadUnlock1(v44, v43, v45);
    ThreadUnlock1(v44, v43, v45);
    ThreadUnlock1(v64, v63, v65);
    v66 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v66 + 16) = v107;
    ObfDereferenceObject(Object);
    CloseDesktop((unsigned __int64)Handle, 0);
    v11 = -1073741823;
LABEL_96:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
LABEL_37:
  v36 = v81;
  while ( 1 )
  {
    if ( v9 )
      v9 = (__int64 *)ThreadUnlock1(v34, v33, v35);
    if ( v36 )
      v81 = (__int64 *)ThreadUnlock1(v34, v33, v35);
    if ( Window )
      Window = ThreadUnlock1(v34, v33, v35);
    v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v37 + 16) = v107;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v38) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v38,
        3,
        22,
        (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v18 = -1073741801;
LABEL_98:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v95);
    if ( v75 )
      W32SetCurrentThreadDpiAwarenessContext(v75);
    if ( v9 )
    {
      xxxDestroyWindow(v9);
      HMAssignmentUnlock((char *)v80 + 112);
    }
    v36 = v81;
    if ( v81 )
    {
      xxxDestroyWindow(v81);
      HMAssignmentUnlock((char *)v80 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow((__int64 *)Window);
      v67 = v85 + 3;
      *(_QWORD *)(*v85 + 8LL) = 0LL;
      HMAssignmentUnlock(v67);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 416LL) = v89;
    if ( v77 != -1 )
      *(_DWORD *)(gptiCurrent + 480LL) = v77 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v95);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v86);
    zzzSetDesktop(gptiCurrent, v83, v90);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v86);
    if ( v79 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v68);
      if ( Timeout.QuadPart )
      {
        v69 = v80;
        zzzDecomposeDesktop((struct tagDESKTOP *)v80);
        v70 = (__int64 **)*((_QWORD *)v69 + 1);
        v71 = **v70;
        v72 = (void *)ReferenceDwmApiPort(v70);
        DwmAsyncDesktopFree(v72, v71);
        ((void (__fastcall *)(_QWORD))DereferenceDwmApiPort)((union _LARGE_INTEGER)Timeout.QuadPart);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v82 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  }
  if ( v18 >= 0 )
    *((_DWORD *)v80 + 12) |= 0x10u;
  ObfDereferenceObject(v80);
  *a5 = Handle;
  return (unsigned int)v18;
}
