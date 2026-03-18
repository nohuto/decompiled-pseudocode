/*
 * XREFs of PopReadRegKeyValue @ 0x1403CAFB8
 * Callers:
 *     PopReadUlongPowerKey @ 0x1403CAF74 (PopReadUlongPowerKey.c)
 *     PopDiagTracePerfTrackData @ 0x140770444 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceDirtyTransition @ 0x140A962F8 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadRegKeyValue(PCWSTR SourceString, PCWSTR a2, size_t Size, int a4, void *a5)
{
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v9 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x50455654u);
      if ( !PoolWithTag )
      {
        v9 = -1073741801;
        goto LABEL_4;
      }
      v9 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             PoolWithTag,
             ResultLength,
             &ResultLength);
    }
    if ( v9 >= 0 )
    {
      if ( !a4 || PoolWithTag[1] == a4 )
      {
        if ( PoolWithTag[2] == Size )
          memmove(a5, PoolWithTag + 3, Size);
        else
          v9 = -1073741789;
      }
      else
      {
        v9 = -1073741788;
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x50455654u);
  return (unsigned int)v9;
}
