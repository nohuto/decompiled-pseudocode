/*
 * XREFs of MiCreatePatchTableProtos @ 0x1408C98E8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiLockPagedRange @ 0x140727860 (MiLockPagedRange.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void *MiCreatePatchTableProtos()
{
  SIZE_T v0; // rdi
  PVOID Pool; // rax
  void *v2; // rbx

  v0 = 8LL * (((unsigned int)dword_140C4CCB0 >> 12) + ((dword_140C4CCB0 & 0xFFF) != 0));
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
