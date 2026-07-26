/*
 * XREFs of ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0067F8C
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006700C (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E0E0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0025D20 (WPP_RECORDER_SF_dd_ea_1C0025D20.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0031CD0 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisGetOrCreateFilterInstanceKey(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3,
        char a4,
        unsigned __int8 *a5,
        struct _UNICODE_STRING *Destination)
{
  unsigned __int16 *v6; // r15
  const struct _UNICODE_STRING *v7; // rbx
  int v9; // edx
  unsigned int v11; // edi
  char v12; // si
  __int16 v13; // ax
  __int64 v14; // rbx
  wchar_t *PoolWithTag; // rax
  NTSTATUS v16; // ebx
  ULONG i; // esi
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  NTSTATUS RegistryValues; // ebx
  wchar_t *v22; // rax
  unsigned __int16 v23; // ax
  wchar_t *v24; // rax
  NTSTATUS RegistryKey; // eax
  wchar_t *Buffer; // rcx
  char v28[8]; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+50h] [rbp-B0h]
  char v30; // [rsp+51h] [rbp-AFh]
  int v33; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v35; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v38; // [rsp+9Ch] [rbp-64h]
  HANDLE KeyHandle; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING GuidString; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+C8h] [rbp-38h] BYREF
  char v43[8]; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING SourceString; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+F0h] [rbp-10h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+130h] [rbp+30h] BYREF

  v6 = 0LL;
  v7 = a1;
  *(_QWORD *)v43 = a2;
  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  v9 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  Source.Buffer = (wchar_t *)L"\\";
  v11 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = 0;
  *(_QWORD *)&SourceString.Length = 6946920LL;
  *(_QWORD *)&Source.Length = 262146LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v29 = 0;
  v30 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&v35.Length = 0LL;
  v35.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v38 = 0;
  v33 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x57u,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      (char)a1,
      (char)a3,
      a2);
    v9 = 0;
  }
  if ( !a3->BaseMiniport )
  {
    v11 = -1073741811;
    goto LABEL_54;
  }
  *a5 = 0;
  *Destination = 0LL;
  if ( RtlStringFromGUID(&a3->BaseMiniport->InterfaceGuid, &GuidString) )
    goto LABEL_53;
  v13 = v7->Length + 2;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = GuidString.Length
                                  + SourceString.Length
                                  + ndisParameterStr.Length
                                  + ndisFilterAdapterStr.Length
                                  + v13;
  v29 = 1;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          DestinationString.MaximumLength,
                                          0x2020444Eu);
  if ( !DestinationString.Buffer )
  {
    v11 = -1073741670;
    goto LABEL_54;
  }
  memset(DestinationString.Buffer, 0, DestinationString.MaximumLength);
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  RtlAppendUnicodeStringToString(&DestinationString, v7);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes) )
  {
    v11 = -1073741823;
    KeyHandle = 0LL;
LABEL_57:
    RtlFreeUnicodeString(&GuidString);
    goto LABEL_58;
  }
  v14 = *(_QWORD *)(*(_QWORD *)v43 + 112LL);
  if ( !v14 )
    goto LABEL_17;
  do
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 40LL) & 2) == 0 )
      break;
    v14 = *(_QWORD *)(v14 + 112);
  }
  while ( v14 );
  if ( !v14 )
  {
LABEL_17:
    if ( !RtlStringFromGUID(&a3->InterfaceGuid, &UnicodeString) )
    {
      String1.Length = UnicodeString.Length;
      String1.MaximumLength = UnicodeString.MaximumLength;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, UnicodeString.MaximumLength, 0x2020444Eu);
      String1.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        v12 = 1;
        memset(PoolWithTag, 0, String1.MaximumLength);
        v16 = RtlUpcaseUnicodeString(&String1, &UnicodeString, 0);
        RtlFreeUnicodeString(&UnicodeString);
        if ( !v16 )
          goto LABEL_22;
      }
      else
      {
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
LABEL_18:
    LOBYTE(v7) = (_BYTE)a1;
LABEL_53:
    v11 = -1073741823;
    goto LABEL_54;
  }
  String1.Length = *(_WORD *)(*(_QWORD *)(v14 + 16) + 128LL);
  String1.MaximumLength = String1.Length + 2;
  String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(String1.Length + 2), 0x2020444Eu);
  if ( !String1.Buffer )
  {
LABEL_15:
    LOBYTE(v7) = (_BYTE)a1;
    v11 = -1073741670;
    goto LABEL_54;
  }
  memset(String1.Buffer, 0, String1.MaximumLength);
  memmove(String1.Buffer, *(const void **)(*(_QWORD *)(v14 + 16) + 136LL), String1.Length);
LABEL_22:
  v6 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x2020444Eu);
  if ( !v6 )
  {
LABEL_23:
    v12 = 1;
    goto LABEL_15;
  }
  for ( i = 0; i <= 0x270F; ++i )
  {
    memset(v6, 0, 0x218uLL);
    ResultLength = 0;
    v18 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v6, 0x216u, &ResultLength);
    if ( v18 == -2147483622 )
      break;
    if ( v18 )
      goto LABEL_47;
    v35.Length = v6[6];
    v35.Buffer = v6 + 8;
    v35.MaximumLength = v35.Length + 2;
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].Flags = 1;
    QueryTable[0].Name = v6 + 8;
    v19 = *(_QWORD *)(*(_QWORD *)v43 + 16LL);
    if ( *(_BYTE *)(v19 + 100) > 6u || *(_BYTE *)(v19 + 100) == 6 && *(_BYTE *)(v19 + 101) >= 0x28u )
    {
      v20 = 256;
      v38 = 0x1000000;
      v33 = 256;
    }
    else
    {
      v20 = v33;
    }
    QueryTable[1].Flags = v20 | 0x24;
    QueryTable[1].QueryRoutine = 0LL;
    QueryTable[1].Name = (wchar_t *)L"LowerComponent";
    QueryTable[1].EntryContext = &String2;
    QueryTable[2].Name = 0LL;
    QueryTable[1].DefaultType = v38;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v28 = v33;
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        1u,
        0x58u,
        (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
        RegistryValues,
        *(_QWORD *)v28);
    }
    if ( RegistryValues )
      goto LABEL_47;
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      *a5 = 1;
      break;
    }
    if ( String2.Buffer )
    {
      ExFreePoolWithTag(String2.Buffer, 0);
      String2.Buffer = 0LL;
    }
  }
  if ( !*a5 )
  {
    if ( !a4 )
      goto LABEL_47;
    if ( i > 0x270F )
      goto LABEL_23;
    *(_DWORD *)&v35.Length = 655368;
    v22 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xAuLL, 0x2020444Eu);
    v35.Buffer = v22;
    if ( !v22 )
      goto LABEL_23;
    v30 = 1;
    memset(v22, 0, v35.MaximumLength);
    if ( (unsigned int)RtlStringCchPrintfW(v35.Buffer, (unsigned __int64)v35.MaximumLength >> 1, (wchar_t *)L"%04d", i) )
    {
LABEL_47:
      v12 = 1;
      goto LABEL_18;
    }
  }
  LOBYTE(v7) = (_BYTE)a1;
  v23 = GuidString.Length
      + Source.Length
      + ndisParameterStr.Length
      + ndisFilterAdapterStr.Length
      + v35.Length
      + a1->Length
      + 2;
  Destination->MaximumLength = v23;
  v24 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x2020444Eu);
  Destination->Buffer = v24;
  if ( !v24 )
  {
    v11 = -1073741670;
    v12 = 1;
    goto LABEL_54;
  }
  memset(v24, 0, Destination->MaximumLength);
  RtlCopyUnicodeString(Destination, a1);
  RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
  RtlAppendUnicodeStringToString(Destination, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(Destination, &GuidString);
  RtlAppendUnicodeStringToString(Destination, &Source);
  RtlAppendUnicodeStringToString(Destination, &v35);
  v12 = 1;
  if ( !*a5 )
  {
    v12 = 1;
    RegistryKey = RtlCreateRegistryKey(1u, (PWSTR)Destination->Buffer);
    Buffer = Destination->Buffer;
    if ( !RegistryKey )
    {
      if ( !RtlWriteRegistryValue(
              1u,
              (PCWSTR)Destination->Buffer,
              L"LowerComponent",
              1u,
              String1.Buffer,
              String1.Length + 2) )
        goto LABEL_54;
      Buffer = Destination->Buffer;
    }
    ExFreePoolWithTag(Buffer, 0);
    *Destination = 0LL;
    goto LABEL_53;
  }
LABEL_54:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v29 )
    goto LABEL_57;
LABEL_58:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v12 )
    ExFreePoolWithTag(String1.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v30 )
    ExFreePoolWithTag(v35.Buffer, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1u,
      0x59u,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      (char)v7,
      (char)a3,
      v43[0],
      v11);
  return v11;
}
