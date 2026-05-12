/*
 * XREFs of RaidLoadEnclosureIdMappings @ 0x1C00342AC
 * Callers:
 *     DllInitialize @ 0x1C004ADE0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     RaidAddEnclosureIdMapping @ 0x1C0033DF0 (RaidAddEnclosureIdMapping.c)
 */

int RaidLoadEnclosureIdMappings()
{
  int result; // eax
  ULONG Length; // esi
  wchar_t *PoolWithTag; // rbx
  ULONG v3; // edi
  NTSTATUS v4; // eax
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  GUID Guid; // [rsp+98h] [rbp+37h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  GuidString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\EnclosureIdMappings");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 20;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x48536152u);
    if ( PoolWithTag )
    {
      v3 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, PoolWithTag, Length, (PULONG)&NumberOfBytes);
          if ( v4 < 0 )
            break;
          if ( *((_DWORD *)PoolWithTag + 4) == 76 )
          {
            *(_DWORD *)&GuidString.Length = 4980812;
            GuidString.Buffer = PoolWithTag + 10;
            if ( RtlGUIDFromString(&GuidString, &Guid) >= 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData, 1u);
              RaidAddEnclosureIdMapping(
                (char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2),
                *((unsigned int *)PoolWithTag + 3),
                &Guid);
              ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData);
            }
          }
          ++v3;
        }
        if ( v4 != -2147483643 && v4 != -1073741789 )
          break;
        Length = NumberOfBytes;
        ExFreePoolWithTag(PoolWithTag, 0x48536152u);
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x48536152u);
        if ( !PoolWithTag )
          return ZwClose(KeyHandle);
      }
      ExFreePoolWithTag(PoolWithTag, 0x48536152u);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
