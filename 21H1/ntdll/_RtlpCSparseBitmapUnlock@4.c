/*
 * XREFs of _RtlpCSparseBitmapUnlock@4 @ 0x4B380071
 * Callers:
 *     _RtlpUnlockHeapManagerForCloning@8 @ 0x4B359836 (_RtlpUnlockHeapManagerForCloning@8.c)
 *     _RtlCSparseBitmapBitmaskWrite@16 @ 0x4B37DD69 (_RtlCSparseBitmapBitmaskWrite@16.c)
 *     _RtlSparseArrayElementAllocate@12 @ 0x4B37E34C (_RtlSparseArrayElementAllocate@12.c)
 *     _RtlpCSparseBitmapPageCommit@16 @ 0x4B37E46E (_RtlpCSparseBitmapPageCommit@16.c)
 *     _RtlpCSparseBitmapPageDecommit@12 @ 0x4B37E559 (_RtlpCSparseBitmapPageDecommit@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

signed __int32 __thiscall RtlpCSparseBitmapUnlock(_DWORD *this)
{
  volatile signed __int32 *v2; // [esp-8h] [ebp-8h]

  v2 = (volatile signed __int32 *)(this[2] + 12);
  if ( *this == 1 )
    return RtlReleaseSRWLockExclusive(v2);
  else
    return RtlReleaseSRWLockShared(v2);
}
