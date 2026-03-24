/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x1402CB090
 * Callers:
 *     MmGrowKernelStackEx @ 0x1402CAED0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(a1);
  v1 = v5;
  if ( (unsigned int)MiPteInShadowRange(&v5, v2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v5 >> 3) & 0x1FF)) & 0x20) != 0 )
      v1 |= 0x20uLL;
  }
  return *(unsigned int *)(MiSearchNumaNodeTable((v1 >> 12) & 0xFFFFFFFFFLL) + 8);
}
