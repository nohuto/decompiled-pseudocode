/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C00BC964
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00BCD04 (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_SL @ 0x1C005F214 (WPP_RECORDER_SF_SL.c)
 *     OSOpenUnicodeHandle @ 0x1C008EC0C (OSOpenUnicodeHandle.c)
 *     OSCloseHandle @ 0x1C00954DC (OSCloseHandle.c)
 *     OSGetRegistryValue @ 0x1C009B014 (OSGetRegistryValue.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(PVOID *a1)
{
  int v2; // eax
  int v3; // ebx
  ULONG v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD *v8; // rcx
  wchar_t *v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  BOOLEAN v12; // bl
  HANDLE v13; // rcx
  NTSTATUS v14; // ebx
  int v16; // [rsp+20h] [rbp-29h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  void *v18; // [rsp+48h] [rbp-1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v22; // [rsp+80h] [rbp+37h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  v18 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v2 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v18);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x10u,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        v2);
    return (unsigned int)v3;
  }
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v4 = 0;
  DestinationString.Buffer = (wchar_t *)&v22;
  DestinationString.MaximumLength = 8;
  while ( 1 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v4, 0xAu, &DestinationString);
    v3 = OSOpenUnicodeHandle(&DestinationString, v18, &KeyHandle);
    if ( v3 < 0 )
      break;
    if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) < 0 )
    {
      v13 = KeyHandle;
    }
    else
    {
      v8 = *a1;
      v9 = (wchar_t *)((char *)*a1 + 8);
      String2.Buffer = v9;
      String2.MaximumLength = v8[2];
      v10 = *((_DWORD *)v8 + 1) >> 1;
      if ( v10 )
      {
        do
        {
          v11 = (unsigned int)(v10 - 1);
          if ( v9[v11] )
            break;
          --v10;
        }
        while ( (_DWORD)v11 );
      }
      String2.Length = 2 * v10;
      v12 = RtlEqualUnicodeString(&String1, &String2, 1u);
      ExFreePoolWithTag(*a1, 0);
      v13 = KeyHandle;
      if ( v12 )
      {
        v14 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
        OSCloseHandle(KeyHandle);
        if ( v14 >= 0 )
        {
          OSCloseHandle(v18);
          return 0LL;
        }
        goto LABEL_10;
      }
    }
    OSCloseHandle(v13);
LABEL_10:
    if ( ++v4 >= 0x3E7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x12u,
          (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids);
      return 3221225524LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SL((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7, v16, DestinationString.Buffer);
  OSCloseHandle(v18);
  return (unsigned int)v3;
}
