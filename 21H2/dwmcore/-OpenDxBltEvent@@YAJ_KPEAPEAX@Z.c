/*
 * XREFs of ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x18021BD2C
 * Callers:
 *     ?PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800C3330 (-PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B20C4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // si
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  HANDLE v10; // rcx
  NTSTATUS v11; // ebx
  NTSTATUS v12; // ebx
  HANDLE v13; // rax
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  hObject = 0LL;
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(SourceString, 0x104uLL, (size_t *)L"%s%I64x", L"DwmDxBltEvent_", a1);
  v7 = v5;
  if ( v5 >= 0 )
  {
    do
    {
      v13 = OpenEventW(2u, 0, SourceString);
      if ( v13 )
      {
        *a2 = v13;
        goto LABEL_5;
      }
      v10 = hObject;
      if ( !hObject )
      {
        v5 = StringCchPrintfW(
               SourceString,
               0x104uLL,
               (size_t *)L"\\Sessions\\%u\\AppContainerNamedObjects",
               NtCurrentPeb()->SessionId);
        v7 = v5;
        if ( v5 < 0 )
        {
          RestartScan = 123;
          goto LABEL_3;
        }
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = NtOpenDirectoryObject(&hObject, 1u, &ObjectAttributes);
        if ( v11 < 0 )
        {
          v7 = v11 | 0x10000000;
          RestartScan = 132;
LABEL_19:
          v8 = v7;
          goto LABEL_4;
        }
        v10 = hObject;
      }
      v12 = NtQueryDirectoryObject(v10, Buffer, 0x228u, 1u, v4, &Context, 0LL);
      if ( v12 == -2147483622 )
        v12 = -1073741772;
      if ( v12 < 0 )
      {
        v7 = v12 | 0x10000000;
        RestartScan = 151;
        goto LABEL_19;
      }
      v4 = 0;
      v5 = StringCchPrintfW(
             SourceString,
             0x104uLL,
             (size_t *)L"AppContainerNamedObjects\\%wZ\\%s%I64x",
             Buffer,
             L"DwmDxBltEvent_",
             a1);
      v7 = v5;
    }
    while ( v5 >= 0 );
    RestartScan = 163;
  }
  else
  {
    RestartScan = 93;
  }
LABEL_3:
  v8 = v5;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180305D50, 3u, v8, RestartScan, 0LL);
LABEL_5:
  if ( hObject )
    CloseHandle(hObject);
  return v7;
}
