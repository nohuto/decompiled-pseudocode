/*
 * XREFs of xxxResolveDesktop @ 0x1C00103F0
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktop @ 0x1C0010238 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C0010D48 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C0010DCC (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C0011064 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00122C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     CloseProtectedHandle @ 0x1C007DE18 (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxConnectService @ 0x1C0125844 (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r13d
  NTSTATUS result; // eax
  int ProcessLuid; // edi
  PVOID v9; // r15
  __int64 ProcessWin32Process; // rax
  PVOID *v11; // r14
  HANDLE v12; // rax
  int v13; // r8d
  int v14; // r12d
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  struct _UNICODE_STRING *v18; // r14
  __int64 v19; // rdx
  int Desktop; // eax
  UNICODE_STRING v21; // xmm1
  __int16 v22; // cx
  unsigned __int64 v23; // xmm0_8
  _WORD *i; // rdx
  PVOID v25; // rcx
  ULONG v26; // eax
  NTSTATUS v27; // eax
  HANDLE v28; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-380h]
  int v34; // [rsp+5Ch] [rbp-37Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-378h] BYREF
  int v36; // [rsp+70h] [rbp-368h]
  int v37; // [rsp+74h] [rbp-364h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-360h] BYREF
  PVOID v39; // [rsp+80h] [rbp-358h] BYREF
  HANDLE SourceProcessHandle; // [rsp+88h] [rbp-350h] BYREF
  HANDLE *v41; // [rsp+90h] [rbp-348h]
  _QWORD *v42; // [rsp+98h] [rbp-340h]
  PUNICODE_STRING v43; // [rsp+A0h] [rbp-338h]
  PVOID v44; // [rsp+A8h] [rbp-330h] BYREF
  int v45; // [rsp+B0h] [rbp-328h]
  __int64 v46; // [rsp+B8h] [rbp-320h] BYREF
  void *TargetHandle; // [rsp+C0h] [rbp-318h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-2F8h] BYREF
  HANDLE *v50; // [rsp+F0h] [rbp-2E8h]
  __int64 v51; // [rsp+F8h] [rbp-2E0h]
  char *v52; // [rsp+100h] [rbp-2D8h]
  void *v53; // [rsp+108h] [rbp-2D0h]
  _QWORD v54[3]; // [rsp+110h] [rbp-2C8h] BYREF
  int v55; // [rsp+128h] [rbp-2B0h]
  int v56; // [rsp+12Ch] [rbp-2ACh]
  WCHAR SourceString[32]; // [rsp+140h] [rbp-298h] BYREF
  char v58; // [rsp+180h] [rbp-258h] BYREF

  v34 = a4;
  v41 = a3;
  SourceProcessHandle = a1;
  v53 = a1;
  v50 = a3;
  v42 = a5;
  v6 = 0;
  v36 = 0;
  DestinationString = 0LL;
  Source = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v43 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  v44 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v44, 0LL);
  ProcessLuid = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v58;
    v9 = v44;
    ProcessWin32Process = PsGetProcessWin32Process(v44);
    v11 = (PVOID *)ProcessWin32Process;
    v51 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 672) && *(_QWORD *)(ProcessWin32Process + 392) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess() )
        {
          Handle = v11[84];
          SourceHandle = v11[49];
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(v11[83], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            v11[42],
                            0,
                            0LL,
                            0x2000000u,
                            (POBJECT_TYPE)ExDesktopObjectType,
                            1,
                            &SourceHandle);
            if ( ProcessLuid < 0 )
            {
              ObCloseHandle(Handle, 1);
              Handle = 0LL;
            }
          }
          if ( ProcessLuid < 0 )
          {
            v26 = RtlNtStatusToDosError(ProcessLuid);
            UserSetLastError(v26);
          }
        }
        ObfDereferenceObject(v9);
        *v41 = Handle;
        v12 = SourceHandle;
        if ( SourceHandle )
          ProcessLuid = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v21 = *a2;
      Source = v21;
      v22 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v21) >> 1;
      v23 = _mm_srli_si128((__m128i)v21, 8).m128i_u64[0];
      for ( i = (_WORD *)v23; v22; --v22 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v13 = 0;
      v33 = 0;
      if ( v22 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v22 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v23) >> 1);
        v14 = 0;
        v37 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ProcessLuid = UserTestForWinStaAccess(&Destination);
        if ( ProcessLuid < 0 )
          goto LABEL_49;
        v13 = 0;
LABEL_17:
        v15 = 0;
        if ( !v13 )
          v15 = v34;
        v34 = v15;
        v45 = v15;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v14 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v46 = 0LL;
            ProcessLuid = GetProcessLuid(0LL, &v46, v16, v17);
            if ( ProcessLuid < 0 )
              goto LABEL_49;
            LODWORD(Object) = v46;
            RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", HIDWORD(v46), Object);
            RtlInitUnicodeString(&Source, SourceString);
            v36 = 0;
          }
          else
          {
            v6 = 1;
            v36 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess() )
          {
            v27 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            ProcessLuid = v27;
            if ( v27 < 0 )
            {
              Handle = 0LL;
LABEL_25:
              if ( ProcessLuid >= 0 && !Handle )
              {
                Destination.Length = 0;
                RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
                RtlAppendUnicodeToString(&Destination, L"\\");
                RtlAppendUnicodeStringToString(&Destination, &Source);
                RegionSize = 586LL;
                ProcessLuid = ZwAllocateVirtualMemory(
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &BaseAddress,
                                0LL,
                                &RegionSize,
                                0x1000u,
                                4u);
                v43 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v52 = (char *)BaseAddress + 48;
                if ( ProcessLuid >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v43;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v34 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbNonServiceSession && ProcessLuid >= 0 && !Handle && !v6 && v14 )
              {
                ProcessLuid = xxxConnectService(&Destination, &SourceHandle, v41);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( ProcessLuid < 0 )
                  return ProcessLuid;
                goto LABEL_52;
              }
              v13 = v33;
LABEL_33:
              if ( !Handle )
              {
                ProcessLuid = -1073741823;
                goto LABEL_49;
              }
              if ( SourceHandle )
              {
LABEL_49:
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                *v41 = Handle;
LABEL_52:
                v12 = SourceHandle;
LABEL_10:
                *v42 = v12;
                return ProcessLuid;
              }
              if ( !v13 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
              {
LABEL_37:
                if ( ProcessLuid < 0 )
                {
LABEL_47:
                  if ( !SourceHandle )
                  {
                    ObCloseHandle(Handle, 1);
                    Handle = 0LL;
                  }
                  goto LABEL_49;
                }
                if ( !SourceHandle )
                {
                  RtlCopyUnicodeString(&Destination, &DestinationString);
                  if ( BaseAddress )
                  {
                    v18 = v43;
                  }
                  else
                  {
                    RegionSize = 586LL;
                    ProcessLuid = ZwAllocateVirtualMemory(
                                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                    &BaseAddress,
                                    0LL,
                                    &RegionSize,
                                    0x1000u,
                                    4u);
                    v18 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( ProcessLuid >= 0 )
                  {
                    SafeCopyUnicodeString(v18, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v19 = v33;
                    *((_DWORD *)BaseAddress + 6) = (v33 << 7) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v18;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v34 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v19 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop((__int64)BaseAddress, v19, 0LL, 0x2000000, &SourceHandle);
                    ProcessLuid = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess() )
              {
                v39 = 0LL;
                ProcessLuid = ZwDuplicateObject(
                                SourceProcessHandle,
                                SourceHandle,
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &v39,
                                0,
                                0,
                                2u);
                if ( ProcessLuid < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v39;
              }
              if ( !SourceHandle || !v11 )
                goto LABEL_37;
              SourceProcessHandle = 0LL;
              ProcessLuid = ObReferenceObjectByHandle(
                              SourceHandle,
                              0,
                              (POBJECT_TYPE)ExDesktopObjectType,
                              0,
                              &SourceProcessHandle,
                              0LL);
              if ( ProcessLuid >= 0 )
              {
                v54[0] = 1LL;
                v54[1] = v9;
                v28 = SourceProcessHandle;
                v54[2] = SourceProcessHandle;
                v55 = 0;
                v56 = 1;
                ProcessLuid = MapDesktop(v54);
                if ( ProcessLuid < 0 )
                {
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v28);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v39 = 0LL;
          ProcessLuid = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, &v39, 0LL);
          if ( ProcessLuid >= 0 )
          {
            v25 = v39;
            if ( (((*((_DWORD *)v39 + 16) >> 2) & 1) == 0) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle);
                v25 = v39;
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v25);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v21;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v13 = 1;
      v33 = 1;
    }
    v14 = 1;
    v37 = 1;
    goto LABEL_17;
  }
  return result;
}
