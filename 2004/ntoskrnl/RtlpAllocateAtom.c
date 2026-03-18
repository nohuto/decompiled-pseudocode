/*
 * XREFs of RtlpAllocateAtom @ 0x1405D0FD4
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140201810 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402018E8 (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupOrCreateLowBox @ 0x14024CB5C (RtlpLookupOrCreateLowBox.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x14066A770 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
