/*
 * XREFs of MiCreatePatchTableProtos @ 0x1408C4F98
 * Callers:
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiLockPagedRange @ 0x140713A80 (MiLockPagedRange.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void *MiCreatePatchTableProtos()
{
  SIZE_T v0; // rdi
  PVOID Pool; // rax
  void *v2; // rbx

  v0 = 8LL * (((unsigned int)dword_140C4CBF0 >> 12) + ((dword_140C4CBF0 & 0xFFF) != 0));
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
