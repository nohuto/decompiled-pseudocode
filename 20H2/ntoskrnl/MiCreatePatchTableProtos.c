/*
 * XREFs of MiCreatePatchTableProtos @ 0x1408CC128
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiLockPagedRange @ 0x140723DD0 (MiLockPagedRange.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void *MiCreatePatchTableProtos()
{
  SIZE_T v0; // rdi
  PVOID Pool; // rax
  void *v2; // rbx

  v0 = 8LL * (((unsigned int)dword_140C4CB30 >> 12) + ((dword_140C4CB30 & 0xFFF) != 0));
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
