/*
 * XREFs of PortMapOpenKey @ 0x1C0059780
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x1C002BF28 (RaidAdapterCreateDevmapEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PortMapOpenKey(_QWORD *a1)
{
  void *v1; // rbx
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp+18h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  v1 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Disposition = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  if ( result >= 0 )
    v1 = KeyHandle;
  *a1 = v1;
  return result;
}
