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

char __fastcall RtlpHeapTrkAllocCacheAligned(int *a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  int Heap; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // [esp+Ch] [ebp-14h]
  int v12; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v13; // [esp+18h] [ebp-8h] BYREF
  unsigned int SystemInformation; // [esp+1Ch] [ebp-4h] BYREF

  v4 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, &SystemInformation, 4u, 0) < 0 )
    return 0;
  if ( !SystemInformation )
    return 0;
  Heap = RtlAllocateHeap(dword_4B3A6D94, 0, 4 * a4);
  *a1 = Heap;
  if ( !Heap )
    return 0;
  v10 = SystemInformation * ((SystemInformation - 1 + a3) / SystemInformation);
  if ( (RtlULongLongToUInt((int *)&v13, a4 * v10, (a4 * (unsigned __int64)v10) >> 32) & 0xC0000000) == 0xC0000000
    || (RtlULongPtrAdd(v13, SystemInformation, &v12) & 0xC0000000) == 0xC0000000 )
  {
    RtlFreeHeap(dword_4B3A6D94, 0, Heap);
LABEL_6:
    *a1 = 0;
    return 0;
  }
  v8 = RtlAllocateHeap(dword_4B3A6D94, 8, v12);
  *a2 = v8;
  if ( !v8 )
  {
    RtlFreeHeap(dword_4B3A6D94, 0, *a1);
    goto LABEL_6;
  }
  v9 = SystemInformation + v8 - v8 % SystemInformation;
  if ( a4 )
  {
    do
    {
      *(_DWORD *)(*a1 + 4 * v4++) = v9;
      v9 += v10;
    }
    while ( v4 < a4 );
  }
  return 1;
}
