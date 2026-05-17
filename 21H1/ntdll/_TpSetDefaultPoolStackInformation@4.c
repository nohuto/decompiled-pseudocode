/*
 * XREFs of _TpSetDefaultPoolStackInformation@4 @ 0x4B383D40
 * Callers:
 *     <none>
 * Callees:
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TpPoolReferenceExistingGlobalPool@0 @ 0x4B2E9657 (_TpPoolReferenceExistingGlobalPool@0.c)
 *     _TpSetPoolStackInformation@8 @ 0x4B2ED670 (_TpSetPoolStackInformation@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TpSetDefaultPoolStackInformation@4 @ 0x4B383D40 (_TpSetDefaultPoolStackInformation@4.c)
 */

int __stdcall TpSetDefaultPoolStackInformation(_DWORD *a1)
{
  _DWORD *Heap; // eax
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // [esp+10h] [ebp-20h]
  char v6; // [esp+17h] [ebp-19h]

  v6 = 0;
  v5 = 0;
  if ( !a1 )
    return -1073741811;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_DWORD *)(TppPoolpGlobalPoolStackSize + 4) < a1[1]
    || *(_DWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap = (_DWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 8),
          (TppPoolpGlobalPoolStackSize = (int)Heap) != 0) )
    {
      v3 = a1[1];
      if ( Heap[1] < v3 )
      {
        Heap[1] = v3;
        v6 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v6 = 1;
      }
    }
    else
    {
      v5 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v5 >= 0 && v6 )
  {
    v4 = TpPoolReferenceExistingGlobalPool();
    if ( v4 )
    {
      v5 = TpSetPoolStackInformation(v4, TppPoolpGlobalPoolStackSize);
      TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, (int)&TppPoolpGlobalPoolLock);
    }
  }
  return v5;
}
