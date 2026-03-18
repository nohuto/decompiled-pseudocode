/*
 * XREFs of MiLockPagedRange @ 0x1406C2718
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x140245D28 (MiInsertNewCombineBlocks.c)
 *     MiCreatePatchTableProtos @ 0x140972D10 (MiCreatePatchTableProtos.c)
 *     MiBuildNewCloneDescriptor @ 0x14098056C (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x14025D494 (MiUnlockPagedAddress.c)
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
