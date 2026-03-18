/*
 * XREFs of SiOpenRegistryKey @ 0x1406F30D8
 * Callers:
 *     SiGetRegistryValue @ 0x1406F2F64 (SiGetRegistryValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 */

__int64 __fastcall SiOpenRegistryKey(__int64 a1, const WCHAR *a2, __int64 a3, HANDLE *a4)
{
  NTSTATUS v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 < 0 )
  {
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    *a4 = KeyHandle;
  }
  return (unsigned int)v5;
}
