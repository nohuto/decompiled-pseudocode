/*
 * XREFs of _RtlpNtQueryValueKey@20 @ 0x4B36D280
 * Callers:
 *     _RtlInitializeRXact@12 @ 0x4B345820 (_RtlInitializeRXact@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __stdcall RtlpNtQueryValueKey(HANDLE KeyHandle, _DWORD *a2, void *a3, int *a4, int a5)
{
  int v5; // eax
  _DWORD *Heap; // esi
  NTSTATUS v8; // edi
  SIZE_T v9; // [esp-4h] [ebp-1Ch]
  size_t v10; // [esp-4h] [ebp-1Ch]
  _UNICODE_STRING ValueName; // [esp+Ch] [ebp-Ch] BYREF
  ULONG Length; // [esp+14h] [ebp-4h] BYREF

  v5 = 0;
  if ( a4 )
    v5 = *a4;
  LODWORD(v9) = v5 + 12;
  Length = v5 + 12;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( !Heap )
    return -1073741670;
  ValueName.Length = 0;
  v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &Length);
  if ( v8 == -1073741772 )
  {
    v8 = 0;
    Heap[2] = 0;
    Heap[1] = 0;
  }
  if ( v8 >= 0 || v8 == -2147483643 )
  {
    if ( a4 )
      *a4 = Heap[2];
    if ( a2 )
      *a2 = Heap[1];
  }
  if ( v8 >= 0 )
  {
    if ( a3 )
    {
      LODWORD(v10) = Heap[2];
      memcpy(a3, Heap + 3, v10);
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}
