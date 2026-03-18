/*
 * XREFs of RtlpQueryRegistryValues @ 0x1406823A0
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x14067CC40 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlQueryRegistryValuesEx @ 0x140681B00 (RtlQueryRegistryValuesEx.c)
 *     RtlQueryRegistryValues @ 0x140681D30 (RtlQueryRegistryValues.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140682228 (WmipGetGuidSecurityDescriptor.c)
 *     WmipQueryWmiDataBlock @ 0x1406BCBE0 (WmipQueryWmiDataBlock.c)
 *     PiDevCfgQueryDriverNode @ 0x140721F14 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140757600 (PiDevCfgQueryDriverConfiguration.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077D4C0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14077DAE0 (EtwpGetAutoLoggerProviderFilter.c)
 *     SshpQueryRegistryValues @ 0x14077F5AC (SshpQueryRegistryValues.c)
 *     PspQueryForwardersEnabled @ 0x14078FEB8 (PspQueryForwardersEnabled.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140790DA4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x14079103C (RtlSetActiveTimeBias.c)
 *     EtwStartAutoLogger @ 0x1407A05CC (EtwStartAutoLogger.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A1498 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407B095C (EtwpGetAutoLoggerEventNameFilter.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407B3B34 (IopQueryPassiveInterruptRegistryOptions.c)
 *     VRegSetup @ 0x1407B51D0 (VRegSetup.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407B5418 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     ExpGetNumberOfInitialSessionsFromRegistry @ 0x1407BBF68 (ExpGetNumberOfInitialSessionsFromRegistry.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A11DC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A2E14 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B2948 (PiDrvDbQuerySystemPathWin32.c)
 *     PpmRegisterSpmSettings @ 0x1408F1A10 (PpmRegisterSpmSettings.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x140902678 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140902714 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     SmKmRegParamsLoad @ 0x1409274A0 (SmKmRegParamsLoad.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x140935BC4 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140935CEC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x140935FD0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpPcwDisabledStatus @ 0x1409522D8 (ExpPcwDisabledStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403F2590 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1406827E8 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpCallQueryRegistryRoutine @ 0x140682868 (RtlpCallQueryRegistryRoutine.c)
 */

__int64 RtlpQueryRegistryValues(int a1, const WCHAR *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r15
  ULONG v6; // r14d
  __int64 result; // rax
  int v10; // r12d
  const WCHAR *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  NTSTATUS v16; // ebx
  ULONG Length; // r13d
  int v18; // eax
  const WCHAR *v19; // rdx
  int v20; // eax
  int v21; // eax
  char v22; // al
  ULONG v23; // ebx
  int v24; // r15d
  ULONG v25; // ebx
  __int64 v26; // rax
  int v27; // eax
  int ResultLength; // [rsp+30h] [rbp-61h]
  int ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG v30; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  __int64 v33; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  __int64 v38; // [rsp+108h] [rbp+77h] BYREF
  va_list va; // [rsp+108h] [rbp+77h]
  __int64 v40; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v4 = a4;
  v6 = 0;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v30 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0, &Handle);
  LODWORD(v38) = result;
  if ( (int)result < 0 )
    return result;
  v10 = a1 & 0x40000000;
  if ( v10 )
    v11 = 0LL;
  else
    v11 = a2;
  RtlInitUnicodeString(&DestinationString, v11);
  v33 = 136LL;
  v13 = RtlpAllocDeallocQueryBuffer(&v33, 0LL, v12, (__int64 *)va);
  v15 = v13;
  if ( v13 )
  {
    v16 = v38;
    Length = 134;
    *(_DWORD *)(v13 + 8) = 0;
    KeyHandle = Handle;
LABEL_6:
    if ( !*(_QWORD *)a3 && (*(_DWORD *)(a3 + 8) & 0x21) == 0 )
    {
LABEL_8:
      if ( Handle && !v10 )
        ZwClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          ZwClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL, v15, v14, 0LL);
      return (unsigned int)v16;
    }
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v18 & 1) != 0 || *(_QWORD *)a3) )
    {
LABEL_76:
      v16 = -1073741811;
      goto LABEL_8;
    }
    if ( (v18 & 3) != 0 && KeyHandle != Handle )
    {
      ZwClose(KeyHandle);
      KeyHandle = Handle;
      v18 = *(_DWORD *)(a3 + 8);
    }
    v19 = *(const WCHAR **)(a3 + 16);
    if ( (v18 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_76;
      RtlInitUnicodeString(&DestinationString, v19);
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
      if ( v16 < 0 )
        goto LABEL_8;
      if ( !*(_QWORD *)a3 )
        goto LABEL_31;
    }
    else
    {
      if ( v19 )
      {
        RtlInitUnicodeString(&ValueName, v19);
        while ( 1 )
        {
          v20 = v6++;
          if ( v20 > 4 )
          {
            DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
            goto LABEL_8;
          }
          v16 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v15, Length, &v30);
          if ( v16 == -2147483643 )
            v16 = -1073741789;
          LODWORD(v38) = v16;
          if ( v16 < 0 )
          {
            if ( v16 == -1073741772 )
            {
              v22 = v40;
              *(_DWORD *)(v15 + 4) = 0;
              *(_DWORD *)(v15 + 12) = 0;
              v30 = Length;
              v16 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, v4, ResultLength, v22);
              LODWORD(v38) = v16;
            }
            if ( v16 != -1073741789 )
              goto LABEL_36;
          }
          else
          {
            if ( *(_DWORD *)(v15 + 4) == 7 )
            {
              *(_WORD *)(v30 + v15) = 0;
              *(_DWORD *)(v15 + 12) += 2;
            }
            v30 = Length;
            v21 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, v4, ResultLength, v40);
            LODWORD(v38) = v21;
            v16 = v21;
            if ( v21 != -1073741789 )
            {
              v6 = 0;
              if ( v21 < 0 )
                goto LABEL_8;
              if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
                ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_31:
              if ( v16 >= 0 )
              {
                a3 += 56LL;
                goto LABEL_6;
              }
              goto LABEL_8;
            }
          }
          v23 = v30 + 10;
          v33 = v30 + 10LL;
          v15 = RtlpAllocDeallocQueryBuffer(&v33, v15, v14, (__int64 *)va);
          if ( !v15 )
          {
            v16 = v38;
            goto LABEL_8;
          }
          Length = v23 - 2;
          *(_DWORD *)(v15 + 8) = 0;
          v16 = v38;
        }
      }
      if ( (v18 & 8) != 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                0LL,
                0LL,
                0LL,
                0LL,
                v4,
                *(_QWORD *)(a3 + 24));
        goto LABEL_31;
      }
    }
    v24 = 0;
    while ( 1 )
    {
      v16 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, (PVOID)v15, Length, &v30);
      if ( v16 == -2147483643 )
        v16 = -1073741789;
      LODWORD(v38) = v16;
      if ( v16 == -2147483622 )
      {
        if ( v6 || (*(_DWORD *)(a3 + 8) & 4) == 0 )
        {
          v6 = 0;
          v16 = 0;
        }
        else
        {
          v16 = -1073741772;
          v6 = 0;
        }
        v4 = a4;
        goto LABEL_31;
      }
      if ( v16 >= 0 )
      {
        v30 = Length;
        v16 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, a4, ResultLengtha, v40);
        LODWORD(v38) = v16;
      }
      if ( v16 == -1073741789 )
      {
        v25 = v30 + 10;
        v33 = v30 + 10LL;
        v26 = RtlpAllocDeallocQueryBuffer(&v33, v15, v14, (__int64 *)va);
        v15 = v26;
        if ( !v26 )
          goto LABEL_75;
        *(_DWORD *)(v26 + 8) = 0;
        Length = v25 - 2;
        v27 = v24;
        --v6;
        ++v24;
        if ( v27 > 4 )
        {
          DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
LABEL_75:
          v16 = v38;
          v4 = a4;
LABEL_36:
          v6 = 0;
          goto LABEL_31;
        }
      }
      else
      {
        if ( v16 < 0 )
          goto LABEL_8;
        v24 = 0;
        if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
        {
          ValueName.Buffer = (wchar_t *)(v15 + 20);
          ValueName.Length = *(_WORD *)(v15 + 16);
          ValueName.MaximumLength = *(_WORD *)(v15 + 16);
          if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
            --v6;
        }
      }
      ++v6;
    }
  }
  if ( !v10 )
    ZwClose(Handle);
  return (unsigned int)v38;
}
