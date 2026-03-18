/*
 * XREFs of rimUserMemAllocNodeAlloc @ 0x1C015DA80
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 */

__int64 __fastcall rimUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPool(ByteSize, 0x656D7552u);
}
