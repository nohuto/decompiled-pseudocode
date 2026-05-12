/*
 * XREFs of PortRegistryWriteWithHandle @ 0x1C0073430
 * Callers:
 *     PortRegistryWriteDeviceKey @ 0x1C0073394 (PortRegistryWriteDeviceKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortRegistryWriteWithHandle(
        void *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        ULONG a4,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v9 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    a1 = KeyHandle;
    v10 = v9;
  }
  else
  {
    KeyHandle = a1;
    v10 = 0;
  }
  if ( v10 >= 0 )
  {
    v10 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)a1, *(PCWSTR *)(a3 + 8), a4, ValueData, ValueLength);
    if ( a2 )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v10;
}
