/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C01FA730
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C01F992C (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0013120 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C01FAAC8 (MonitorUnifyCCDMonitorString.c)
 *     DpiGetDevicePropertyString @ 0x1C01FAF64 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *PoolWithTag; // r12
  WCHAR *v3; // r13
  NTSTATUS v4; // eax
  SIZE_T v5; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  UNICODE_STRING *p_SourceString; // rcx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  struct _DEVICE_OBJECT *v20; // rcx
  int DevicePropertyString; // eax
  void *v22; // r15
  __int64 v23; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  ULONG Lengtha[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING GuidString; // [rsp+70h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  ULONG v32; // [rsp+100h] [rbp+67h] BYREF
  ULONG v33; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+110h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  v32 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  DestinationString = 0LL;
  PoolWithTag = 0LL;
  v33 = 0;
  v3 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  LODWORD(v5) = v4;
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VideoID");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v32) == -1073741789 )
    {
      WdLogSingleEntry1(4LL, -1073741789LL);
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v32, 0x74727044u);
      if ( !PoolWithTag )
        goto LABEL_26;
      v6 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v32, &v32);
      v5 = v6;
      if ( v6 < 0 )
        goto LABEL_34;
      if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4752), PoolWithTag + 6) )
      {
LABEL_26:
        v14 = -1073741801LL;
        LODWORD(v5) = -1073741801;
        v15 = 6LL;
        goto LABEL_29;
      }
      v7 = RtlGUIDFromString((PCUNICODE_STRING)(v1 + 4752), (GUID *)(v1 + 4784));
    }
    else
    {
      WdLogSingleEntry1(4LL, 0LL);
      v16 = ExUuidCreate((UUID *)(v1 + 4784));
      v5 = v16;
      if ( v16 < 0 )
        goto LABEL_34;
      v17 = RtlStringFromGUID((const GUID *const)(v1 + 4784), (PUNICODE_STRING)(v1 + 4752));
      v5 = v17;
      if ( v17 < 0 )
        goto LABEL_34;
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4752), (PCUNICODE_STRING)(v1 + 4752), 0);
      v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, *(PVOID *)(v1 + 4760), *(unsigned __int16 *)(v1 + 4754));
    }
    v5 = v7;
    if ( v7 < 0 )
      goto LABEL_34;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"AOCID");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &v33) != -1073741789 )
    {
      WdLogSingleEntry1(4LL, 0LL);
      v18 = ExUuidCreate((UUID *)(v1 + 4800));
      v5 = v18;
      if ( v18 < 0 )
        goto LABEL_34;
      SourceString = 0LL;
      v19 = RtlStringFromGUID((const GUID *const)(v1 + 4800), &SourceString);
      v5 = v19;
      if ( v19 < 0 )
        goto LABEL_34;
      RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
      v9 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, SourceString.Buffer, SourceString.MaximumLength);
      p_SourceString = &SourceString;
      goto LABEL_13;
    }
    WdLogSingleEntry1(4LL, -1073741789LL);
    v3 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v33, 0x74727044u);
    if ( v3 )
    {
      v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v3, v33, &v33);
      v5 = v8;
      if ( v8 < 0 )
        goto LABEL_34;
      GuidString = 0LL;
      if ( RtlCreateUnicodeString(&GuidString, v3 + 6) )
      {
        v9 = RtlGUIDFromString(&GuidString, (GUID *)(v1 + 4800));
        p_SourceString = &GuidString;
LABEL_13:
        v5 = v9;
        RtlFreeUnicodeString(p_SourceString);
        if ( (v5 & 0x80000000) == 0LL )
        {
          if ( !*(_BYTE *)(v1 + 1160) )
          {
            v11 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x4AuLL, 0x74727044u);
            v12 = v11;
            if ( v11 )
            {
              LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
              Length[0] = *(_DWORD *)(v1 + 1128);
              LODWORD(v5) = RtlStringCbPrintfW(
                              v11,
                              0x4AuLL,
                              L"%04X_%04X_%08X_%08X",
                              *(unsigned int *)(v1 + 1124),
                              *(_QWORD *)Length,
                              ResultLength,
                              *(_DWORD *)(v1 + 1148));
              goto LABEL_17;
            }
LABEL_27:
            v14 = -1073741801LL;
            LODWORD(v5) = -1073741801;
LABEL_28:
            v15 = 2LL;
            goto LABEL_29;
          }
          v20 = *(struct _DEVICE_OBJECT **)(v1 + 152);
          *(_QWORD *)&SourceString.Length = 0LL;
          DevicePropertyString = DpiGetDevicePropertyString(v20, DevicePropertyHardwareID, PagedPool, (__int64)&v34);
          v5 = DevicePropertyString;
          if ( DevicePropertyString >= 0 )
          {
            v22 = *(void **)&SourceString.Length;
            v23 = -1LL;
            do
              ++v23;
            while ( *(_WORD *)(*(_QWORD *)&SourceString.Length + 2 * v23) );
            v5 = (unsigned int)(2 * v23 + 40);
            v12 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v5, 0x74727044u);
            if ( v12 )
            {
              LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
              Lengtha[0] = *(_DWORD *)(v1 + 1128);
              LODWORD(v5) = RtlStringCbPrintfW(
                              v12,
                              (unsigned int)v5,
                              L"%04X_%04X_%08X_%ls",
                              *(unsigned int *)(v1 + 1124),
                              *(_QWORD *)Lengtha,
                              ResultLength,
                              v22);
              if ( v22 )
                ExFreePoolWithTag(v22, 0);
LABEL_17:
              RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4768), v12);
              MonitorUnifyCCDMonitorString(v1 + 4768);
              if ( (v5 & 0x80000000) == 0LL )
                goto LABEL_18;
              goto LABEL_30;
            }
            goto LABEL_27;
          }
        }
LABEL_34:
        v14 = v5;
        goto LABEL_28;
      }
    }
    goto LABEL_26;
  }
  v14 = v4;
  v15 = 2LL;
LABEL_29:
  WdLogSingleEntry1(v15, v14);
LABEL_30:
  if ( *(_QWORD *)(v1 + 4776) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4768));
    *(_QWORD *)(v1 + 4776) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4760) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4752));
    *(_QWORD *)(v1 + 4760) = 0LL;
  }
LABEL_18:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
