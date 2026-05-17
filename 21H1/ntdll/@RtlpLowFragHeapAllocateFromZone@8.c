/*
 * XREFs of @RtlpLowFragHeapAllocateFromZone@8 @ 0x4B2E4573
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall RtlpLowFragHeapAllocateFromZone(int a1, int a2)
{
  int v2; // eax
  int v4; // ecx
  unsigned __int32 v5; // eax
  unsigned int v6; // ebx
  int Heap; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // ecx
  int v11; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v2 = 24 * a2;
  for ( i = 24 * a2; ; v2 = i )
  {
    v4 = *(_DWORD *)(v2 + a1 + 2008);
    v11 = v4;
    if ( v4 )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 1u);
      if ( v5 < 0x19 )
        return 40 * v5 + v4 + 16;
    }
    Heap = RtlAllocateHeap(*(_DWORD *)(a1 + 12), 0x800000, 1016);
    v9 = (_DWORD *)Heap;
    if ( !Heap )
      return 0;
    *(_DWORD *)(Heap + 8) = 1;
    v6 = (Heap + 19) & 0xFFFFFFF8;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    if ( v11 == *(_DWORD *)(i + a1 + 2008) )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
    RtlFreeHeap(*(_DWORD *)(a1 + 12), 0x800000, (int)v9);
  }
  v10 = *(_DWORD **)(a1 + 8);
  if ( *v10 != a1 + 4 )
    __fastfail(3u);
  *v9 = a1 + 4;
  v9[1] = v10;
  *v10 = v9;
  *(_DWORD *)(a1 + 8) = v9;
  *(_DWORD *)(i + a1 + 2008) = v9;
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
  return v6;
}
