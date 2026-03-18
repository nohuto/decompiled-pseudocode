/*
 * XREFs of IopDecrementIrpRefCount @ 0x1404FEB8C
 * Callers:
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 * Callees:
 *     IopInterlockedAdd @ 0x14030A538 (IopInterlockedAdd.c)
 */

__int64 __fastcall IopDecrementIrpRefCount(__int64 a1)
{
  return IopInterlockedAdd((volatile signed __int64 *)(a1 + 88), -1);
}
