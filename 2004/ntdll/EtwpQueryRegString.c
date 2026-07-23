/*
 * XREFs of EtwpQueryRegString @ 0x180057798
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180057610 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpAddDebugInfoEvents @ 0x1801114A4 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall EtwpQueryRegString(PCWSTR SourceString, PCWSTR a2, void *a3, ULONG a4)
{
  NTSTATUS v6; // edi
  unsigned __int64 v7; // rax
  ULONG Length; // edi
  unsigned int *Heap; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+7Fh] BYREF

  ResultLength = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 2LL * ResultLength;
  if ( v7 <= 0xFFFFFFFF )
  {
    Length = v7 + 12;
    if ( (int)v7 + 12 >= (unsigned int)v7 )
    {
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      if ( Heap )
      {
        RtlInitUnicodeString(&ValueName, a2);
        v6 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
        if ( v6 >= 0 )
          memmove(a3, Heap + 3, Heap[2]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
      NtClose(KeyHandle);
      return (unsigned int)v6;
    }
  }
  NtClose(KeyHandle);
  return 3221225621LL;
}
