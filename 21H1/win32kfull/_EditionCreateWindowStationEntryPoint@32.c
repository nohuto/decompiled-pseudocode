/*
 * XREFs of _EditionCreateWindowStationEntryPoint@32 @ 0xF228C
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102 (-RtlStringCchCopyNW@@YGJPAGIPBGI@Z.c)
 *     _PopW32ThreadLock@4 @ 0xAE3DC (_PopW32ThreadLock@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void *__stdcall EditionCreateWindowStationEntryPoint(
        unsigned int a1,
        ACCESS_MASK a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        ULONG a7,
        int a8)
{
  int *v8; // esi
  int v9; // ecx
  size_t v10; // edx
  ULONG v11; // edi
  _DWORD *v12; // edx
  const void *v13; // esi
  int v14; // esi
  const void *v15; // esi
  ULONG v16; // edx
  NTSTATUS ProcessLuid; // esi
  int v18; // ecx
  USHORT v19; // dx
  WCHAR *v20; // esi
  int v21; // eax
  int *v22; // ecx
  struct _NT_TIB *v23; // eax
  int v24; // edx
  int v25; // edi
  struct _NT_TIB *v26; // eax
  const unsigned __int16 *v28; // [esp+0h] [ebp-5D0h]
  unsigned int v29; // [esp+4h] [ebp-5CCh]
  _BYTE v30[752]; // [esp+10h] [ebp-5C0h] BYREF
  _DWORD v31[6]; // [esp+300h] [ebp-2D0h] BYREF
  int v32; // [esp+318h] [ebp-2B8h]
  int v33; // [esp+31Ch] [ebp-2B4h]
  int v34; // [esp+320h] [ebp-2B0h]
  _DWORD v35[3]; // [esp+324h] [ebp-2ACh] BYREF
  _DWORD v36[5]; // [esp+330h] [ebp-2A0h] BYREF
  int v37; // [esp+344h] [ebp-28Ch]
  _DWORD v38[6]; // [esp+34Ch] [ebp-284h] BYREF
  int v39; // [esp+364h] [ebp-26Ch] BYREF
  int v40; // [esp+368h] [ebp-268h]
  int v41; // [esp+36Ch] [ebp-264h]
  ULONG_PTR RegionSize; // [esp+370h] [ebp-260h] BYREF
  _DWORD *v43; // [esp+374h] [ebp-25Ch]
  NTSTATUS v44; // [esp+378h] [ebp-258h]
  struct _UNICODE_STRING DestinationString; // [esp+37Ch] [ebp-254h] BYREF
  PVOID BaseAddress; // [esp+384h] [ebp-24Ch] BYREF
  void *v47; // [esp+388h] [ebp-248h] BYREF
  int v48; // [esp+38Ch] [ebp-244h] BYREF
  char v49; // [esp+393h] [ebp-23Dh]
  int v50; // [esp+394h] [ebp-23Ch] BYREF
  int v51; // [esp+398h] [ebp-238h]
  int v52; // [esp+39Ch] [ebp-234h]
  WCHAR SourceString[256]; // [esp+3A0h] [ebp-230h] BYREF
  _BYTE v54[24]; // [esp+5A0h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+5B8h] [ebp-18h]

  v37 = a3;
  v8 = (int *)a7;
  memset(v38, 0, sizeof(v38));
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v48 = 0;
  v39 = 0;
  v40 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v43 = 0;
  v49 = 0;
  BaseAddress = 0;
  RegionSize = 0;
  memset(v36, 0, 12);
  memset(v35, 0, sizeof(v35));
  v47 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  if ( a7 >= _MmUserProbeAddress )
    v8 = (int *)_MmUserProbeAddress;
  v9 = *v8;
  v41 = v9;
  v36[3] = v9;
  v10 = v8[1];
  v36[4] = v10;
  v11 = (unsigned __int16)v9 + v10 + 2;
  if ( v11 <= v10 || v11 >= _MmUserProbeAddress )
    goto LABEL_49;
  if ( (unsigned __int16)v9 > HIWORD(v41) )
  {
    if ( (v9 & 1) == 0 )
      goto LABEL_49;
    goto LABEL_51;
  }
  if ( (v9 & 1) != 0 )
  {
LABEL_51:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_49;
  }
  RtlStringCchCopyNW(v10, (size_t *)((unsigned __int16)v9 >> 1), v28, v29);
  v12 = (_DWORD *)Win32AllocPoolWithQuota(752, 1702064981);
  v43 = v12;
  if ( !v12 )
  {
    v47 = 0;
    UserSetLastError((struct _NT_TIB *)8);
    ms_exc.registration.TryLevel = -2;
    goto LABEL_66;
  }
  v13 = (const void *)a6;
  if ( a6 + 752 < a6 || a6 + 752 > _MmUserProbeAddress )
    v13 = (const void *)_MmUserProbeAddress;
  qmemcpy(v30, v13, sizeof(v30));
  qmemcpy(v12, v30, 0x2F0u);
  if ( *v12 >= 8u )
  {
    v47 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    ms_exc.registration.TryLevel = -2;
    goto LABEL_14;
  }
  v15 = (const void *)a1;
  if ( a1 + 24 < a1 || a1 + 24 > _MmUserProbeAddress )
    v15 = (const void *)_MmUserProbeAddress;
  qmemcpy(v31, v15, sizeof(v31));
  qmemcpy(v38, v31, sizeof(v38));
  v38[3] = v31[3] & 0xFFFFFDFF;
  v16 = v38[2];
  if ( v38[2] || v38[1] )
  {
    if ( v38[2] >= _MmUserProbeAddress )
      v16 = _MmUserProbeAddress;
    v18 = *(_DWORD *)v16;
    v41 = v18;
    *(_DWORD *)&DestinationString.Length = v18;
    DestinationString.Buffer = *(PWSTR *)(v16 + 4);
    v19 = v18;
    v20 = (PWSTR)((char *)DestinationString.Buffer + (unsigned __int16)v18 + 2);
    if ( v20 > DestinationString.Buffer && (unsigned int)v20 < _MmUserProbeAddress )
    {
      if ( (unsigned __int16)v18 > HIWORD(v41) )
      {
        if ( (v18 & 1) == 0 )
          goto LABEL_49;
      }
      else if ( (v18 & 1) == 0 )
      {
        if ( (unsigned __int16)v18 >= 0x20Au )
          v19 = 522;
        DestinationString.Length = v19;
        RegionSize = v19;
        v21 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, 0, &RegionSize, 0x1000u, 4u);
        ProcessLuid = v21;
        v44 = v21;
        if ( v21 < 0 )
          ExRaiseStatus(v21);
        memcpy(BaseAddress, DestinationString.Buffer, DestinationString.Length);
        DestinationString.Buffer = (PWSTR)BaseAddress;
        v38[2] = &DestinationString;
        v49 = 1;
        goto LABEL_34;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
LABEL_49:
    ExRaiseAccessViolation();
  }
  ProcessLuid = GetProcessLuid(0, &v39);
  v44 = ProcessLuid;
  if ( ProcessLuid >= 0 )
  {
    RtlStringCchPrintfW(SourceString, 0x100u, L"%ws\\Service-0x%x-%x$", _szWindowStationDirectory, v40, v39);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v38[2] = &DestinationString;
    v49 = 0;
  }
  v49 = 0;
LABEL_34:
  if ( ProcessLuid >= 0 )
  {
    v22 = (int *)v38[5];
    if ( v38[5] )
    {
      if ( (unsigned int)(v38[5] + 12) < v38[5] || v38[5] + 12 > _MmUserProbeAddress )
        v22 = (int *)_MmUserProbeAddress;
      v32 = *v22;
      v33 = v22[1];
      v34 = v22[2];
      v50 = v32;
      v51 = v33;
      v52 = v34;
      v38[5] = &v50;
      ProcessLuid = v44;
    }
    if ( ProcessLuid >= 0 && v38[4] )
    {
      ProcessLuid = SeCaptureSecurityDescriptor(v38[4], 1, 1, 0, &v48);
      v44 = ProcessLuid;
      if ( ProcessLuid < 0 && v48 )
      {
        SeReleaseSecurityDescriptor(v48, 1, 0);
        v48 = 0;
      }
      v38[4] = v48;
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( ProcessLuid >= 0 )
  {
    if ( v48 )
      PushW32ThreadLock(v48, v35, (int)CleanupSecurityDescriptor);
    v14 = (int)v43;
    PushW32ThreadLock((int)v43, v36, (int)Win32FreePool);
    LOBYTE(v24) = v49;
    v25 = xxxCreateWindowStation((int)v38, v24, a2, v37, a4, a5, v14, (int)v54, a8, &v47);
    PopW32ThreadLock(v36);
    if ( v48 )
    {
      PopAndFreeAlwaysW32ThreadLock((int)v35);
      v48 = 0;
    }
    if ( v25 < 0 )
    {
      v47 = 0;
      v26 = (struct _NT_TIB *)RtlNtStatusToDosError(v25);
      UserSetLastError(v26);
    }
    goto LABEL_60;
  }
  v47 = 0;
  v23 = (struct _NT_TIB *)RtlNtStatusToDosError(ProcessLuid);
  UserSetLastError(v23);
LABEL_14:
  v14 = (int)v43;
LABEL_60:
  if ( v14 )
    Win32FreePool(v14);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  if ( v48 )
  {
    SeReleaseSecurityDescriptor(v48, 1, 0);
    v48 = 0;
  }
LABEL_66:
  UserSessionSwitchLeaveCrit();
  return v47;
}
