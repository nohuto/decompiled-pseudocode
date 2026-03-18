/*
 * XREFs of CmpKeyNodeNeedsAccessBitUpdate @ 0x140672198
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpKeyNodeNeedsAccessBitUpdate(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0;
}
