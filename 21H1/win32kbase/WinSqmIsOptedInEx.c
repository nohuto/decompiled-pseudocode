/*
 * XREFs of WinSqmIsOptedInEx @ 0x1C004CB00
 * Callers:
 *     WinSqmIsOptedIn @ 0x1C004CAE0 (WinSqmIsOptedIn.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z @ 0x1C004CC74 (-ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z.c)
 */

_BOOL8 __fastcall WinSqmIsOptedInEx(int a1)
{
  bool v1; // bl
  int v4; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v1 = 0;
  v7 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( a1 != 2 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v4 = ReadUlongFromKey(KeyHandle, L"CEIPEnable", &v7);
      if ( v4 >= 0 )
      {
LABEL_16:
        v1 = v7 == 1;
        goto LABEL_9;
      }
      if ( v4 != -1073741772 )
        goto LABEL_9;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
      goto LABEL_9;
    if ( (int)ReadUlongFromKey(Handle, L"CEIPEnable", &v7) >= 0 )
      v1 = v7 == 1;
  }
  if ( (a1 & 3) != 0 && (v1 || a1 == 2) && (int)ReadUlongFromKey(Handle, L"CEIPSampledIn", &v7) >= 0 )
    goto LABEL_16;
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v1;
}
