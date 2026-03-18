/*
 * XREFs of OSReadRegValue @ 0x1C00968B0
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0065C08 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008E978 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitShutdownNotification @ 0x1C008ED60 (ACPIInitShutdownNotification.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIThermalGetParameter @ 0x1C00966CC (ACPIThermalGetParameter.c)
 *     ACPIInitGlobalHeapSize @ 0x1C00967F4 (ACPIInitGlobalHeapSize.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B1D9C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2020 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     AcpiDiagInitialize @ 0x1C00BB8FC (AcpiDiagInitialize.c)
 *     ACPIInitializeAMLI @ 0x1C00BCD04 (ACPIInitializeAMLI.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD39C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0022ECC (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     OSOpenHandle @ 0x1C008EB74 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  int v8; // ebx
  NTSTATUS v9; // eax
  unsigned int v10; // r13d
  WCHAR *Pool2; // rdi
  ULONG Length; // ebx
  NTSTATUS v14; // eax
  const WCHAR *v15; // r15
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // esi
  NTSTATUS v19; // eax
  unsigned int v20; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-48h]
  NTSTATUS v22; // [rsp+40h] [rbp-30h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  ULONG v26; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v26 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  if ( a2 )
  {
    KeyHandle = a2;
  }
  else
  {
    v8 = OSOpenHandle(
           "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
           0LL,
           (__int64)&KeyHandle);
    if ( v8 < 0 || !KeyHandle )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xBu,
          0x13u,
          (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
          v8);
      return (unsigned int)v8;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v8 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x14u,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        v8);
    if ( !a2 )
      ZwClose(KeyHandle);
    return (unsigned int)v8;
  }
  v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &v26);
  v8 = v9;
  v10 = -2147483643;
  if ( v9 != -1073741789 && v9 != -2147483643 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = v9;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x15u,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        ResultLength);
    }
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    if ( v8 >= 0 )
      return (unsigned int)-1073741823;
    return (unsigned int)v8;
  }
  while ( 1 )
  {
    if ( v8 != -2147483643 )
    {
      Pool2 = 0LL;
      if ( v8 != -1073741789 )
        goto LABEL_21;
    }
    Length = v26;
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, v26, 1299211073LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(ResultLength) = v26;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x16u,
          (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
          ResultLength);
      }
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(KeyHandle);
      return 3221225626LL;
    }
    v14 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, Pool2, Length, &v26);
    v8 = v14;
    if ( v14 != -2147483643 && v14 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = v14;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x17u,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        ResultLength);
    }
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v8;
  }
LABEL_21:
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(KeyHandle);
  if ( *(_DWORD *)Pool2 == 1 || *(_DWORD *)Pool2 == 7 )
  {
    v15 = Pool2 + 4;
    LODWORD(v16) = (v26 - 8) >> 1;
    v17 = 0;
    if ( (_DWORD)v16 )
    {
      while ( 1 )
      {
        v18 = v16;
        v16 = (unsigned int)(v16 - 1);
        if ( !v15[v16] )
          break;
        if ( !(_DWORD)v16 )
          goto LABEL_58;
      }
      while ( *v15 )
      {
        RtlInitUnicodeString(&ValueName, v15);
        v19 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v22 = v19;
        if ( v19 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(ResultLength) = v19;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x16u,
              0x18u,
              (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
              ResultLength);
            v19 = v22;
          }
          v10 = v19;
          goto LABEL_65;
        }
        v17 += DestinationString.MaximumLength;
        if ( *a4 >= v17 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        v18 -= ValueName.Length >> 1;
        v15 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)Pool2 == 7 )
        {
          if ( !v18 )
            break;
          ++v15;
          --v18;
        }
        if ( !v18 )
          break;
      }
      if ( !v17 )
        goto LABEL_58;
    }
    else
    {
LABEL_58:
      v17 = 1;
      if ( *a4 )
        *a3++ = 0;
    }
    if ( *(_DWORD *)Pool2 == 7 && *a4 >= ++v17 )
      *a3 = 0;
    ExFreePoolWithTag(Pool2, 0);
    if ( *a4 >= v17 )
    {
      *a4 = v17;
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = *a4;
      WPP_RECORDER_SF_LL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x19u,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        ResultLength,
        v17);
    }
    *a4 = v17;
  }
  else
  {
    v20 = *((_DWORD *)Pool2 + 1);
    if ( *a4 >= v20 )
    {
      memmove(a3, Pool2 + 4, v20);
      *a4 = *((_DWORD *)Pool2 + 1);
      ExFreePoolWithTag(Pool2, 0);
      return 0LL;
    }
    *a4 = v20;
LABEL_65:
    ExFreePoolWithTag(Pool2, 0);
  }
  return v10;
}
