/*
 * XREFs of _xxxResolveDesktop@20 @ 0x7DE28
 * Callers:
 *     <none>
 * Callees:
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     __OpenDesktop@20 @ 0x7DD0E (__OpenDesktop@20.c)
 *     ?SafeCopyUnicodeString@@YGXPAU_UNICODE_STRING@@QAU1@@Z @ 0x7E606 (-SafeCopyUnicodeString@@YGXPAU_UNICODE_STRING@@QAU1@@Z.c)
 *     __UserTestForWinStaAccess@8 @ 0x7E656 (__UserTestForWinStaAccess@8.c)
 *     __OpenWindowStation@12 @ 0x7E7F2 (__OpenWindowStation@12.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxConnectService@12 @ 0x8168A (_xxxConnectService@12.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

NTSTATUS __stdcall xxxResolveDesktop(HANDLE Handle, void *a2, HANDLE *a3, int a4, HANDLE *a5)
{
  NTSTATUS result; // eax
  int ProcessLuid; // edi
  PVOID *ProcessWin32Process; // eax
  HANDLE v8; // eax
  void *v9; // eax
  char *v10; // ecx
  NTSTATUS Desktop; // eax
  int v12; // esi
  WCHAR *v13; // edx
  __int16 i; // cx
  PVOID v15; // ecx
  ULONG v16; // eax
  NTSTATUS v17; // eax
  struct _UNICODE_STRING *v18; // [esp+0h] [ebp-2F8h]
  struct _UNICODE_STRING *v19; // [esp+4h] [ebp-2F4h]
  _DWORD v20[5]; // [esp+10h] [ebp-2E8h] BYREF
  void *v21; // [esp+28h] [ebp-2D0h]
  char *v22; // [esp+2Ch] [ebp-2CCh]
  int v23; // [esp+34h] [ebp-2C4h] BYREF
  int v24; // [esp+38h] [ebp-2C0h]
  HANDLE SourceProcessHandle; // [esp+3Ch] [ebp-2BCh]
  HANDLE *v26; // [esp+40h] [ebp-2B8h]
  HANDLE *v27; // [esp+44h] [ebp-2B4h]
  void *TargetHandle; // [esp+48h] [ebp-2B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+4Ch] [ebp-2ACh] BYREF
  PVOID *v30; // [esp+54h] [ebp-2A4h]
  UNICODE_STRING Source; // [esp+58h] [ebp-2A0h] BYREF
  int v32; // [esp+60h] [ebp-298h]
  int v33; // [esp+64h] [ebp-294h]
  int v34; // [esp+68h] [ebp-290h]
  ULONG_PTR RegionSize; // [esp+6Ch] [ebp-28Ch] BYREF
  char *v36; // [esp+70h] [ebp-288h]
  struct _UNICODE_STRING Destination; // [esp+74h] [ebp-284h] BYREF
  void *v38; // [esp+7Ch] [ebp-27Ch] BYREF
  PVOID v39; // [esp+80h] [ebp-278h] BYREF
  PVOID Object; // [esp+84h] [ebp-274h] BYREF
  HANDLE v41; // [esp+88h] [ebp-270h] BYREF
  HANDLE SourceHandle; // [esp+8Ch] [ebp-26Ch] BYREF
  PVOID BaseAddress; // [esp+90h] [ebp-268h] BYREF
  char v44; // [esp+94h] [ebp-264h] BYREF
  WCHAR SourceString[32]; // [esp+2A0h] [ebp-58h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2E0h] [ebp-18h]

  SourceProcessHandle = Handle;
  v38 = a2;
  v27 = a3;
  v26 = a5;
  v34 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0;
  v36 = 0;
  BaseAddress = 0;
  RegionSize = 0;
  *a3 = 0;
  *a5 = 0;
  Object = 0;
  result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0);
  ProcessLuid = result;
  if ( result < 0 )
    return result;
  TargetHandle = 0;
  SourceHandle = 0;
  v41 = 0;
  *(_DWORD *)&Destination.Length = 34209792;
  Destination.Buffer = (PWSTR)&v44;
  ProcessWin32Process = (PVOID *)PsGetProcessWin32Process(Object);
  v30 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    if ( ((unsigned int)ProcessWin32Process[2] & 0x1000) != 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    if ( ProcessWin32Process[90] && ProcessWin32Process[54] )
    {
      if ( Object == (PVOID)PsGetCurrentProcess() )
      {
        SourceHandle = v30[90];
        v41 = v30[54];
LABEL_8:
        ObfDereferenceObject(Object);
        *v27 = SourceHandle;
        v8 = v41;
        *v26 = v41;
        return v8 == 0 ? ProcessLuid : 0;
      }
      ProcessLuid = ObOpenObjectByPointer(v30[89], 0, 0, 0x2000000u, ExWindowStationObjectType, 1, &SourceHandle);
      if ( ProcessLuid >= 0 )
      {
        ProcessLuid = ObOpenObjectByPointer(v30[47], 0, 0, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 1, &v41);
        if ( ProcessLuid >= 0 )
          goto LABEL_8;
        ObCloseHandle(SourceHandle, 1);
        SourceHandle = 0;
      }
      v16 = RtlNtStatusToDosError(ProcessLuid);
      UserSetLastError(v16);
      goto LABEL_8;
    }
  }
  v9 = v38;
  if ( !v38 || !*(_WORD *)v38 )
  {
    RtlInitUnicodeString(&DestinationString, L"Default");
    v32 = 1;
LABEL_13:
    v33 = 1;
    goto LABEL_14;
  }
  v38 = *(void **)v38;
  *(_DWORD *)&Source.Length = v38;
  v13 = (WCHAR *)*((_DWORD *)v9 + 1);
  v39 = v13;
  Source.Buffer = v13;
  for ( i = (unsigned __int16)v38 >> 1; i && *v13 != 92; --i )
    ++v13;
  v32 = 0;
  if ( !i )
  {
    *(_DWORD *)&DestinationString.Length = v38;
    DestinationString.Buffer = (PWSTR)v39;
    goto LABEL_13;
  }
  DestinationString.Buffer = v13 + 1;
  DestinationString.MaximumLength = 2 * i - 2;
  DestinationString.Length = DestinationString.MaximumLength;
  Source.Length = ((_WORD)v13 - (_WORD)v39) & 0xFFFE;
  v33 = 0;
  RtlAppendUnicodeToString(&Destination, _szWindowStationDirectory);
  RtlAppendUnicodeToString(&Destination, L"\\");
  RtlAppendUnicodeStringToString(&Destination, &Source);
  ProcessLuid = _UserTestForWinStaAccess(&Destination);
  if ( ProcessLuid < 0 )
    goto LABEL_96;
LABEL_14:
  v38 = v32 == 0 ? (void *)a4 : 0;
  v21 = v38;
  if ( SourceHandle || !_grpWinStaList )
  {
LABEL_30:
    if ( SourceHandle )
      goto LABEL_31;
    ProcessLuid = -1073741823;
LABEL_96:
    if ( !SourceHandle )
      goto LABEL_45;
    ObCloseHandle(SourceHandle, 1);
    goto LABEL_98;
  }
  if ( v33 )
  {
    RtlInitUnicodeString(&Source, L"WinSta0");
    RtlAppendUnicodeToString(&Destination, _szWindowStationDirectory);
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    if ( _UserTestForWinStaAccess(&Destination) < 0 )
    {
      v23 = 0;
      v24 = 0;
      ProcessLuid = GetProcessLuid(0, &v23);
      if ( ProcessLuid < 0 )
        goto LABEL_96;
      RtlStringCchPrintfW(SourceString, 0x1Du, L"Service-0x%x-%x$", v24, v23);
      RtlInitUnicodeString(&Source, SourceString);
      v34 = 0;
    }
    else
    {
      v34 = 1;
    }
    if ( v33
      && (unsigned __int8)ObFindHandleForObject(Object, 0, ExWindowStationObjectType, 0, &SourceHandle)
      && Object != (PVOID)PsGetCurrentProcess() )
    {
      v17 = ZwDuplicateObject(SourceProcessHandle, SourceHandle, (HANDLE)0xFFFFFFFF, &TargetHandle, 0, 0, 2u);
      ProcessLuid = v17;
      if ( v17 < 0 )
      {
        SourceHandle = 0;
        goto LABEL_22;
      }
      SourceHandle = TargetHandle;
    }
  }
  if ( !SourceHandle )
  {
LABEL_22:
    if ( ProcessLuid >= 0 && !SourceHandle )
    {
      Destination.Length = 0;
      RtlAppendUnicodeToString(&Destination, _szWindowStationDirectory);
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      RegionSize = 554;
      ProcessLuid = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, 0, &RegionSize, 0x1000u, 4u);
      v36 = (char *)BaseAddress + 24;
      v22 = (char *)BaseAddress + 24;
      if ( ProcessLuid >= 0 )
      {
        ms_exc.registration.TryLevel = 0;
        SafeCopyUnicodeString(v18, v19);
        *(_DWORD *)BaseAddress = 24;
        *((_DWORD *)BaseAddress + 1) = 0;
        *((_DWORD *)BaseAddress + 3) = 64;
        v10 = v36;
        *((_DWORD *)BaseAddress + 2) = v36;
        *((_DWORD *)BaseAddress + 4) = 0;
        *((_DWORD *)BaseAddress + 5) = 0;
        if ( v38 )
          *((_DWORD *)BaseAddress + 3) |= 2u;
        ms_exc.registration.TryLevel = -2;
        SourceHandle = (HANDLE)_OpenWindowStation(v10);
      }
    }
    goto LABEL_29;
  }
  v39 = 0;
  ProcessLuid = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, 0, &v39, 0);
  if ( ProcessLuid >= 0 )
  {
    v15 = v39;
    if ( (((*((_DWORD *)v39 + 8) >> 2) & 1) == 0) != v34 )
    {
      if ( TargetHandle )
      {
        CloseProtectedHandle(SourceHandle, 1);
        v15 = v39;
      }
      SourceHandle = 0;
    }
    ObfDereferenceObject(v15);
    goto LABEL_22;
  }
LABEL_29:
  if ( _gbNonServiceSession || ProcessLuid < 0 )
    goto LABEL_30;
  if ( SourceHandle )
  {
LABEL_31:
    if ( v41 )
      goto LABEL_45;
    if ( !v32 || !(unsigned __int8)ObFindHandleForObject(Object, 0, ExDesktopObjectType, 0, &v41) )
    {
LABEL_34:
      if ( ProcessLuid < 0 )
      {
LABEL_44:
        if ( v41 )
          goto LABEL_45;
        ObCloseHandle(SourceHandle, 1);
LABEL_98:
        SourceHandle = 0;
        goto LABEL_45;
      }
      if ( !v41 )
      {
        RtlCopyUnicodeString(&Destination, &DestinationString);
        if ( !BaseAddress )
        {
          RegionSize = 554;
          ProcessLuid = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, 0, &RegionSize, 0x1000u, 4u);
          v36 = (char *)BaseAddress + 24;
        }
        if ( ProcessLuid >= 0 )
        {
          ms_exc.registration.TryLevel = 1;
          SafeCopyUnicodeString(v18, v19);
          *(_DWORD *)BaseAddress = 24;
          *((_DWORD *)BaseAddress + 1) = SourceHandle;
          *((_DWORD *)BaseAddress + 3) = (v32 << 7) | 0x40;
          *((_DWORD *)BaseAddress + 2) = v36;
          *((_DWORD *)BaseAddress + 4) = 0;
          *((_DWORD *)BaseAddress + 5) = 0;
          if ( v21 )
            *((_DWORD *)BaseAddress + 3) |= 2u;
          ms_exc.registration.TryLevel = -2;
          if ( v32 )
            Desktop = xxxCreateDesktopEx((PVOID)0x2000000, 0, (int)&v41, 0);
          else
            Desktop = _OpenDesktop(BaseAddress, 0, 0x2000000u, &v41);
          ProcessLuid = Desktop;
        }
        goto LABEL_44;
      }
LABEL_45:
      if ( BaseAddress )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
      ObfDereferenceObject(Object);
      *v27 = SourceHandle;
      *v26 = v41;
      return ProcessLuid;
    }
    if ( Object != (PVOID)PsGetCurrentProcess() )
    {
      v38 = 0;
      ProcessLuid = ZwDuplicateObject(SourceProcessHandle, v41, (HANDLE)0xFFFFFFFF, &v38, 0, 0, 2u);
      if ( ProcessLuid < 0 )
      {
LABEL_93:
        CloseProtectedHandle(v41, 1);
        v41 = 0;
        goto LABEL_34;
      }
      v41 = v38;
    }
    if ( !v41 || !v30 )
      goto LABEL_34;
    v39 = 0;
    ProcessLuid = ObReferenceObjectByHandle(v41, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v39, 0);
    if ( ProcessLuid >= 0 )
    {
      v20[0] = 1;
      v20[1] = Object;
      v20[2] = v39;
      v20[3] = 0;
      v20[4] = 1;
      ProcessLuid = MapDesktop(v20);
      if ( ProcessLuid < 0 )
      {
        CloseProtectedHandle(v41, 1);
        v41 = 0;
      }
      ObfDereferenceObject(v39);
      goto LABEL_34;
    }
    goto LABEL_93;
  }
  if ( v34 || !v33 )
    goto LABEL_30;
  v12 = xxxConnectService(v27);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  ObfDereferenceObject(Object);
  if ( v12 >= 0 )
    *v26 = v41;
  return v12;
}
