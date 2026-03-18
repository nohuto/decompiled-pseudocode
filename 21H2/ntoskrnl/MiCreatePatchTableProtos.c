/*
 * XREFs of MiCreatePatchTableProtos @ 0x140972D10
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLockPagedRange @ 0x1406C2718 (MiLockPagedRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *MiCreatePatchTableProtos()
{
  SIZE_T v0; // rdi
  PVOID Pool; // rax
  void *v2; // rbx

  v0 = 8LL * (((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0));
  Pool = MiAllocatePool(274, v0, 0x74536D4Du);
  v2 = Pool;
  if ( !Pool )
    return 0LL;
  if ( !(unsigned int)MiLockPagedRange((__int64)Pool, v0) )
  {
    ExFreePoolWithTag(v2, 0);
    return 0LL;
  }
  memset(v2, 0, v0);
  return v2;
}
