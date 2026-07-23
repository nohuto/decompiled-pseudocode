/*
 * XREFs of _EtwpQueryRegString@16 @ 0x4B2F1160
 * Callers:
 *     _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4 (_EtwpAddDebugInfoEvents@12.c)
 *     _EtwpQueryPartitionRegistryInformationUm@16 @ 0x4B2F0FDE (_EtwpQueryPartitionRegistryInformationUm@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ULongAdd@12 @ 0x4B2E454E (_ULongAdd@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __fastcall EtwpQueryRegString(PCWSTR SourceString, PCWSTR a2, void *a3, ULONG ResultLength)
{
  NTSTATUS v5; // edi
  _DWORD *Heap; // esi
  SIZE_T v8; // [esp-4h] [ebp-44h]
  size_t v9; // [esp-4h] [ebp-44h]
  ULONG v10; // [esp+0h] [ebp-40h]
  ULONG *v11; // [esp+4h] [ebp-3Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-30h] BYREF
  _UNICODE_STRING ValueName; // [esp+28h] [ebp-18h] BYREF
  _UNICODE_STRING DestinationString; // [esp+30h] [ebp-10h] BYREF
  HANDLE KeyHandle; // [esp+38h] [ebp-8h] BYREF
  ULONG ulAugend; // [esp+3Ch] [ebp-4h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 < 0 )
    return v5;
  if ( is_mul_ok(2u, ResultLength) )
  {
    ulAugend = 2 * ResultLength;
    if ( ULongAdd((ULONG)&ulAugend, v10, v11) >= 0 )
    {
      LODWORD(v8) = ulAugend;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
      if ( Heap )
      {
        RtlInitUnicodeString(&ValueName, a2);
        v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, ulAugend, &ResultLength);
        if ( v5 >= 0 )
        {
          LODWORD(v9) = Heap[2];
          memcpy(a3, Heap + 3, v9);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v5 = -1073741801;
      }
      NtClose(KeyHandle);
      return v5;
    }
  }
  NtClose(KeyHandle);
  return -1073741675;
}
