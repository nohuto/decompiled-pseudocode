/*
 * XREFs of FsRtlpGetMaxVirtualDiskNestingLevel @ 0x1403CD61C
 * Callers:
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x14039AD40 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 */

__int64 FsRtlpGetMaxVirtualDiskNestingLevel()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  UNICODE_STRING *p_DestinationString; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING v6; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+A0h] [rbp+37h] BYREF
  unsigned int v11; // [rsp+ACh] [rbp+43h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  v0 = 2;
  DestinationString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem\\GroupPolicyKeys");
  RtlInitUnicodeString(&v6, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FsDepends\\Parameters");
  v1 = 0;
  do
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ++v1;
    ObjectAttributes.Attributes = 576;
    p_DestinationString = &v6;
    if ( v1 != 1 )
      p_DestinationString = &DestinationString;
    ObjectAttributes.ObjectName = p_DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"VirtualDiskMaxTreeDepth");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v11 <= 2 )
      {
        v0 = v11;
      }
      ZwClose(KeyHandle);
    }
  }
  while ( v1 < 2 );
  return v0;
}
