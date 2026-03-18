/*
 * XREFs of ?FormFullImageName@@YGKPBU_UNICODE_STRING@@PAU1@1@Z @ 0xF8C20
 * Callers:
 *     ?LoadApiSetHost@@YGJPAU_Win32kApiSetHost@@PAU_UNICODE_STRING@@@Z @ 0xF8CA0 (-LoadApiSetHost@@YGJPAU_Win32kApiSetHost@@PAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

unsigned int __userpurge FormFullImageName@<eax>(
        const STRING *a1@<edx>,
        unsigned __int16 *a2@<ecx>,
        struct _STRING *Destination,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *a5)
{
  USHORT v7; // ax
  WCHAR *PoolWithTag; // ecx
  unsigned int result; // eax
  NTSTATUS appended; // eax
  PWSTR Buffer; // edx

  v7 = a1->Length + *a2 + 2;
  Destination->MaximumLength = v7;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v7, 0x6B333257u);
  Destination->Buffer = (PCHAR)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  Destination->Length = *a2;
  memcpy(PoolWithTag, *((const void **)a2 + 1), *a2);
  appended = RtlAppendStringToString(Destination, a1);
  Buffer = (PWSTR)Destination->Buffer;
  if ( appended < 0 )
  {
    ExFreePoolWithTag(Buffer, 0);
    return 0;
  }
  result = 1;
  Buffer[Destination->Length >> 1] = 0;
  return result;
}
