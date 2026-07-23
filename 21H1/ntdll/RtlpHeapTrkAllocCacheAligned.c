/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x4B364433
 * Callers:
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(PVOID *a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  PVOID Heap; // ebx
  unsigned int v8; // ecx
  char *v9; // ecx
  SIZE_T v10; // [esp-4h] [ebp-24h]
  SIZE_T v11; // [esp-4h] [ebp-24h]
  unsigned int v12; // [esp+Ch] [ebp-14h]
  int Size; // [esp+14h] [ebp-Ch] BYREF
  unsigned int Size_4; // [esp+18h] [ebp-8h] BYREF
  unsigned int SystemInformation; // [esp+1Ch] [ebp-4h] BYREF

  v4 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, &SystemInformation, 4u, 0) < 0 )
    return 0;
  if ( !SystemInformation )
    return 0;
  LODWORD(v10) = 4 * a4;
  Heap = RtlAllocateHeap(HeapHandle, 0, v10);
  *a1 = Heap;
  if ( !Heap )
    return 0;
  v12 = SystemInformation * ((SystemInformation - 1 + a3) / SystemInformation);
  if ( (RtlULongLongToUInt((int *)&Size_4, a4 * v12, (a4 * (unsigned __int64)v12) >> 32) & 0xC0000000) == 0xC0000000
    || (RtlULongPtrAdd(Size_4, SystemInformation, &Size) & 0xC0000000) == 0xC0000000 )
  {
    RtlFreeHeap(HeapHandle, 0, Heap);
LABEL_6:
    *a1 = 0;
    return 0;
  }
  LODWORD(v11) = Size;
  v8 = (unsigned int)RtlAllocateHeap(HeapHandle, 8u, v11);
  *a2 = v8;
  if ( !v8 )
  {
    RtlFreeHeap(HeapHandle, 0, *a1);
    goto LABEL_6;
  }
  v9 = (char *)(SystemInformation + v8 - v8 % SystemInformation);
  if ( a4 )
  {
    do
    {
      *((_DWORD *)*a1 + v4++) = v9;
      v9 += v12;
    }
    while ( v4 < a4 );
  }
  return 1;
}
