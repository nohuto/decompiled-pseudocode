/*
 * XREFs of PiDrvDbSetupNodeHive @ 0x140826270
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1407F3CF0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodes @ 0x1408260F8 (PiDrvDbSetupNodes.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402201F8 (CmIsStateSeparationEnabled.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     PiDrvDbLoadHive @ 0x1407F3F88 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x1407F405C (PiDrvDbUnloadHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408264C0 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbOverlayNodeHive @ 0x14095C804 (PiDrvDbOverlayNodeHive.c)
 *     RtlSuffixUnicodeString @ 0x1409B57F0 (RtlSuffixUnicodeString.c)
 */

__int64 __fastcall PiDrvDbSetupNodeHive(__int64 a1, const WCHAR *a2)
{
  char v3; // r15
  NTSTATUS v5; // eax
  NTSTATUS appended; // ebx
  unsigned __int16 i; // cx
  unsigned __int16 Length; // bx
  int v10; // eax
  UNICODE_STRING Destination; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+77h] BYREF

  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
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
LABEL_3:
    if ( v5 < 0 )
      goto LABEL_10;
LABEL_4:
    if ( (*(_DWORD *)(a1 + 492) & 2) != 0 && !wcsicmp(a2, L"SOFTWARE") )
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
    appended = PiDrvDbResolveNodeFilePaths(a1, KeyHandle);
    if ( appended >= 0 && (*(_DWORD *)(a1 + 64) & 8) != 0 )
      appended = PiDrvDbOverlayNodeHive(a1, a2, KeyHandle);
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
  {
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + 38;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(DestinationString.Length + 38));
    if ( Destination.Buffer )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\MACHINE\\");
      if ( appended < 0 )
        goto LABEL_10;
      appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
      if ( appended < 0 )
        goto LABEL_10;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      appended = v5;
      if ( v5 != -1073741772 )
        goto LABEL_3;
LABEL_20:
      appended = 0;
      goto LABEL_10;
    }
LABEL_21:
    appended = -1073741670;
    goto LABEL_10;
  }
  if ( !CmIsStateSeparationEnabled() )
    goto LABEL_20;
  UnicodeString.MaximumLength = DestinationString.Length + *(_WORD *)(a1 + 50);
  UnicodeString.Length = 0;
  UnicodeString.Buffer = (wchar_t *)ExpAllocateStringRoutine(UnicodeString.MaximumLength);
  if ( !UnicodeString.Buffer )
    goto LABEL_21;
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
        goto LABEL_21;
      appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(a1 + 32));
      if ( appended < 0 )
        goto LABEL_10;
      RtlInitUnicodeString(&String1, L"DRIVERS");
      Length = Destination.Length;
      if ( Destination.Length > (unsigned __int64)String1.Length + 2 )
      {
        if ( RtlSuffixUnicodeString(&String1, &Destination, 1u) )
        {
          Length = Destination.Length;
          if ( Destination.Buffer[((Destination.Length - (unsigned __int64)String1.Length) >> 1) - 1] != 92 )
          {
            Destination.Length -= String1.Length;
            goto LABEL_40;
          }
        }
        else
        {
          Length = Destination.Length;
        }
      }
      RtlInitUnicodeString(&String1, L"SYSTEM");
      if ( Length > (unsigned __int64)String1.Length + 2
        && RtlSuffixUnicodeString(&String1, &Destination, 1u)
        && Destination.Buffer[((Destination.Length - (unsigned __int64)String1.Length) >> 1) - 1] != 92 )
      {
        Destination.Length -= String1.Length;
      }
LABEL_40:
      appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
      if ( appended < 0 )
        goto LABEL_10;
      v10 = PiDrvDbLoadHive(&Destination, (__int64)&UnicodeString, 0x2000LL, &KeyHandle);
      appended = v10;
      if ( v10 != -1073741772 )
      {
        if ( v10 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(a1 + 492) & 2) == 0 || wcsicmp(a2, L"SOFTWARE") )
          v3 = 1;
        goto LABEL_4;
      }
      goto LABEL_20;
    }
  }
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
    PiDrvDbUnloadHive((__int64)&Destination, 0LL);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
