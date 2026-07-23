/*
 * XREFs of IoGetDeviceDirectory @ 0x14089B710
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     PnpGetObjectProperty @ 0x1405DB38C (PnpGetObjectProperty.c)
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     _PnpSetObjectProperty @ 0x1407260F4 (_PnpSetObjectProperty.c)
 *     PnpConcatenateUnicodeStrings @ 0x140734474 (PnpConcatenateUnicodeStrings.c)
 *     PiGetStateRootPath @ 0x14076EAEC (PiGetStateRootPath.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14089BBC0 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoGetDeviceDirectory(__int64 a1, int a2, int a3, __int64 a4, __int64 *a5)
{
  void *v7; // rdi
  WCHAR *v8; // r12
  __int64 v11; // rsi
  NTSTATUS StateRootPath; // ebx
  int ObjectProperty; // eax
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int16 Length; // r8
  int v21; // edx
  __int64 v22; // rax
  wchar_t *Buffer; // rdi
  int v24; // eax
  __int64 v26; // [rsp+68h] [rbp-41h] BYREF
  __int64 v27; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp-11h] BYREF
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-9h] BYREF
  UNICODE_STRING v32; // [rsp+B0h] [rbp+7h] BYREF
  UUID Uuid; // [rsp+C0h] [rbp+17h] BYREF

  v7 = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  GuidString = 0LL;
  Uuid = 0LL;
  UnicodeString = 0LL;
  v32 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&GuidString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v32, 0LL);
  if ( !a1
    || a3
    || a4
    || !a5
    || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0
    || !*(_WORD *)(v11 + 40)
    || !*(_QWORD *)(v11 + 48)
    || a2 )
  {
    StateRootPath = -1073741811;
    goto LABEL_46;
  }
  StateRootPath = PiGetStateRootPath(
                    L"DriverState",
                    L"\\SystemRoot\\System32\\DriverState",
                    LocationTypeFileSystem,
                    &DestinationString);
  if ( StateRootPath < 0 )
    goto LABEL_46;
  ObjectProperty = PnpGetObjectProperty(
                     0x6F697050u,
                     0x4EuLL,
                     *(_QWORD *)(v11 + 48),
                     1,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_StateDirectoryId,
                     (__int64)&v26 + 4,
                     (PVOID *)&SourceString,
                     &v26,
                     0);
  v8 = (WCHAR *)SourceString;
  v14 = -1LL;
  StateRootPath = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( HIDWORD(v26) == 18 && (unsigned int)v26 >= 2 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( SourceString[v15] );
      v16 = 0;
      if ( v15 )
      {
        v17 = 0LL;
        do
        {
          v18 = SourceString[v17];
          if ( (unsigned int)v18 > 0x7F || (*((_BYTE *)qword_1400117C0 + v18) & 1) == 0 )
            goto LABEL_26;
          v17 = ++v16;
        }
        while ( v16 < v15 );
      }
    }
    else
    {
      StateRootPath = -1073741275;
    }
    if ( StateRootPath >= 0 )
    {
      StateRootPath = RtlInitUnicodeStringEx(&v32, SourceString);
      if ( StateRootPath < 0 )
        goto LABEL_46;
      v19 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
LABEL_42:
      StateRootPath = v19;
      if ( v19 >= 0 )
      {
        v7 = 0LL;
        *a5 = v27;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
  }
  if ( StateRootPath != -1073741275 )
    goto LABEL_46;
LABEL_26:
  StateRootPath = PnpConcatenateUnicodeStrings(&UnicodeString, (PCUNICODE_STRING)(v11 + 40));
  if ( StateRootPath >= 0 )
  {
    Length = UnicodeString.Length;
    v21 = 0;
    if ( (UnicodeString.Length & 0xFFFE) != 0 )
    {
      while ( 1 )
      {
        v22 = UnicodeString.Buffer[v21];
        if ( (unsigned int)v22 > 0x7F )
          break;
        if ( (*((_BYTE *)qword_1400117C0 + v22) & 1) == 0 )
        {
          UnicodeString.Buffer[v21] = (*((_BYTE *)qword_1400117C0 + v22) & 1) + 35;
          Length = UnicodeString.Length;
        }
        if ( ++v21 >= (unsigned int)(Length >> 1) )
          goto LABEL_34;
      }
      StateRootPath = -1073741811;
    }
LABEL_34:
    if ( StateRootPath >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      v24 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
      StateRootPath = v24;
      if ( v24 == -1073741766 )
      {
        StateRootPath = ExUuidCreate(&Uuid);
        if ( StateRootPath < 0 )
          goto LABEL_44;
        StateRootPath = RtlStringFromGUIDEx(&Uuid, &GuidString, 1u);
        if ( StateRootPath < 0 )
          goto LABEL_44;
        Buffer = GuidString.Buffer;
        v24 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
        StateRootPath = v24;
      }
      if ( v24 >= 0 )
      {
        do
          ++v14;
        while ( Buffer[v14] );
        v19 = PnpSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(v11 + 48),
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_StateDirectoryId,
                18,
                (__int64)Buffer,
                2 * (int)v14 + 2,
                0);
        goto LABEL_42;
      }
LABEL_44:
      v7 = (void *)v27;
    }
  }
LABEL_46:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x6F697050u);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)StateRootPath;
}
