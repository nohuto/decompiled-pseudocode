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

unsigned int __fastcall RtlpLowFragHeapAllocateFromZone(PRTL_SRWLOCK SRWLock, int a2)
{
  int v2; // eax
  int v4; // ecx
  unsigned __int32 v5; // eax
  unsigned int v6; // ebx
  _RTL_SRWLOCK *Heap; // eax
  _RTL_SRWLOCK *v9; // edi
  PRTL_SRWLOCK *Value; // ecx
  SIZE_T v11; // [esp-4h] [ebp-1Ch]
  int v12; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v2 = 24 * a2;
  for ( i = 6 * a2; ; v2 = i * 4 )
  {
    v4 = *(unsigned int *)((char *)&SRWLock[502].Value + v2);
    v12 = v4;
    if ( v4 )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 1u);
      if ( v5 < 0x19 )
        return 40 * v5 + v4 + 16;
    }
    LODWORD(v11) = 1016;
    Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(SRWLock[3].Ptr, 0x800000u, v11);
    v9 = Heap;
    if ( !Heap )
      return 0;
    Heap[2].Value = 1;
    v6 = ((unsigned int)&Heap[4].Ptr + 3) & 0xFFFFFFF8;
    RtlAcquireSRWLockExclusive(SRWLock);
    if ( v12 == SRWLock[i + 502].Value )
      break;
    RtlReleaseSRWLockExclusive(SRWLock);
    RtlFreeHeap(SRWLock[3].Ptr, 0x800000u, v9);
  }
  Value = (PRTL_SRWLOCK *)SRWLock[2].Value;
  if ( *Value != &SRWLock[1] )
    __fastfail(3u);
  v9->Value = (unsigned int)&SRWLock[1];
  v9[1].Value = (unsigned int)Value;
  *Value = v9;
  SRWLock[2].Value = (unsigned int)v9;
  SRWLock[i + 502].Value = (unsigned int)v9;
  RtlReleaseSRWLockExclusive(SRWLock);
  return v6;
}
