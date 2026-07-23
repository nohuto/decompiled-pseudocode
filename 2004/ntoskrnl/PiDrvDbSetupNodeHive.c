/*
 * XREFs of PiDrvDbSetupNodeHive @ 0x1408B4D64
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140713820 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodes @ 0x14078C98C (PiDrvDbSetupNodes.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmIsStateSeparationEnabled @ 0x140358350 (CmIsStateSeparationEnabled.c)
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406F19D0 (ExpAllocateStringRoutine.c)
 *     PiDrvDbUnloadHive @ 0x140713AB8 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140713B04 (PiDrvDbLoadHive.c)
 *     _PnpSetObjectProperty @ 0x1407260F4 (_PnpSetObjectProperty.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B35B8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B485C (PiDrvDbResolveNodeFilePaths.c)
 *     RtlSuffixUnicodeString @ 0x14090C860 (RtlSuffixUnicodeString.c)
 */

__int64 __fastcall PiDrvDbSetupNodeHive(__int64 a1, const WCHAR *a2)
{
  char v3; // r13
  NTSTATUS v5; // eax
  int appended; // ebx
  unsigned __int16 i; // cx
  __int64 Length; // rsi
  unsigned __int64 v9; // rbx
  wchar_t *Buffer; // r15
  int v11; // eax
  UNICODE_STRING Destination; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+108h] [rbp+77h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v3 = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  Destination = 0LL;
  String1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  if ( !wcsicmp(a2, L"SYSTEM") )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 32);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    appended = v5;
LABEL_9:
    if ( v5 < 0 )
      goto LABEL_38;
LABEL_34:
    appended = PiDrvDbResolveNodeFilePaths(a1, (__int64)KeyHandle);
    if ( appended >= 0 && (*(_DWORD *)(a1 + 64) & 8) != 0 )
      appended = PiDrvDbOverlayNodeHive(a1, a2, (__int64)KeyHandle);
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
  {
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + 38;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(DestinationString.Length + 38));
    if ( !Destination.Buffer )
    {
LABEL_5:
      appended = -1073741670;
      goto LABEL_38;
    }
    appended = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_38;
    appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    if ( appended < 0 )
      goto LABEL_38;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    appended = v5;
    if ( v5 != -1073741772 )
      goto LABEL_9;
LABEL_37:
    appended = 0;
    goto LABEL_38;
  }
  if ( !CmIsStateSeparationEnabled() )
    goto LABEL_37;
  UnicodeString.MaximumLength = DestinationString.Length + *(_WORD *)(a1 + 50);
  UnicodeString.Length = 0;
  UnicodeString.Buffer = (wchar_t *)ExpAllocateStringRoutine(UnicodeString.MaximumLength);
  if ( !UnicodeString.Buffer )
    goto LABEL_5;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, (PCUNICODE_STRING)(a1 + 48));
  if ( appended >= 0 )
  {
    for ( i = UnicodeString.Length; i > 2u; UnicodeString.Length = i )
    {
      if ( UnicodeString.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
        break;
      i -= 2;
    }
    appended = RtlAppendUnicodeStringToString(&UnicodeString, &DestinationString);
    if ( appended >= 0 )
    {
      Destination.MaximumLength = DestinationString.Length + *(_WORD *)(a1 + 34);
      Destination.Length = 0;
      Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
      if ( !Destination.Buffer )
        goto LABEL_5;
      appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(a1 + 32));
      if ( appended >= 0 )
      {
        RtlInitUnicodeString(&String1, L"DRIVERS");
        Length = String1.Length;
        v9 = Destination.Length;
        Buffer = Destination.Buffer;
        if ( Destination.Length > (unsigned __int64)String1.Length + 2
          && RtlSuffixUnicodeString(&String1, &Destination, 1u)
          && Buffer[(((unsigned __int64)(unsigned int)v9 - Length) >> 1) - 1] != 92
          || (RtlInitUnicodeString(&String1, L"SYSTEM"),
              Length = String1.Length,
              v9 > (unsigned __int64)String1.Length + 2)
          && RtlSuffixUnicodeString(&String1, &Destination, 1u)
          && Buffer[((v9 - Length) >> 1) - 1] != 92 )
        {
          Destination.Length = v9 - Length;
        }
        appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
        if ( appended >= 0 )
        {
          v11 = PiDrvDbLoadHive(&Destination, &UnicodeString, 0x2000, &KeyHandle);
          appended = v11;
          if ( v11 != -1073741772 )
          {
            if ( v11 < 0 )
              goto LABEL_38;
            if ( (*(_DWORD *)(a1 + 492) & 2) == 0 || wcsicmp(a2, L"SOFTWARE") )
              v3 = 1;
            else
              PnpSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 24),
                7u,
                *(_QWORD *)(a1 + 72),
                0LL,
                (__int64)DEVPKEY_DriverDatabase_SoftwareRegistryPath,
                18,
                (__int64)Destination.Buffer,
                Destination.Length + 2,
                0);
            goto LABEL_34;
          }
          goto LABEL_37;
        }
      }
    }
  }
LABEL_38:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
    PiDrvDbUnloadHive(&Destination, 0LL);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
