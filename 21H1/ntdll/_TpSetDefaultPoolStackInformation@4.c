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
  PTP_POOL_STACK_INFORMATION Heap; // eax
  unsigned int v3; // ecx
  _TP_POOL *v4; // eax
  SIZE_T v5; // [esp-4h] [ebp-34h]
  NTSTATUS v6; // [esp+10h] [ebp-20h]
  char v7; // [esp+17h] [ebp-19h]

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return -1073741811;
  if ( !TppPoolpGlobalPoolStackSize
    || HIDWORD(TppPoolpGlobalPoolStackSize->StackReserve) < a1[1]
    || LODWORD(TppPoolpGlobalPoolStackSize->StackReserve) < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap = TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (LODWORD(v5) = 8,
          Heap = (PTP_POOL_STACK_INFORMATION)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, v5),
          (TppPoolpGlobalPoolStackSize = Heap) != 0) )
    {
      v3 = a1[1];
      if ( HIDWORD(Heap->StackReserve) < v3 )
      {
        HIDWORD(Heap->StackReserve) = v3;
        v7 = 1;
      }
      if ( LODWORD(Heap->StackReserve) < *a1 )
      {
        LODWORD(Heap->StackReserve) = *a1;
        v7 = 1;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v6 >= 0 && v7 )
  {
    v4 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4, TppPoolpGlobalPoolStackSize);
      TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
  return v6;
}
