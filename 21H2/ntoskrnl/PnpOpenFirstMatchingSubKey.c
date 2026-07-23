/*
 * XREFs of PnpOpenFirstMatchingSubKey @ 0x1408A2184
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x1407640C0 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140770ECC (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall PnpOpenFirstMatchingSubKey(
        PCWSTR SourceString,
        void *a2,
        __int64 a3,
        __int64 a4,
        PHANDLE KeyHandle)
{
  const WCHAR *v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  v6 = SourceString;
  DestinationString = 0LL;
  if ( !SourceString || !a2 || !KeyHandle )
    return -1073741811;
  *KeyHandle = 0LL;
  result = -1073741772;
  if ( *SourceString )
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, v6);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
      if ( result >= 0 )
        break;
      *KeyHandle = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v6[v8] );
      v6 += v8 + 1;
    }
    while ( *v6 );
  }
  return result;
}
