/*
 * XREFs of PipGetDriverKsrGuid @ 0x14089C8F4
 * Callers:
 *     IoReserveKsrPersistentMemory @ 0x14089C160 (IoReserveKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089C9EC (PipGetDriverKsrGuidRegistryValue.c)
 */

__int64 __fastcall PipGetDriverKsrGuid(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v3; // rcx
  int v4; // eax
  HANDLE v5; // rdi
  NTSTATUS DriverKsrGuidRegistryValue; // ebx
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  v3 = (UNICODE_STRING *)(*(_QWORD *)(a1 + 48) + 24LL);
  KeyHandle = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  v8 = 0LL;
  v4 = PipOpenServiceEnumKeys(v3, 0x20019u, &Handle, 0LL, 0);
  v5 = Handle;
  DriverKsrGuidRegistryValue = v4;
  if ( v4 >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *((_QWORD *)&v8 + 1) = L"Parameters";
    LODWORD(v8) = 1441812;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    DriverKsrGuidRegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DriverKsrGuidRegistryValue >= 0 )
      DriverKsrGuidRegistryValue = PipGetDriverKsrGuidRegistryValue(KeyHandle, a2);
  }
  if ( KeyHandle != (HANDLE)-1LL )
  {
    ZwClose(KeyHandle);
    KeyHandle = (HANDLE)-1LL;
  }
  if ( v5 != (HANDLE)-1LL )
    ZwClose(v5);
  return (unsigned int)DriverKsrGuidRegistryValue;
}
