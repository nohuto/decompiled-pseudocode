/*
 * XREFs of _xxxCreateDesktopEx@24 @ 0x7E854
 * Callers:
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 *     _xxxConnectService@12 @ 0x8168A (_xxxConnectService@12.c)
 *     ?xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z @ 0xE9654 (-xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z.c)
 *     _EditionCreateDesktopEntryPoint@24 @ 0xF2188 (_EditionCreateDesktopEntryPoint@24.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PAX@Z @ 0x2FEAE (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32SetCurrentThreadDpiAwarenessContext@4 @ 0x6B6B0 (_W32SetCurrentThreadDpiAwarenessContext@4.c)
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _OpenDesktopCompletion@12 @ 0x7F0EE (_OpenDesktopCompletion@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __CloseDesktop@8 @ 0x812A8 (__CloseDesktop@8.c)
 *     ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8 (--0LeaveEnterCrit@@QAE@XZ.c)
 *     ??1LeaveEnterCrit@@QAE@XZ @ 0xAEFC8 (--1LeaveEnterCrit@@QAE@XZ.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 *     _DwmAsyncDesktopFree@8 @ 0xCEFDE (_DwmAsyncDesktopFree@8.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 *     _DwmAsyncDesktopCreate@8 @ 0xE1AE8 (_DwmAsyncDesktopCreate@8.c)
 *     ?xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z @ 0xE9654 (-xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@H@Z @ 0xF17DA (--0-$SmartObjStackRef@UtagMENU@@@@QAE@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?CleanupDirtyDesktops@@YGXXZ @ 0x15481D (-CleanupDirtyDesktops@@YGXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxCreateDesktopEx(int a1, int a2, int Object, int a4, HANDLE *a5, int a6)
{
  NTSTATUS v6; // eax
  int v7; // esi
  int v8; // eax
  char *v9; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // esi
  int CurrentProcessWin32Process; // eax
  char v18; // si
  int Window; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v22; // eax
  PKTHREAD v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  int v29; // esi
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  struct tagVWPL **v34; // ecx
  int v35; // eax
  struct tagWINDOWSTATION *v36; // edx
  int v37; // ecx
  struct tagVWPL **v38; // ecx
  _DWORD *v39; // ecx
  UserAtomicCheck *v40; // ecx
  PKTHREAD v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // edx
  PKTHREAD v45; // eax
  int v46; // eax
  int v47; // ecx
  LeaveEnterCrit *v48; // ecx
  void *v49; // ecx
  ULONG v50; // eax
  ULONG v51; // eax
  ULONG v52; // eax
  ULONG v53; // eax
  int v54; // esi
  int v55; // eax
  PKTHREAD v56; // eax
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  void *v60; // eax
  HWINSTA v61; // [esp-20h] [ebp-134h]
  struct tagWINDOWSTATION *v62; // [esp-1Ch] [ebp-130h]
  _DWORD v63[3]; // [esp+10h] [ebp-104h] BYREF
  _DWORD v64[3]; // [esp+1Ch] [ebp-F8h] BYREF
  _BYTE v65[8]; // [esp+28h] [ebp-ECh] BYREF
  _BYTE v66[8]; // [esp+30h] [ebp-E4h] BYREF
  _BYTE v67[8]; // [esp+38h] [ebp-DCh] BYREF
  int v68; // [esp+44h] [ebp-D0h]
  _DWORD v69[5]; // [esp+48h] [ebp-CCh] BYREF
  _DWORD v70[3]; // [esp+5Ch] [ebp-B8h] BYREF
  int v71; // [esp+68h] [ebp-ACh] BYREF
  struct tagVWPL **v72; // [esp+6Ch] [ebp-A8h]
  int v73; // [esp+70h] [ebp-A4h]
  int v74; // [esp+74h] [ebp-A0h] BYREF
  struct tagVWPL **v75; // [esp+78h] [ebp-9Ch]
  int v76; // [esp+7Ch] [ebp-98h]
  int v77; // [esp+80h] [ebp-94h] BYREF
  int v78; // [esp+84h] [ebp-90h]
  int v79; // [esp+88h] [ebp-8Ch]
  union _LARGE_INTEGER Timeout; // [esp+8Ch] [ebp-88h] BYREF
  _DWORD v81[2]; // [esp+94h] [ebp-80h] BYREF
  _BYTE v82[4]; // [esp+A0h] [ebp-74h] BYREF
  int v83; // [esp+A4h] [ebp-70h]
  int **v84; // [esp+A8h] [ebp-6Ch]
  int **v85; // [esp+ACh] [ebp-68h] BYREF
  int **v86; // [esp+B0h] [ebp-64h]
  int v87; // [esp+B4h] [ebp-60h]
  int v88; // [esp+B8h] [ebp-5Ch]
  int v89; // [esp+BCh] [ebp-58h]
  int v90; // [esp+C0h] [ebp-54h]
  HANDLE v91; // [esp+C4h] [ebp-50h]
  _BYTE v92[4]; // [esp+C8h] [ebp-4Ch] BYREF
  int v93; // [esp+CCh] [ebp-48h]
  _BYTE v94[8]; // [esp+D0h] [ebp-44h] BYREF
  int v95; // [esp+D8h] [ebp-3Ch]
  unsigned int v96; // [esp+DCh] [ebp-38h]
  int v97; // [esp+E0h] [ebp-34h]
  int v98; // [esp+E4h] [ebp-30h]
  struct tagVWPL **v99; // [esp+E8h] [ebp-2Ch]
  struct tagVWPL **v100; // [esp+ECh] [ebp-28h]
  PVOID v101; // [esp+F0h] [ebp-24h]
  struct tagVWPL **v102; // [esp+F4h] [ebp-20h]
  HANDLE Handle; // [esp+F8h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+FCh] [ebp-18h]

  v97 = a2;
  Handle = 0;
  v100 = 0;
  v102 = 0;
  v99 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v101 = (PVOID)_gptiCurrent;
  v98 = 0;
  v95 = -1;
  memset(v70, 0, sizeof(v70));
  v89 = 0;
  v96 = 0;
  ms_exc.registration.TryLevel = 0;
  v83 = *(_DWORD *)(a1 + 4);
  v68 = v83;
  ms_exc.registration.TryLevel = -2;
  v81[0] = _gSessionId;
  v81[1] = a4;
  v6 = ObOpenObjectByName(a1, ExDesktopObjectType, a6 == 0, 0, Object, v81, &Handle);
  v7 = v6;
  if ( v6 < 0 )
  {
    v50 = RtlNtStatusToDosError(v6);
    UserSetLastError(v50);
    CleanupDirtyDesktops();
LABEL_95:
    *a5 = 0;
    return v7;
  }
  if ( v6 == 0x40000000 )
  {
    if ( !SetHandleFlag(Handle, 1, 1) )
    {
      v51 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v51);
      CloseProtectedHandle(Handle, 0);
LABEL_77:
      v7 = -1073741801;
      goto LABEL_95;
    }
    *a5 = Handle;
    v98 = 1;
  }
  Object = 0;
  v8 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, 0);
  v7 = v8;
  v9 = (char *)Object;
  if ( v8 < 0 )
  {
    v52 = RtlNtStatusToDosError(v8);
    UserSetLastError(v52);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_95;
  }
  if ( v98 )
  {
    v7 = OpenDesktopCompletion(v97);
    if ( v7 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0;
    }
    ObfDereferenceObject(v9);
    return v7;
  }
  a6 = *(_DWORD *)(Object + 20);
  v11 = *(_DWORD *)(a6 + 28);
  v93 = v11;
  v98 = *(_DWORD *)(Object + 4);
  *(_DWORD *)(v98 + 88) = 0;
  if ( !SetHandleFlag(Handle, 0, v97 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v9);
    goto LABEL_77;
  }
  if ( _gpepCSRSS )
  {
    v69[0] = 1;
    v69[1] = _gpepCSRSS;
    v69[2] = v9;
    v69[3] = 0;
    v69[4] = 1;
    a4 = MapDesktop(v69);
    if ( a4 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v9);
      v53 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v53);
      v7 = a4;
      goto LABEL_95;
    }
  }
  v12 = ReferenceDwmApiPort();
  a4 = v12;
  if ( v12 )
  {
    if ( (*(_DWORD *)(a6 + 32) & 0x200) != 0 )
    {
      v54 = ***((_DWORD ***)v9 + 1);
      v55 = ReferenceDwmApiPort();
      DwmAsyncDesktopCreate(v55, v54);
      zzzComposeDesktop(v9);
      v89 = 1;
      v11 = v93;
      v12 = a4;
    }
    DereferenceDwmApiPort(v12);
  }
  v97 = *((_DWORD *)v101 + 58);
  v88 = *(_DWORD *)(v97 + 188);
  v90 = *((_DWORD *)v101 + 62);
  v91 = (HANDLE)*((_DWORD *)v101 + 79);
  v13 = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 232);
  v14 = v101;
  *((_DWORD *)v101 + 58) = v13;
  PushW32ThreadLock((int)v9, v70, (int)UserDereferenceObject);
  ++_gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v94);
  Object = zzzSetDesktop(v14, (int)v9, Handle);
  if ( Object < 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v94);
    goto LABEL_98;
  }
  v96 = W32SetCurrentThreadDpiAwarenessContext(18);
  v15 = v14[66];
  v95 = v15 & 0x10000000;
  v14[66] = v15 | 0x10000000;
  v16 = *_gpDispInfo + 12;
  v84 = *(int ***)v16;
  v16 += 4;
  v85 = *(int ***)v16;
  v16 += 4;
  v86 = *(int ***)v16;
  v87 = *(_DWORD *)(v16 + 4);
  v18 = 0;
  if ( PsGetCurrentProcessWin32Process() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v18 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(0);
  Window = xxxCreateWindowEx(
             0,
             (_DWORD *)0x8001,
             32769,
             0,
             0x82000000,
             (int)v84,
             v85,
             (char *)v86 - (char *)v84,
             v87 - (_DWORD)v85,
             0,
             (int)v64,
             _hModuleWin,
             0,
             1,
             0x30Au,
             v18,
             0);
  v100 = (struct tagVWPL **)Window;
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v64);
  if ( !Window )
    goto LABEL_85;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v77 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v77;
  v78 = Window;
  HMLockObject(Window);
  a4 = PsGetCurrentProcessWin32Process() && (v22 = PsGetCurrentProcessWin32Process(), IsImmersiveAppRestricted(v22));
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(0);
  v102 = (struct tagVWPL **)xxxCreateWindowEx(
                              0,
                              (_DWORD *)(unsigned __int16)gatomMessage,
                              (unsigned __int16)gatomMessage,
                              0,
                              0x82000000,
                              0,
                              0,
                              100,
                              100,
                              0,
                              (int)v63,
                              _hModuleWin,
                              0,
                              1,
                              0x30Au,
                              a4,
                              0);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v63);
  if ( !v102 )
    goto LABEL_85;
  v23 = KeGetCurrentThread();
  v24 = W32GetThreadWin32Thread(v23);
  v74 = *(_DWORD *)(v24 + 228);
  *(_DWORD *)(v24 + 228) = &v74;
  v75 = v102;
  HMLockObject(v102);
  *((_WORD *)v102[5] + 15) = *((_WORD *)v102[5] + 15) & 0xC000 | 0x29F;
  v25 = v98 + 12;
  v26 = *(_DWORD *)v98;
  *(_DWORD *)(v26 + 4) = *(_DWORD *)(Window + 24);
  HMAssignmentLock(v26, v25);
  SetOrClrWF(0, Window, 0x707u, 1);
  SetOrClrWF(1, Window, 0x702u, 1);
  if ( (*(_BYTE *)(a6 + 32) & 4) == 0 && !gspwndFullScreen )
    HMAssignmentLock(v28, v27);
  v29 = v93;
  LockPointer((int)(v102 + 14), *(_DWORD *)(v93 + 4));
  HMAssignmentLock(v31, v30);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v67);
  xxxInheritWindowMonitor(v102, 0, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
  LinkWindow(v102, 0, *(_DWORD **)(v29 + 4));
  HMAssignmentLock(v33, v32);
  v34 = v102 + 16;
  *((_DWORD *)v102[5] + 10) = 0;
  HMAssignmentUnlock(v34);
  v35 = LockPointer((int)(v100 + 14), *(_DWORD *)(v29 + 4));
  v62 = v36;
  v61 = (HWINSTA)v35;
  HMAssignmentLock(v37, v36);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v66);
  xxxInheritWindowMonitor(v100, 0, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v66);
  LinkWindow(v100, 0, *(_DWORD **)(v29 + 4));
  v38 = v100 + 16;
  *((_DWORD *)v100[5] + 10) = 0;
  HMAssignmentUnlock(v38);
  if ( (*(_BYTE *)(_gpDispInfo + 72) & 1) == 0 )
    *((_DWORD *)v100[5] + 27) = *(_DWORD *)(_gpDispInfo + 64);
  if ( (*(_BYTE *)(a6 + 32) & 4) == 0 )
  {
    a4 = PsGetCurrentProcessWin32Process() && (v43 = PsGetCurrentProcessWin32Process(), IsImmersiveAppRestricted(v43));
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(0);
    v99 = (struct tagVWPL **)xxxCreateWindowEx(
                               136,
                               (_DWORD *)0x8006,
                               32774,
                               0,
                               0x80800000,
                               0,
                               0,
                               100,
                               100,
                               *((_DWORD **)v9 + 13),
                               (int)&v85,
                               _hModuleWin,
                               0,
                               1,
                               0x30Au,
                               a4,
                               0);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v85);
    if ( v99 )
    {
      HMAssignmentLock(v99, v44);
      v45 = KeGetCurrentThread();
      v46 = W32GetThreadWin32Thread(v45);
      v71 = *(_DWORD *)(v46 + 228);
      *(_DWORD *)(v46 + 228) = &v71;
      v72 = v99;
      HMLockObject(v99);
      goto LABEL_28;
    }
LABEL_85:
    Object = -1073741801;
    v40 = (UserAtomicCheck *)v94;
    goto LABEL_86;
  }
LABEL_28:
  HMChangeOwnerThread(*(_DWORD *)(v98 + 12), *(_DWORD *)(v29 + 8));
  HMChangeOwnerThread(v102, *(_DWORD *)(v29 + 8));
  if ( (*(_BYTE *)(a6 + 32) & 4) == 0 )
    HMChangeOwnerThread(v99, *(_DWORD *)(v29 + 8));
  W32SetCurrentThreadDpiAwarenessContext(v96);
  v96 = 0;
  v39 = v101;
  *((_DWORD *)v101 + 58) = v97;
  v39[66] = v95 | v39[66] & 0xEFFFFFFF;
  Object = zzzSetDesktop(v39, v90, v91);
  v40 = (UserAtomicCheck *)v94;
  if ( Object < 0 )
    goto LABEL_86;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v94);
  zzzEndDeferWinEventNotify();
  if ( !*(_DWORD *)(v29 + 28) )
    goto LABEL_32;
  if ( (*(_BYTE *)v29 & 2) != 0 )
  {
    ++_gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v92);
    Object = zzzSetDesktop(*(_DWORD **)(v29 + 8), (int)v9, 0);
    v40 = (UserAtomicCheck *)v92;
    if ( Object >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v92);
      zzzEndDeferWinEventNotify();
      goto LABEL_62;
    }
LABEL_86:
    UserAtomicCheck::~UserAtomicCheck(v40);
    goto LABEL_97;
  }
  v47 = a6;
  *(_DWORD *)(_gptiRit + 332) = a6;
  *(_DWORD *)(*(_DWORD *)(v29 + 8) + 332) = v47;
LABEL_62:
  KeSetEvent(*(PRKEVENT *)(v29 + 28), 1, 0);
  if ( (*(_BYTE *)v29 & 2) == 0 )
  {
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)((char *)&a4 + 3));
    while ( !_grpdeskRitInput )
    {
      if ( gpEventSwitchDesktop )
      {
        Timeout.QuadPart = -200000LL;
        KeWaitForSingleObject(gpEventSwitchDesktop, Executive, 0, 0, &Timeout);
      }
      else
      {
        UserSleep(20);
      }
    }
    LeaveEnterCrit::~LeaveEnterCrit(v48);
  }
  v49 = *(void **)(v29 + 28);
  if ( v49 )
  {
    ObfDereferenceObject(v49);
    *(_DWORD *)(v29 + 28) = 0;
  }
  _InterlockedOr(_gpsi, 0x800u);
LABEL_32:
  if ( v29 == _gTermIO[0] )
    xxxSetWindowPos((int)v100, 1, 0, 0, 0, 0, 1115);
  if ( !v88 )
    UnlockObjectAssignment(*((_DWORD *)v101 + 58) + 188);
  if ( gspdeskDisconnect || v9 != grpdeskLogon )
    goto LABEL_37;
  if ( !xxxCreateDisconnectDesktop(v61, v62) )
  {
    if ( v99 )
      ThreadUnlock1();
    ThreadUnlock1();
    ThreadUnlock1();
    v56 = KeGetCurrentThread();
    v57 = W32GetThreadWin32Thread(v56);
    *(_DWORD *)(v57 + 8) = v70[0];
    ObfDereferenceObject(v9);
    LOBYTE(v58) = 0;
    _CloseDesktop(Handle, v58);
    v7 = -1073741823;
    goto LABEL_95;
  }
  KeSetEvent(_gpEventDiconnectDesktop, 1, 0);
  _gdwHydraHint |= 0x40000u;
  while ( 1 )
  {
LABEL_37:
    if ( v99 )
      v99 = (struct tagVWPL **)ThreadUnlock1();
    if ( v102 )
      v102 = (struct tagVWPL **)ThreadUnlock1();
    if ( v100 )
      v100 = (struct tagVWPL **)ThreadUnlock1();
    v41 = KeGetCurrentThread();
    v42 = W32GetThreadWin32Thread(v41);
    *(_DWORD *)(v42 + 8) = v70[0];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(3, 22, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
    if ( !Handle || SetHandleFlag(Handle, 1, 1) )
      break;
    Object = -1073741801;
LABEL_97:
    v14 = v101;
LABEL_98:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v82);
    if ( v96 )
      W32SetCurrentThreadDpiAwarenessContext(v96);
    if ( v99 )
    {
      xxxDestroyWindow(v99);
      HMAssignmentUnlock(v9 + 56);
    }
    if ( v102 )
    {
      xxxDestroyWindow(v102);
      HMAssignmentUnlock(v9 + 52);
    }
    if ( v100 )
    {
      xxxDestroyWindow(v100);
      v59 = v98 + 12;
      *(_DWORD *)(*(_DWORD *)v98 + 4) = 0;
      HMAssignmentUnlock(v59);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    v14[58] = v97;
    if ( v95 != -1 )
      v14[66] = v95 | v14[66] & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v82);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v65);
    zzzSetDesktop(v14, v90, v91);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v65);
    if ( v89 )
    {
      a4 = ReferenceDwmApiPort();
      if ( a4 )
      {
        zzzDecomposeDesktop(v9, 0);
        v60 = (void *)ReferenceDwmApiPort();
        DwmAsyncDesktopFree(v60);
        DereferenceDwmApiPort(a4);
        v14 = v101;
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0;
    if ( !v88 )
      UnlockObjectAssignment(v14[58] + 188);
  }
  v7 = Object;
  if ( Object >= 0 )
    *((_DWORD *)v9 + 6) |= 0x10u;
  ObfDereferenceObject(v9);
  *a5 = Handle;
  return v7;
}
