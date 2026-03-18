/*
 * XREFs of CmpSetVersionData @ 0x140834684
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     PsWow64IsMachineSupported @ 0x1406AD5D0 (PsWow64IsMachineSupported.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     CmpRestampVersion @ 0x140834B5C (CmpRestampVersion.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140834D0C (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void CmpSetVersionData()
{
  wchar_t **v0; // rdi
  ULONG v1; // edx
  void *v2; // rsi
  __int16 v3; // cx
  const WCHAR *v4; // rdx
  NTSTATUS Key; // ebx
  UNICODE_STRING *v6; // rax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // ebx
  __int64 v9; // rax
  PVOID *ServerSiloGlobals; // rax
  ULONG v11; // edx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING Data_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  STRING SourceString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v20[256]; // [rsp+148h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SourceString = 0LL;
  DestinationString = 0LL;
  LODWORD(v16) = 0;
  Data_8 = 0LL;
  Data = 0;
  v0 = &VersionDataKeys;
  v2 = (void *)CmpHiveRootSecurityDescriptor();
  if ( VersionDataKeys )
  {
    do
    {
      v3 = *((_WORD *)v0 + 8);
      if ( v3 == -31132 || (unsigned int)PsWow64IsMachineSupported(v3) )
      {
        RtlInitUnicodeString(&DestinationString, *v0);
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        ObjectAttributes.ObjectName = 0LL;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
        ObjectAttributes.SecurityQualityOfService = v2;
        v16 = 0LL;
        if ( ZwCreateKey(
               &KeyHandle,
               4u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL) < 0 )
          goto LABEL_24;
        v4 = v0[1];
        if ( v4 )
        {
          RtlInitUnicodeString(&DestinationString, v4);
          ObjectAttributes.ObjectName = (PUNICODE_STRING)KeyHandle;
          LODWORD(ObjectAttributes.RootDirectory) = 48;
          LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
          *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
          ObjectAttributes.SecurityQualityOfService = v2;
          v16 = 0LL;
          Key = ZwCreateKey(
                  (PHANDLE)&ObjectAttributes,
                  2u,
                  (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
                  0,
                  (PUNICODE_STRING)&nullclass,
                  0,
                  0LL);
          ZwClose(KeyHandle);
          if ( Key < 0 )
            goto LABEL_24;
          v6 = *(UNICODE_STRING **)&ObjectAttributes.Length;
          KeyHandle = *(HANDLE *)&ObjectAttributes.Length;
        }
        else
        {
          v6 = (UNICODE_STRING *)KeyHandle;
        }
        ObjectAttributes.ObjectName = v6;
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        *(_QWORD *)&ObjectAttributes.Attributes = &CmpWindowsNtString;
        ObjectAttributes.SecurityQualityOfService = v2;
        v16 = 0LL;
        v7 = ZwCreateKey(
               (PHANDLE)&ObjectAttributes,
               2u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL);
        ZwClose(KeyHandle);
        if ( v7 < 0 )
          goto LABEL_24;
        ObjectAttributes.ObjectName = *(PUNICODE_STRING *)&ObjectAttributes.Length;
        *(_QWORD *)&ObjectAttributes.Attributes = &CmpCurrentVersionString;
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        ObjectAttributes.SecurityQualityOfService = v2;
        v16 = 0LL;
        v8 = ZwCreateKey(
               &KeyHandle,
               3u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL);
        ZwClose(*(HANDLE *)&ObjectAttributes.Length);
        if ( v8 < 0 )
          goto LABEL_24;
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpCurrentVersionString,
          0,
          1u,
          CmVersionString.Buffer,
          CmVersionString.Length + 2);
        Data = 10;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMajorVersionString, 0, 4u, &Data, 4u);
        Data = 0;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMinorVersionString, 0, 4u, &Data, 4u);
        Data = 0;
        if ( CmpEditionVersion && *(_DWORD *)(CmpEditionVersion + 8) )
          CmpRestampVersion(KeyHandle);
        sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&Data_8.Length = 0x1000000;
        Data_8.Buffer = (wchar_t *)v20;
        if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) >= 0 )
        {
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentTypeString, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
          if ( CmCSDVersionString.Length )
          {
            ZwSetValueKey(
              KeyHandle,
              (PUNICODE_STRING)&CmpCsdVersionString,
              0,
              1u,
              CmCSDVersionString.Buffer,
              CmCSDVersionString.Length + 2);
            if ( CmCSDVersionString.Buffer )
              ExFreePoolWithTag(CmCSDVersionString.Buffer, v11);
            RtlInitUnicodeString(&CmCSDVersionString, 0LL);
          }
          else
          {
            ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdVersionString);
          }
        }
        if ( CmNtSpBuildNumber )
        {
          sprintf_s(DstBuf, 0x80uLL, "%u", CmNtSpBuildNumber);
          RtlInitAnsiString(&SourceString, DstBuf);
          *(_DWORD *)&Data_8.Length = 0x1000000;
          Data_8.Buffer = (wchar_t *)v20;
          if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) < 0 )
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString);
        }
        v9 = HalSystemVectorDispatchEntry();
        ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals(v9);
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpSystemRootString,
          0,
          1u,
          ServerSiloGlobals[159],
          *((unsigned __int16 *)ServerSiloGlobals + 632) + 2);
        ZwClose(KeyHandle);
      }
      v0 += 3;
    }
    while ( *v0 );
  }
  if ( CmCSDVersionString.Buffer )
    ExFreePoolWithTag(CmCSDVersionString.Buffer, v1);
  RtlInitUnicodeString(&CmCSDVersionString, 0LL);
LABEL_24:
  ExFreePoolWithTag(v2, 0);
}
