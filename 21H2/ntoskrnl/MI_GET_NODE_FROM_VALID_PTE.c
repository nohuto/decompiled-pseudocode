/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x14024E5F8
 * Callers:
 *     MmGrowKernelStackEx @ 0x14024E3F0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v1 >> 12) & 0xFFFFFFFFFFLL)) >> 4))
                         + 8);
}
