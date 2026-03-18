/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x14036EBDC
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14036EAB0 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14036F604 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14036F6C0 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1409DD5E8 (VfAvlEnumerateNodes.c)
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
