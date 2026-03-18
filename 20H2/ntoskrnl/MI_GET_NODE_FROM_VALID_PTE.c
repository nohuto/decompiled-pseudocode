/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x140329BA0
 * Callers:
 *     MmGrowKernelStackEx @ 0x1403299E0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1);
  v1 = v4;
  if ( MiPteInShadowRange((unsigned __int64)&v4)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v4 >> 3) & 0x1FF)) & 0x20) != 0 )
      v1 |= 0x20uLL;
  }
  return *((unsigned int *)MiSearchNumaNodeTable((v1 >> 12) & 0xFFFFFFFFFLL) + 2);
}
