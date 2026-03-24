/*
 * XREFs of EtwpReadPerSiloConfigParameters @ 0x1403AFAA4
 * Callers:
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406BBF50 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS __fastcall EtwpReadPerSiloConfigParameters(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE v3; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v6; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v7; // [rsp+78h] [rbp-31h]
  _QWORD v8[14]; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v9; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = 64;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0
    || (memset(v8, 0, sizeof(v8)),
        v8[0] = &EtwpQueryRegistryCallback,
        v8[3] = &v6,
        v8[2] = L"EtwMaxLoggers",
        LODWORD(v8[4]) = 4,
        v6 = 4,
        v7 = &v9,
        (int)RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v8, 0LL, 0LL) < 0) )
  {
    result = v9;
  }
  else
  {
    result = 256;
    if ( v9 <= 0x100 )
    {
      result = v9;
      if ( v9 < 0x20 )
        result = 32;
    }
    v9 = result;
  }
  v3 = KeyHandle;
  *(_DWORD *)(a1 + 16) = result;
  if ( v3 )
    return ZwClose(v3);
  return result;
}
