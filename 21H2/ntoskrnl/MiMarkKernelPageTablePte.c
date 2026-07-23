/*
 * XREFs of MiMarkKernelPageTablePte @ 0x140534C40
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkKernelPageTablePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v2;
  v3 = v2;
  if ( (v2 & 1) != 0 && (v2 & 0x80u) == 0LL )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v6)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v6 >> 3) & 0x1FF)) & 0x20) != 0 )
        v3 |= 0x20uLL;
    }
    PoSetHiberRange(0LL, 0x14000u, (PVOID)((v3 >> 12) & 0xFFFFFFFFFLL), 1uLL, 0x706B6D4Du);
  }
  return 0LL;
}
