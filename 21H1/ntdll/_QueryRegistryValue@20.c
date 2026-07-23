/*
 * XREFs of _QueryRegistryValue@20 @ 0x4B38B5D1
 * Callers:
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __fastcall QueryRegistryValue(void *a1, _UNICODE_STRING *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  ULONG v6; // esi
  _DWORD *Heap; // edi
  NTSTATUS v8; // esi
  unsigned int v9; // eax
  SIZE_T v10; // [esp-4h] [ebp-1Ch]
  size_t v11; // [esp-4h] [ebp-1Ch]
  ULONG ResultLength; // [esp+14h] [ebp-4h] BYREF

  ResultLength = 0;
  if ( !a5 )
    return -1073741811;
  v6 = *a5 + 12;
  LODWORD(v10) = v6;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
  if ( !Heap )
    return -1073741670;
  v8 = NtQueryValueKey(a1, a2, KeyValuePartialInformation, Heap, v6, &ResultLength);
  if ( v8 < 0 )
    goto LABEL_13;
  v9 = Heap[2];
  if ( v9 )
  {
    if ( v9 > *a5 )
    {
LABEL_15:
      v8 = -1073741789;
      *a5 = Heap[2];
      goto LABEL_16;
    }
    *a5 = v9;
    if ( a4 )
    {
      LODWORD(v11) = v9;
      memcpy(a4, Heap + 3, v11);
    }
    if ( a3 )
      *a3 = Heap[1];
LABEL_13:
    if ( v8 != -2147483643 && v8 != -1073741789 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v8 = -1073741811;
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}
