/*
 * XREFs of CmpSetVersionData @ 0x1407A802C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D7D60 (sprintf_s.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsWow64IsMachineSupported @ 0x1406436B0 (PsWow64IsMachineSupported.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     CmpQueryEditionVersion @ 0x1407A8530 (CmpQueryEditionVersion.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A861C (CmpHiveRootSecurityDescriptor.c)
 *     CmpRestampVersion @ 0x140867A50 (CmpRestampVersion.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void CmpSetVersionData()
{
  ULONG v0; // edx
  void *v1; // rsi
  __int16 *i; // rdi
  const WCHAR *v3; // rdx
  NTSTATUS Key; // ebx
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  PVOID *ServerSiloGlobals; // rax
  ULONG v10; // edx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING Data_8; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE ObjectAttributes[7]; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  STRING SourceString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v18[256]; // [rsp+148h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  memset(ObjectAttributes, 0, sizeof(ObjectAttributes));
  SourceString = 0LL;
  Data = 0;
  DestinationString = 0LL;
  Data_8 = 0LL;
  memset(&CmpEditionVersion, 0, 0x238uLL);
  v1 = (void *)CmpHiveRootSecurityDescriptor();
  if ( VersionDataKeys )
  {
    for ( i = (__int16 *)&unk_140C04440; *((_QWORD *)i - 2); i += 12 )
    {
      if ( *i == -31132 || (unsigned int)PsWow64IsMachineSupported(*i) )
      {
        RtlInitUnicodeString(&DestinationString, *((PCWSTR *)i - 2));
        LODWORD(ObjectAttributes[1]) = 48;
        ObjectAttributes[2] = 0LL;
        LODWORD(ObjectAttributes[4]) = 576;
        ObjectAttributes[3] = &DestinationString;
        ObjectAttributes[5] = v1;
        ObjectAttributes[6] = 0LL;
        if ( ZwCreateKey(
               &KeyHandle,
               4u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL) < 0 )
          goto LABEL_27;
        v3 = (const WCHAR *)*((_QWORD *)i - 1);
        if ( v3 )
        {
          RtlInitUnicodeString(&DestinationString, v3);
          ObjectAttributes[2] = KeyHandle;
          LODWORD(ObjectAttributes[1]) = 48;
          LODWORD(ObjectAttributes[4]) = 576;
          ObjectAttributes[3] = &DestinationString;
          ObjectAttributes[5] = v1;
          ObjectAttributes[6] = 0LL;
          Key = ZwCreateKey(
                  ObjectAttributes,
                  2u,
                  (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
                  0,
                  (PUNICODE_STRING)&nullclass,
                  0,
                  0LL);
          ZwClose(KeyHandle);
          if ( Key < 0 )
            goto LABEL_27;
          v5 = ObjectAttributes[0];
          KeyHandle = ObjectAttributes[0];
        }
        else
        {
          v5 = KeyHandle;
        }
        ObjectAttributes[2] = v5;
        LODWORD(ObjectAttributes[1]) = 48;
        LODWORD(ObjectAttributes[4]) = 576;
        ObjectAttributes[3] = &CmpWindowsNtString;
        ObjectAttributes[5] = v1;
        ObjectAttributes[6] = 0LL;
        v6 = ZwCreateKey(
               ObjectAttributes,
               2u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL);
        ZwClose(KeyHandle);
        if ( v6 < 0 )
          goto LABEL_27;
        ObjectAttributes[2] = ObjectAttributes[0];
        ObjectAttributes[3] = (HANDLE)&CmpCurrentVersionString;
        LODWORD(ObjectAttributes[1]) = 48;
        LODWORD(ObjectAttributes[4]) = 576;
        ObjectAttributes[5] = v1;
        ObjectAttributes[6] = 0LL;
        v7 = ZwCreateKey(
               &KeyHandle,
               3u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL);
        ZwClose(ObjectAttributes[0]);
        if ( v7 < 0 )
          goto LABEL_27;
        if ( *i == -31132 && (int)CmpQueryEditionVersion(&CmpEditionVersion) >= 0 )
        {
          NtBuildNumber = CmpEditionVersion | 0xF0000000;
          MEMORY[0xFFFFF78000000260] = CmpEditionVersion;
          NtBuildQfe = dword_140C48524;
        }
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
        if ( CmpEditionVersion )
          CmpRestampVersion(KeyHandle);
        sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&Data_8.Length = 0x1000000;
        Data_8.Buffer = (wchar_t *)v18;
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
              ExFreePoolWithTag(CmCSDVersionString.Buffer, v10);
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
          Data_8.Buffer = (wchar_t *)v18;
          if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) < 0 )
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString);
        }
        v8 = HalSystemVectorDispatchEntry();
        ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals(v8);
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpSystemRootString,
          0,
          1u,
          ServerSiloGlobals[135],
          *((unsigned __int16 *)ServerSiloGlobals + 536) + 2);
        ZwClose(KeyHandle);
      }
    }
  }
  if ( CmCSDVersionString.Buffer )
    ExFreePoolWithTag(CmCSDVersionString.Buffer, v0);
  RtlInitUnicodeString(&CmCSDVersionString, 0LL);
LABEL_27:
  ExFreePoolWithTag(v1, 0);
}
