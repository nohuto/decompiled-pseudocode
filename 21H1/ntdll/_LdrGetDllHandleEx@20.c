/*
 * XREFs of _LdrGetDllHandleEx@20 @ 0x4B2CABE0
 * Callers:
 *     _LdrGetDllHandle@16 @ 0x4B2CC810 (_LdrGetDllHandle@16.c)
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460 (_RtlWow64EnableFsRedirectionEx@8.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpIncrementModuleLoadCount@4 @ 0x4B2CF5D2 (_LdrpIncrementModuleLoadCount@4.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogDllStateEx2@16 @ 0x4B32FDF3 (_LdrpLogDllStateEx2@16.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  wchar_t *Buffer; // edi
  char v6; // bl
  PVOID *v7; // edi
  NTSTATUS LoadedDllByName; // esi
  int v9; // eax
  int v10; // esi
  int v11; // edi
  wchar_t *i; // ebx
  unsigned int v13; // eax
  int v14; // eax
  int *v15; // ecx
  int *v16; // eax
  int v17; // edx
  wchar_t *v18; // edi
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // ebx
  _DWORD *v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // ax
  __int16 v26; // ax
  int v28; // edi
  int v29; // eax
  char *v30; // eax
  int Count; // eax
  size_t v32; // [esp-4h] [ebp-2B4h]
  PVOID BaseAddress; // [esp+10h] [ebp-2A0h] BYREF
  bool v34; // [esp+17h] [ebp-299h]
  PVOID *v35; // [esp+18h] [ebp-298h]
  int v36; // [esp+1Ch] [ebp-294h] BYREF
  int v37; // [esp+20h] [ebp-290h] BYREF
  int *v38; // [esp+24h] [ebp-28Ch]
  int *v39; // [esp+28h] [ebp-288h]
  int v40[2]; // [esp+2Ch] [ebp-284h] BYREF
  int v41; // [esp+34h] [ebp-27Ch]
  PVOID OldFsRedirectionLevel; // [esp+38h] [ebp-278h] BYREF
  _UNICODE_STRING DestinationString; // [esp+3Ch] [ebp-274h] BYREF
  unsigned int v44; // [esp+44h] [ebp-26Ch]
  PWSTR Path[19]; // [esp+48h] [ebp-268h] BYREF
  char v46; // [esp+94h] [ebp-21Ch]
  _UNICODE_STRING SystemPath; // [esp+98h] [ebp-218h] BYREF
  _WORD v48[128]; // [esp+A0h] [ebp-210h] BYREF
  int v49; // [esp+1A0h] [ebp-110h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+1A4h] [ebp-10Ch]
  _WORD v51[130]; // [esp+1A8h] [ebp-108h] BYREF

  v35 = DllHandle;
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 844, "LdrGetDllHandleEx", 3, "DLL name: %wZ\n", DllName);
  Buffer = DllName->Buffer;
  LODWORD(v32) = 80;
  memset(Path, 0, v32);
  if ( ((unsigned __int8)DllPath & 1) == 0 && DllPath )
  {
    Path[0] = DllPath;
    if ( (ShowSnaps & 5) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrutil.c",
        1445,
        "LdrpInitializeDllPath",
        2,
        "DLL search path passed in externally: %ws\n",
        DllPath);
    LdrpLogDllStateEx2(Path[0], 5312);
  }
  else
  {
    Path[4] = (PWSTR)Buffer;
    Path[3] = (PWSTR)((unsigned int)DllPath & 0xFFFFFFFE);
  }
  v6 = Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 )
  {
    LoadedDllByName = -1073741811;
    goto LABEL_60;
  }
  if ( (Flags & 3) == 3 )
  {
    LoadedDllByName = -1073741811;
    goto LABEL_60;
  }
  v7 = v35;
  if ( !v35 && (Flags & 2) == 0 )
  {
    LoadedDllByName = -1073741811;
    goto LABEL_60;
  }
  v34 = RtlWow64EnableFsRedirectionEx(0, &OldFsRedirectionLevel) >= 0;
  v36 = 0;
  SystemPath.Buffer = v48;
  BaseAddress = 0;
  v48[0] = 0;
  *(_DWORD *)&SystemPath.Length = 0x1000000;
  LoadedDllByName = LdrpPreprocessDllName(DllName, &SystemPath, 0, (int)&v36);
  if ( LoadedDllByName >= 0 )
  {
    v9 = v36;
    if ( (v36 & 0x20) != 0 )
    {
      v10 = 0;
      v11 = SystemPath.Length >> 1;
      for ( i = SystemPath.Buffer; v11; v10 = (unsigned __int16)v13 + 65599 * v10 )
      {
        v13 = *i++;
        --v11;
        v38 = (int *)v13;
        if ( v13 >= 0x61 )
        {
          if ( v13 > 0x7A )
          {
            if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v13 >= 0xC0u )
              LOWORD(v13) = (_WORD)v38
                          + *(_WORD *)(Nls844UnicodeUpcaseTable
                                     + 2
                                     * ((v13 & 0xF)
                                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                            + 2
                                                            * ((((unsigned __int16)v13 >> 4) & 0xF)
                                                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                   + 2 * BYTE1(v13))))));
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
      }
      if ( !v10 )
        v10 = 0x80000000;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v14 = v10 & 0x1F;
      v15 = (int *)LdrpHashTable[2 * v14];
      v39 = &LdrpHashTable[2 * v14];
      v38 = v15;
      if ( v15 == v39 )
        goto LABEL_66;
      v16 = &LdrpHashTable[2 * v14];
      while ( 1 )
      {
        v17 = (int)(v15 - 15);
        v40[0] = (int)(v15 - 15);
        if ( v10 != v15[21]
          || (v36 & 8) != 0 && (*(_BYTE *)(v17 + 52) & 1) == 0
          || (*(_DWORD *)(v17 + 52) & 0x10000000) != 0 )
        {
          goto LABEL_65;
        }
        if ( SystemPath.Length != *(unsigned __int16 *)(v17 + 44) )
          goto LABEL_100;
        v18 = SystemPath.Buffer;
        *(_DWORD *)&DestinationString.Length = (char *)SystemPath.Buffer + SystemPath.Length;
        if ( SystemPath.Buffer >= (wchar_t *)*(_DWORD *)&DestinationString.Length )
        {
LABEL_29:
          v22 = *(_DWORD **)(v17 + 80);
          if ( v22[3] != -1 && (*(_BYTE *)(*v22 - 32) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 156));
          v23 = *(_DWORD *)(v17 + 80);
          LoadedDllByName = 0;
          BaseAddress = (PVOID)v17;
          v37 = *(_DWORD *)(v23 + 32);
LABEL_31:
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
          if ( RtlGetCurrentServiceSessionId() )
            v24 = (int)NtCurrentPeb()->SharedData + 554;
          else
            v24 = 2147353476;
          if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v30 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
            if ( (*v30 & 0x20) != 0 )
              LdrpLogEtwEvent(0, LoadedDllByName >= 0 ? 0 : 3, &SystemPath, 0);
          }
          v6 = Flags;
          goto LABEL_35;
        }
        v19 = *(_DWORD *)(v17 + 48) - (unsigned int)SystemPath.Buffer;
        v44 = v19;
        while ( 1 )
        {
          v20 = *(wchar_t *)((char *)v18 + v19);
          v21 = *v18;
          v41 = v20;
          if ( (_WORD)v21 != (_WORD)v20 )
            break;
LABEL_27:
          if ( (unsigned int)++v18 >= *(_DWORD *)&DestinationString.Length )
          {
            v17 = v40[0];
            goto LABEL_29;
          }
        }
        if ( v21 >= 0x61 )
        {
          if ( v21 <= 0x7A )
          {
            v25 = v21 - 32;
LABEL_54:
            LOWORD(v21) = v25;
            goto LABEL_55;
          }
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v21 >= 0xC0u )
          {
            LOWORD(v20) = v41;
            v25 = v21
                + *(_WORD *)(Nls844UnicodeUpcaseTable
                           + 2
                           * ((v21 & 0xF)
                            + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                  + 2
                                                  * (((unsigned __int8)v21 >> 4)
                                                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v21 >> 8))))));
            goto LABEL_54;
          }
        }
LABEL_55:
        if ( (unsigned __int16)v20 < 0x61u )
          goto LABEL_56;
        if ( (unsigned __int16)v20 > 0x7Au )
        {
          if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v20 < 0xC0u )
          {
LABEL_56:
            v26 = v20;
            goto LABEL_57;
          }
          v26 = v41
              + *(_WORD *)(Nls844UnicodeUpcaseTable
                         + 2
                         * ((v20 & 0xF)
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2
                                                * ((((unsigned __int16)v20 >> 4) & 0xF)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * BYTE1(v20))))));
        }
        else
        {
          v26 = v20 - 32;
        }
LABEL_57:
        if ( (_WORD)v21 == v26 )
        {
          v19 = v44;
          goto LABEL_27;
        }
        v15 = v38;
LABEL_100:
        v16 = v39;
LABEL_65:
        v15 = (int *)*v15;
        v38 = v15;
        if ( v15 == v16 )
        {
LABEL_66:
          LoadedDllByName = -1073741515;
          goto LABEL_31;
        }
      }
    }
    v28 = v36 & 0x200;
    if ( (v36 & 0x200) != 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(v36, &BaseAddress, &v37);
      if ( LoadedDllByName >= 0 )
        goto LABEL_35;
      v9 = v36;
    }
    v49 = 0x1000000;
    BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v51;
    v51[0] = 0;
    v40[0] = 0;
    v40[1] = 0;
    if ( v28 )
      v29 = LdrpResolveDllName(&DestinationString, (int)v40, v9);
    else
      v29 = LdrpSearchPath(&SystemPath, Path, 0, 0, &v49, &DestinationString, v40, 0, 0);
    LoadedDllByName = v29;
    if ( v29 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(v36, &BaseAddress, &v37);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v49, &BaseAddress, &v37);
    }
    LdrpFreeUnicodeString(v40);
    if ( v51 != (_WORD *)BoundaryDescriptor )
      RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
    v49 = 0x1000000;
    BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v51;
    v51[0] = 0;
LABEL_35:
    if ( (ShowSnaps & 9) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrfind.c",
        480,
        "LdrpFindLoadedDllInternal",
        4,
        "Status: 0x%08lx\n",
        LoadedDllByName);
    if ( LoadedDllByName >= 0 && v37 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(BaseAddress);
      BaseAddress = 0;
      LdrpDrainWorkQueue(0);
      LoadedDllByName = LdrpFindLoadedDllInternal(&BaseAddress, &v37, v36);
      LdrpDropLastInProgressCount();
      if ( LoadedDllByName >= 0 && v37 != 9 )
      {
        LdrpDereferenceModule(BaseAddress);
        BaseAddress = 0;
        LoadedDllByName = -1073741515;
      }
    }
    v7 = v35;
  }
  if ( v48 != SystemPath.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)SystemPath.Buffer);
  *(_DWORD *)&SystemPath.Length = 0x1000000;
  SystemPath.Buffer = v48;
  v48[0] = 0;
  if ( v34 )
    RtlWow64EnableFsRedirectionEx(OldFsRedirectionLevel, &OldFsRedirectionLevel);
  if ( LoadedDllByName >= 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      Count = LdrpPinModule(BaseAddress);
    }
    else
    {
      if ( (v6 & 1) != 0 )
        goto LABEL_47;
      Count = LdrpIncrementModuleLoadCount(BaseAddress);
    }
    LoadedDllByName = Count;
LABEL_47:
    if ( LoadedDllByName >= 0 && v7 )
      *v7 = (PVOID)*((_DWORD *)BaseAddress + 6);
    LdrpDereferenceModule(BaseAddress);
  }
LABEL_60:
  if ( v46 )
    RtlReleasePath(Path[0]);
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 894, "LdrGetDllHandleEx", 4, "Status: 0x%08lx\n", LoadedDllByName);
  return LoadedDllByName;
}
