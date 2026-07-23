/*
 * XREFs of _EtwpGetRegDwordValue@12 @ 0x4B2F0EE6
 * Callers:
 *     _EtwpQueryPartitionRegistryInformationUm@16 @ 0x4B2F0FDE (_EtwpQueryPartitionRegistryInformationUm@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     StringCopyWorkerW @ 0x4B2F1261 (StringCopyWorkerW.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall EtwpGetRegDwordValue(_DWORD *a1)
{
  WCHAR *Heap; // ebx
  NTSTATUS v2; // esi
  _DWORD *v3; // edi
  wchar_t *v5; // [esp-Ch] [ebp-50h]
  size_t v6; // [esp-8h] [ebp-4Ch]
  SIZE_T v7; // [esp-4h] [ebp-48h]
  SIZE_T v8; // [esp-4h] [ebp-48h]
  size_t *v9; // [esp+0h] [ebp-44h]
  const wchar_t *v10; // [esp+4h] [ebp-40h]
  size_t v11; // [esp+8h] [ebp-3Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-34h] BYREF
  _UNICODE_STRING ValueName; // [esp+28h] [ebp-1Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+30h] [ebp-14h] BYREF
  ULONG ResultLength; // [esp+38h] [ebp-Ch] BYREF
  HANDLE KeyHandle; // [esp+3Ch] [ebp-8h] BYREF

  KeyHandle = (HANDLE)-1;
  LODWORD(v7) = 4096;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( !Heap )
    return -1073741801;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    LODWORD(v8) = 16;
    v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v3 )
    {
      StringCopyWorkerW(v5, v6, v9, v10, v11);
      RtlInitUnicodeString(&ValueName, Heap);
      v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v3, 0x10u, &ResultLength);
      if ( v2 >= 0 )
        *a1 = v3[3];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    else
    {
      v2 = -1073741801;
    }
    NtClose(KeyHandle);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v2;
}
