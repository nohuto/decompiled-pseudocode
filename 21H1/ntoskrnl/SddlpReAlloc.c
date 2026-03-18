/*
 * XREFs of SddlpReAlloc @ 0x140922144
 * Callers:
 *     GetPrintableOperandValue @ 0x14068FB18 (GetPrintableOperandValue.c)
 *     GetOperandValue @ 0x140922C5C (GetOperandValue.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
