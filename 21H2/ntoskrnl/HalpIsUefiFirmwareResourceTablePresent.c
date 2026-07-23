/*
 * XREFs of HalpIsUefiFirmwareResourceTablePresent @ 0x1407AEA78
 * Callers:
 *     HalpAddDevice @ 0x1407AE6B0 (HalpAddDevice.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 */

bool HalpIsUefiFirmwareResourceTablePresent()
{
  NTSTATUS v0; // ebx
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v2[1] = L"\\REGISTRY\\MACHINE\\HARDWARE\\UEFI";
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  v2[0] = 4194366LL;
  ObjectAttributes.Length = 48;
  v0 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v0 >= 0 )
    ZwClose(KeyHandle);
  return v0 >= 0;
}
