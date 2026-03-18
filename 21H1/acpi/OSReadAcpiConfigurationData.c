/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C00BC24C
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00BCAEC (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C000270C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_SL @ 0x1C005E3C4 (WPP_RECORDER_SF_SL.c)
 *     OSOpenUnicodeHandle @ 0x1C008F940 (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C0094BF4 (OSGetRegistryValue.c)
 *     OSCloseHandle @ 0x1C00969FC (OSCloseHandle.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(PVOID *a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  ULONG v4; // esi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  _WORD *v9; // rcx
  wchar_t *v10; // r8
  int v11; // edx
  __int64 v12; // rcx
  BOOLEAN v13; // bl
  HANDLE v14; // rcx
  NTSTATUS v15; // ebx
  int v17; // [rsp+20h] [rbp-29h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  void *v20; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v23; // [rsp+80h] [rbp+37h] BYREF

  v1 = 0;
  *a1 = 0LL;
  KeyHandle = 0LL;
  v20 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v3 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v20);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&String1, L"ACPI BIOS");
    v4 = 0;
    DestinationString.Buffer = (wchar_t *)&v23;
    DestinationString.MaximumLength = 8;
    while ( 1 )
    {
      DestinationString.Length = 0;
      RtlIntegerToUnicodeString(v4, 0xAu, &DestinationString);
      v6 = OSOpenUnicodeHandle(&DestinationString, v20, &KeyHandle);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_SL((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v7, v8, v17, DestinationString.Buffer);
        v1 = v6;
LABEL_13:
        OSCloseHandle(v20);
        return v1;
      }
      if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) < 0 )
      {
        v14 = KeyHandle;
      }
      else
      {
        v9 = *a1;
        v10 = (wchar_t *)((char *)*a1 + 8);
        String2.Buffer = v10;
        String2.MaximumLength = v9[2];
        v11 = *((_DWORD *)v9 + 1) >> 1;
        if ( v11 )
        {
          do
          {
            v12 = (unsigned int)(v11 - 1);
            if ( v10[v12] )
              break;
            --v11;
          }
          while ( (_DWORD)v12 );
        }
        String2.Length = 2 * v11;
        v13 = RtlEqualUnicodeString(&String1, &String2, 1u);
        ExFreePoolWithTag(*a1, 0);
        v14 = KeyHandle;
        if ( v13 )
        {
          v15 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
          OSCloseHandle(KeyHandle);
          if ( v15 >= 0 )
            goto LABEL_13;
          goto LABEL_10;
        }
      }
      OSCloseHandle(v14);
LABEL_10:
      if ( ++v4 >= 0x3E7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0x12u,
            (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids);
        return 3221225524LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x10u,
      (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
      v3);
  return (unsigned int)v3;
}
