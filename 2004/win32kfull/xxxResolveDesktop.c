/*
 * XREFs of xxxResolveDesktop @ 0x1C00C45C0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BD568 (CloseProtectedHandle.c)
 *     _OpenDesktop @ 0x1C00C4408 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00C4F18 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C00C4F9C (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C00C5234 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C6090 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxConnectService @ 0x1C0124554 (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r13d
  NTSTATUS result; // eax
  NTSTATUS ProcessLuid; // edi
  PVOID v9; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID *v14; // r14
  HANDLE v15; // rax
  int v16; // r8d
  int v17; // r12d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _UNICODE_STRING *v25; // r14
  __int64 v26; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v28; // xmm1
  __int16 v29; // cx
  unsigned __int64 v30; // xmm0_8
  _WORD *i; // rdx
  PVOID v32; // rcx
  ULONG v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  NTSTATUS v36; // eax
  HANDLE v37; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v42; // [rsp+58h] [rbp-380h]
  int v43; // [rsp+5Ch] [rbp-37Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-378h] BYREF
  int v45; // [rsp+70h] [rbp-368h]
  int v46; // [rsp+74h] [rbp-364h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-360h] BYREF
  PVOID v48; // [rsp+80h] [rbp-358h] BYREF
  HANDLE SourceProcessHandle; // [rsp+88h] [rbp-350h] BYREF
  HANDLE *v50; // [rsp+90h] [rbp-348h]
  _QWORD *v51; // [rsp+98h] [rbp-340h]
  PUNICODE_STRING v52; // [rsp+A0h] [rbp-338h]
  PVOID v53; // [rsp+A8h] [rbp-330h] BYREF
  int v54; // [rsp+B0h] [rbp-328h]
  __int64 v55; // [rsp+B8h] [rbp-320h] BYREF
  void *TargetHandle; // [rsp+C0h] [rbp-318h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-2F8h] BYREF
  HANDLE *v59; // [rsp+F0h] [rbp-2E8h]
  __int64 v60; // [rsp+F8h] [rbp-2E0h]
  char *v61; // [rsp+100h] [rbp-2D8h]
  void *v62; // [rsp+108h] [rbp-2D0h]
  _QWORD v63[3]; // [rsp+110h] [rbp-2C8h] BYREF
  int v64; // [rsp+128h] [rbp-2B0h]
  int v65; // [rsp+12Ch] [rbp-2ACh]
  WCHAR SourceString[32]; // [rsp+140h] [rbp-298h] BYREF
  char v67; // [rsp+180h] [rbp-258h] BYREF

  v43 = a4;
  v50 = a3;
  SourceProcessHandle = a1;
  v62 = a1;
  v59 = a3;
  v51 = a5;
  v6 = 0;
  v45 = 0;
  DestinationString = 0LL;
  Source = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v52 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  v53 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v53, 0LL);
  ProcessLuid = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v67;
    v9 = v53;
    ProcessWin32Process = PsGetProcessWin32Process(v53);
    v14 = (PVOID *)ProcessWin32Process;
    v60 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 672) && *(_QWORD *)(ProcessWin32Process + 392) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12, v11, v13) )
        {
          Handle = v14[84];
          SourceHandle = v14[49];
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(v14[83], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            v14[42],
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
            v33 = RtlNtStatusToDosError(ProcessLuid);
            UserSetLastError(v33, v34, v35);
          }
        }
        ObfDereferenceObject(v9);
        *v50 = Handle;
        v15 = SourceHandle;
        if ( SourceHandle )
          ProcessLuid = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v28 = *a2;
      Source = v28;
      v29 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v28) >> 1;
      v30 = _mm_srli_si128((__m128i)v28, 8).m128i_u64[0];
      for ( i = (_WORD *)v30; v29; --v29 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v16 = 0;
      v42 = 0;
      if ( v29 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v29 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v30) >> 1);
        v17 = 0;
        v46 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ProcessLuid = UserTestForWinStaAccess(&Destination);
        if ( ProcessLuid < 0 )
          goto LABEL_49;
        v16 = 0;
LABEL_17:
        v18 = 0;
        if ( !v16 )
          v18 = v43;
        v43 = v18;
        v54 = v18;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v17 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v55 = 0LL;
            ProcessLuid = GetProcessLuid(0LL, &v55);
            if ( ProcessLuid < 0 )
              goto LABEL_49;
            LODWORD(Object) = v55;
            RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", HIDWORD(v55), Object);
            RtlInitUnicodeString(&Source, SourceString);
            v45 = 0;
          }
          else
          {
            v6 = 1;
            v45 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess(v20, v19, v21) )
          {
            v36 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            ProcessLuid = v36;
            if ( v36 < 0 )
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
                v52 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v61 = (char *)BaseAddress + 48;
                if ( ProcessLuid >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v52;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v43 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbNonServiceSession && ProcessLuid >= 0 && !Handle && !v6 && v17 )
              {
                ProcessLuid = xxxConnectService(&Destination, &SourceHandle, v50);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( ProcessLuid < 0 )
                  return ProcessLuid;
                goto LABEL_52;
              }
              v16 = v42;
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
                *v50 = Handle;
LABEL_52:
                v15 = SourceHandle;
LABEL_10:
                *v51 = v15;
                return ProcessLuid;
              }
              if ( !v16 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
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
                    v25 = v52;
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
                    v25 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( ProcessLuid >= 0 )
                  {
                    SafeCopyUnicodeString(v25, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v26 = v42;
                    *((_DWORD *)BaseAddress + 6) = (v42 << 7) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v25;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v43 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v26 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop((__int64)BaseAddress, v26, 0LL, 0x2000000, &SourceHandle);
                    ProcessLuid = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess(v23, v22, v24) )
              {
                v48 = 0LL;
                ProcessLuid = ZwDuplicateObject(
                                SourceProcessHandle,
                                SourceHandle,
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &v48,
                                0,
                                0,
                                2u);
                if ( ProcessLuid < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v48;
              }
              if ( !SourceHandle || !v14 )
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
                v63[0] = 1LL;
                v63[1] = v9;
                v37 = SourceProcessHandle;
                v63[2] = SourceProcessHandle;
                v64 = 0;
                v65 = 1;
                ProcessLuid = MapDesktop((__int64)v63);
                if ( ProcessLuid < 0 )
                {
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v37);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v48 = 0LL;
          ProcessLuid = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, &v48, 0LL);
          if ( ProcessLuid >= 0 )
          {
            v32 = v48;
            if ( (((*((_DWORD *)v48 + 16) >> 2) & 1) == 0) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle, 1);
                v32 = v48;
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v32);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v28;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v16 = 1;
      v42 = 1;
    }
    v17 = 1;
    v46 = 1;
    goto LABEL_17;
  }
  return result;
}
