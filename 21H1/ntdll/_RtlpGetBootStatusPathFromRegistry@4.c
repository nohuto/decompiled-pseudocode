/*
 * XREFs of _RtlpGetBootStatusPathFromRegistry@4 @ 0x4B350DA9
 * Callers:
 *     _RtlpGetBootStatusPath@8 @ 0x4B350D73 (_RtlpGetBootStatusPath@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __thiscall RtlpGetBootStatusPathFromRegistry(_DWORD *this)
{
  NTSTATUS v1; // esi
  NTSTATUS v2; // eax
  _DWORD *Heap; // edi
  PVOID v4; // ebx
  SIZE_T v6; // [esp-4h] [ebp-44h]
  SIZE_T v7; // [esp-4h] [ebp-44h]
  size_t v8; // [esp-4h] [ebp-44h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-30h] BYREF
  _UNICODE_STRING DestinationString; // [esp+28h] [ebp-18h] BYREF
  ULONG v11; // [esp+30h] [ebp-10h] BYREF
  _DWORD *v12; // [esp+34h] [ebp-Ch]
  HANDLE KeyHandle; // [esp+38h] [ebp-8h] BYREF
  ULONG ResultLength; // [esp+3Ch] [ebp-4h] BYREF

  v12 = this;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v1 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v2 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0, 0, &ResultLength);
    v1 = v2;
    if ( v2 == -1073741789 )
    {
      LODWORD(v6) = ResultLength;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( Heap )
      {
        v1 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, ResultLength, &v11);
        if ( v1 >= 0 )
        {
          LODWORD(v7) = Heap[2];
          v4 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
          if ( v4 )
          {
            LODWORD(v8) = Heap[2];
            memcpy(v4, Heap + 3, v8);
            *v12 = v4;
          }
          else
          {
            v1 = -1073741801;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return -1073741801;
      }
    }
    else if ( v2 >= 0 )
    {
      return -1073741823;
    }
  }
  return v1;
}
