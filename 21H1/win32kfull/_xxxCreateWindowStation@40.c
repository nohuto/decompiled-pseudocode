/*
 * XREFs of _xxxCreateWindowStation@40 @ 0x8199E
 * Callers:
 *     _xxxConnectService@12 @ 0x8168A (_xxxConnectService@12.c)
 *     _EditionCreateWindowStationEntryPoint@32 @ 0xF228C (_EditionCreateWindowStationEntryPoint@32.c)
 * Callees:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?Detach@UserAtomicCheck@@QAEXXZ @ 0xAAF2E (-Detach@UserAtomicCheck@@QAEXXZ.c)
 *     _xxxCleanupMotherDesktopWindow@4 @ 0xD4B02 (_xxxCleanupMotherDesktopWindow@4.c)
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 *     ?xxxInitTerminal@@YGJPAUtagTERMINAL@@@Z @ 0xE8316 (-xxxInitTerminal@@YGJPAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YGJPAX@Z @ 0xEA3DE (-CreateDesktopNotificationEvent@@YGJPAX@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _SetLastNtError@4 @ 0x1B6D51 (_SetLastNtError@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxCreateWindowStation(
        int a1,
        int a2,
        ACCESS_MASK DesiredAccess,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void **a10)
{
  int v10; // esi
  int *v11; // edi
  NTSTATUS v12; // eax
  NTSTATUS GlobalAtomTable; // ebx
  int v15; // eax
  PVOID v16; // edi
  int v17; // eax
  int CurrentProcessWin32Process; // eax
  char v19; // bl
  int Window; // ebx
  int v21; // edx
  int v22; // ecx
  _DWORD **v23; // ebx
  ULONG v24; // ebx
  int v25; // eax
  int v26; // edi
  void *SecurityDescriptor; // ebx
  NTSTATUS inserted; // eax
  _DWORD *i; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v32; // ecx
  int v33; // edx
  int v34; // edi
  int v35; // esi
  int v36; // ecx
  int v37; // eax
  _DWORD *v38; // [esp-Ch] [ebp-5Ch]
  void *v39; // [esp-8h] [ebp-58h]
  _DWORD *v40; // [esp-4h] [ebp-54h]
  int v41; // [esp-4h] [ebp-54h]
  struct tagTERMINAL *v42; // [esp+0h] [ebp-50h]
  PVOID Object[2]; // [esp+4h] [ebp-4Ch] BYREF
  PVOID v44; // [esp+Ch] [ebp-44h] BYREF
  void *Handle; // [esp+10h] [ebp-40h] BYREF
  int v46; // [esp+14h] [ebp-3Ch]
  HANDLE v47; // [esp+18h] [ebp-38h]
  int v48; // [esp+1Ch] [ebp-34h]
  HANDLE v49; // [esp+20h] [ebp-30h]
  int v50; // [esp+24h] [ebp-2Ch]
  PVOID v51; // [esp+28h] [ebp-28h]
  ULONG DestinationSidLength; // [esp+2Ch] [ebp-24h]
  void *v53; // [esp+30h] [ebp-20h]
  _DWORD v54[2]; // [esp+34h] [ebp-1Ch] BYREF
  _DWORD v55[2]; // [esp+3Ch] [ebp-14h] BYREF
  _DWORD v56[3]; // [esp+44h] [ebp-Ch] BYREF

  v54[1] = *(_DWORD *)(a1 + 16);
  v44 = 0;
  v10 = 0;
  v47 = 0;
  v50 = 0;
  v51 = 0;
  v46 = 0;
  DestinationSidLength = 0;
  if ( _grpWinStaList )
  {
    gTermNOIO |= 2u;
    v11 = &gTermNOIO;
  }
  else
  {
    v11 = (int *)_gTermIO[0];
  }
  Handle = v11;
  v12 = ObCreateObject(0, ExWindowStationObjectType, a1, a2, 0, 120, 0, 0, &v44);
  GlobalAtomTable = v12;
  if ( v12 < 0 )
  {
    SetLastNtError(v12);
    return GlobalAtomTable;
  }
  if ( !ExAcquireRundownProtection(_gWinstaRunRef) )
  {
    GlobalAtomTable = -1073741790;
LABEL_58:
    SetLastNtError(GlobalAtomTable);
    if ( v44 )
      ObfDereferenceObject(v44);
    if ( DestinationSidLength )
    {
      v32 = Handle;
      v33 = v50;
      v41 = v50;
      ++_gdwDeferWinEvent;
      v34 = *(_DWORD *)(v10 + 264);
      *(_DWORD *)(v10 + 264) = v34 | 0x10000000;
      v35 = *(_DWORD *)(v10 + 232);
      *(_DWORD *)(v33 + 232) = *(_DWORD *)(v32[2] + 232);
      HMChangeOwnerThread(v32[1], v41);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v55);
      xxxCleanupMotherDesktopWindow(Handle);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v55);
      v36 = v50;
      v37 = v34 ^ *(_DWORD *)(v50 + 264);
      *(_DWORD *)(v50 + 232) = v35;
      *(_DWORD *)(v36 + 264) ^= v37 & 0x10000000;
      zzzEndDeferWinEventNotify();
    }
    if ( v47 )
      ObCloseHandle(v47, 1);
    if ( v46 )
      Win32FreePool(v46);
    if ( v51 )
      ObfDereferenceObject(v51);
    return GlobalAtomTable;
  }
  memset(v44, 0, 0x78u);
  *(_DWORD *)v44 = _gSessionId;
  *((_DWORD *)v44 + 7) = v11;
  if ( (*(_BYTE *)v11 & 2) != 0 )
    *((_DWORD *)v44 + 8) = 4;
  GlobalAtomTable = CreateGlobalAtomTable((char *)v44 + 88);
  if ( GlobalAtomTable < 0 || (*(_BYTE *)v11 & 1) == 0 && (GlobalAtomTable = xxxInitTerminal(v42), GlobalAtomTable < 0) )
  {
LABEL_12:
    SetLastNtError(GlobalAtomTable);
    goto LABEL_58;
  }
  if ( (*((_BYTE *)v44 + 32) & 4) == 0 && !xxxInitWindowStation() )
  {
    GlobalAtomTable = -1073741801;
    goto LABEL_12;
  }
  v53 = v11 + 1;
  if ( !v11[1] )
  {
    v10 = _gptiCurrent;
    v50 = _gptiCurrent;
    v48 = *(_DWORD *)(_gptiCurrent + 232);
    v15 = v11[2];
    v51 = *(PVOID *)(_gptiCurrent + 248);
    v16 = v51;
    *(_DWORD *)(_gptiCurrent + 232) = *(_DWORD *)(v15 + 232);
    v49 = *(HANDLE *)(_gptiCurrent + 316);
    if ( v16 )
    {
      ObfReferenceObject(v16);
    }
    else if ( *(_DWORD *)(_gptiCurrent + 404) != _gptiCurrent + 404 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    ++_gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v55);
    GlobalAtomTable = zzzSetDesktop(_gptiCurrent, 0, 0);
    if ( GlobalAtomTable < 0 )
    {
      if ( !*(_DWORD *)(_gptiCurrent + 248) && v16 )
        zzzSetDesktop(_gptiCurrent, (int)v16, v49);
      UserAtomicCheck::Detach((UserAtomicCheck *)v55);
      zzzEndDeferWinEventNotify();
      *(_DWORD *)(_gptiCurrent + 232) = v48;
      goto LABEL_28;
    }
    v17 = *(_DWORD *)(_gptiCurrent + 264) | 0x10000000;
    v54[0] = *(_DWORD *)(_gptiCurrent + 264) & 0x10000000;
    *(_DWORD *)(_gptiCurrent + 264) = v17;
    v19 = 0;
    if ( PsGetCurrentProcessWin32Process() )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
        v19 = 1;
    }
    SmartObjStackRefBase<tagMENU>::Init(0);
    v56[2] = 0;
    Window = xxxCreateWindowEx(
               0,
               (_DWORD *)0x8001,
               32769,
               0,
               0x82000000,
               -32768,
               (int **)0xFFFF8000,
               0xFFFF,
               0xFFFF,
               0,
               (int)v56,
               _hModuleWin,
               0,
               1,
               0x30Au,
               v19,
               0);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v56);
    if ( !Window )
    {
      GlobalAtomTable = -1073741801;
      UserAtomicCheck::Detach((UserAtomicCheck *)v55);
      zzzEndDeferWinEventNotify();
      v40 = v49;
      *(_DWORD *)(_gptiCurrent + 232) = v48;
      zzzSetDesktop(_gptiCurrent, (int)v16, v40);
LABEL_28:
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v55);
      goto LABEL_58;
    }
    v23 = (_DWORD **)v53;
    v39 = v53;
    HMAssignmentLock(v22, v21);
    *(_DWORD *)(_gptiCurrent + 264) = DestinationSidLength | *(_DWORD *)(_gptiCurrent + 264) & 0xEFFFFFFF;
    SetVisible(*v23, 1u);
    HMChangeOwnerThread(*v23, *((_DWORD *)Object[1] + 2));
    v38 = v47;
    v50 = 1;
    *(_DWORD *)(_gptiCurrent + 232) = v46;
    GlobalAtomTable = zzzSetDesktop(_gptiCurrent, (int)v16, v38);
    if ( GlobalAtomTable < 0 )
    {
      UserAtomicCheck::Detach((UserAtomicCheck *)v54);
      zzzEndDeferWinEventNotify();
      goto LABEL_28;
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v54);
    zzzEndDeferWinEventNotify();
    if ( v16 )
    {
      ObfDereferenceObject(v16);
      v49 = 0;
    }
  }
  if ( (*((_BYTE *)Object[0] + 32) & 4) == 0 )
  {
    DestinationSidLength = RtlLengthSid(_SeExports->SeWorldSid);
    v24 = DestinationSidLength + 8;
    v25 = Win32AllocPoolWithQuota(DestinationSidLength + 8, 1702064981);
    v26 = v25;
    if ( !v25
      || (*(_WORD *)v25 = 0,
          *(_WORD *)(v25 + 2) = v24,
          *(_DWORD *)(v25 + 4) = 0x100000,
          RtlCopySid(DestinationSidLength, (PSID)(v25 + 8), _SeExports->SeWorldSid),
          SecurityDescriptor = (void *)CreateSecurityDescriptor(v26, v24, 0),
          v44 = SecurityDescriptor,
          Win32FreePool(v26),
          !SecurityDescriptor) )
    {
      GlobalAtomTable = -1073741801;
      goto LABEL_58;
    }
    GlobalAtomTable = CreateDesktopNotificationEvent(v39);
    if ( GlobalAtomTable < 0 )
      goto LABEL_58;
    Win32FreePool(v44);
  }
  inserted = ObInsertObject(Object[0], 0, DesiredAccess, 1u, Object, &Handle);
  GlobalAtomTable = inserted;
  if ( inserted < 0 )
  {
    Object[0] = 0;
  }
  else
  {
    if ( inserted == 0x40000000 )
      goto LABEL_68;
    GlobalAtomTable = ApplySecurityAttributesToWinsta(Object[0], v53);
    if ( GlobalAtomTable >= 0 )
    {
      for ( i = (_DWORD *)_grpWinStaList; *i; i = (_DWORD *)(*i + 4) )
        ;
      LockObjectAssignment(i, Object[0]);
      if ( (*((_BYTE *)Object[0] + 32) & 4) == 0 )
      {
        if ( a8 )
        {
          v55[0] = 0;
          v55[1] = 0;
          v56[0] = 0;
          PushW32ThreadLock((int)Object[0], v55, (int)UserDereferenceObject);
          if ( !xxxSafeLoadKeyboardLayoutEx(Object[0], a4, 0, a5, a6, a7, a8, a9, -2147483647) )
            GlobalAtomTable = -1073741823;
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          *(_DWORD *)(ThreadWin32Thread + 8) = v55[0];
        }
      }
    }
  }
  v44 = 0;
  if ( GlobalAtomTable < 0 )
    goto LABEL_58;
LABEL_68:
  ObfDereferenceObject(Object[0]);
  *a10 = Handle;
  return 0;
}
