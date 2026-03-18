/*
 * XREFs of ExCancelDpcEventWait @ 0x14063E1E0
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterObjectWaitBlock @ 0x140232968 (KiDeregisterObjectWaitBlock.c)
 */

char __fastcall ExCancelDpcEventWait(__int64 a1)
{
  return KiDeregisterObjectWaitBlock(*(volatile signed __int32 **)(a1 + 56), (__int64 *)a1);
}
