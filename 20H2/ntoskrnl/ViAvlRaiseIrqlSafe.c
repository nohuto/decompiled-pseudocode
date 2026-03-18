/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x14037175C
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140371630 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140372184 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1409E3668 (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

void __fastcall ViAvlRaiseIrqlSafe(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rax

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
}
