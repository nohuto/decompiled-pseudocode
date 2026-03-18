/*
 * XREFs of RtlpAllocateAtom @ 0x14069F934
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x1402A5B8C (RtlpLookupOrCreateLowBox.c)
 *     RtlCreateAtomTableEx @ 0x1402E50E0 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402E51B8 (RtlpAllocateAtomTableEntry.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x140615490 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  SIZE_T v2; // rdi
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rax

  v2 = a1 + 16;
  if ( a1 + 16 < a1 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, a2);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2, 0LL);
    *PoolWithTag = v5;
    if ( v5 )
    {
      PoolWithTag[1] = v2;
      PoolWithTag += 2;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, a2);
      return 0LL;
    }
  }
  return PoolWithTag;
}
