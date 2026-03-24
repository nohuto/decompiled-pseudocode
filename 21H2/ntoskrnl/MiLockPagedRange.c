/*
 * XREFs of MiLockPagedRange @ 0x140727860
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x14036B858 (MiInsertNewCombineBlocks.c)
 *     MiCreatePatchTableProtos @ 0x1408C98E8 (MiCreatePatchTableProtos.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D8F04 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x1405369F0 (MiUnlockPagedAddress.c)
 */

__int64 __fastcall MiLockPagedRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = 0LL;
  if ( !a2 )
    return 1LL;
  while ( (unsigned int)MiLockPagedAddress(v2 + a1) )
  {
    v2 += 4096LL;
    if ( v2 >= a2 )
      return 1LL;
  }
  while ( v2 )
  {
    v2 -= 4096LL;
    MiUnlockPagedAddress(v2 + a1);
  }
  return 0LL;
}
