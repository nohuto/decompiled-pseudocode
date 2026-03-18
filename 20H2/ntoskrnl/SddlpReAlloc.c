/*
 * XREFs of SddlpReAlloc @ 0x14092921C
 * Callers:
 *     GetPrintableOperandValue @ 0x1406FC83C (GetPrintableOperandValue.c)
 *     GetOperandValue @ 0x140929D34 (GetOperandValue.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void *__fastcall SddlpReAlloc(size_t Size, SIZE_T a2, PVOID P)
{
  PVOID PoolWithTag; // rax
  void *v7; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x64536553u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a2);
    memmove(v7, P, Size);
  }
  ExFreePoolWithTag(P, 0);
  return v7;
}
