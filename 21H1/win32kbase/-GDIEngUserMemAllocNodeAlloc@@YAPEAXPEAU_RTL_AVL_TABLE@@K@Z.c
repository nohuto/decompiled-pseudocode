/*
 * XREFs of ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C003F480
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 */

__int64 __fastcall GDIEngUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return PALLOCMEM2(ByteSize);
}
