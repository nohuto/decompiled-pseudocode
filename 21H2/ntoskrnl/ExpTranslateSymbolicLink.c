/*
 * XREFs of ExpTranslateSymbolicLink @ 0x140952D8C
 * Callers:
 *     ExpConvertArcName @ 0x14094F76C (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x14094F930 (ExpConvertSignatureName.c)
 *     ExpFindArcName @ 0x1409500E4 (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x14095240C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x140952A84 (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1403FCB40 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1403FD160 (ZwQuerySymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ExpTranslateSymbolicLink(PCWSTR SourceString, UNICODE_STRING *a2)
{
  unsigned __int16 v3; // si
  wchar_t *PoolWithTag; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE LinkHandle; // [rsp+B8h] [rbp+48h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_DWORD *)(&LinkTarget.MaximumLength + 1) = 0;
  ReturnedLength = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  LinkHandle = 0LL;
  v3 = 2;
  DestinationString = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LinkTarget.Length = 0;
        LinkTarget.Buffer = PoolWithTag;
        LinkTarget.MaximumLength = v3 - 2;
        v6 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v6 != -1073741789 )
          break;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v3 = ReturnedLength + 2;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ReturnedLength + 2, 0x72766E45u);
        if ( !PoolWithTag )
        {
          ZwClose(LinkHandle);
          return -1073741670;
        }
      }
      ZwClose(LinkHandle);
      if ( v6 < 0 )
        break;
      PoolWithTag[(unsigned __int64)LinkTarget.Length >> 1] = 0;
      LinkTarget.MaximumLength = v3;
      RtlInitUnicodeString(&DestinationString, PoolWithTag);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
      {
        result = 0;
        *a2 = LinkTarget;
        return result;
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return v6;
  }
  return result;
}
