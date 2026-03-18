/*
 * XREFs of IopDecrementIrpRefCount @ 0x1405566A4
 * Callers:
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 * Callees:
 *     IopInterlockedAdd @ 0x14022A6A0 (IopInterlockedAdd.c)
 */

__int64 __fastcall IopDecrementIrpRefCount(__int64 a1)
{
  return IopInterlockedAdd((volatile signed __int64 *)(a1 + 88), -1);
}
