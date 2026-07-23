/*
 * XREFs of PiOpenDriverRedirectedStateRootKey @ 0x14089B3A0
 * Callers:
 *     PipHardwareConfigClearStartOverrides @ 0x1408971AC (PipHardwareConfigClearStartOverrides.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     PiGetStateRootPath @ 0x14076C34C (PiGetStateRootPath.c)
 */

__int64 __fastcall PiOpenDriverRedirectedStateRootKey(__int64 a1, _QWORD *a2)
{
  NTSTATUS StateRootPath; // ebx
  HANDLE v4; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a2 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
    if ( StateRootPath >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      StateRootPath = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( StateRootPath == -1073741772 )
        StateRootPath = -1073741275;
      if ( StateRootPath >= 0 )
      {
        v4 = KeyHandle;
        KeyHandle = 0LL;
        *a2 = v4;
      }
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  RtlFreeAnsiString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)StateRootPath;
}
