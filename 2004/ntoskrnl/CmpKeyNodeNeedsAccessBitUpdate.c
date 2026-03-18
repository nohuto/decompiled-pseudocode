/*
 * XREFs of CmpKeyNodeNeedsAccessBitUpdate @ 0x1406701EC
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpGetKeyNodeForKcb @ 0x140644540 (CmpGetKeyNodeForKcb.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpKeyNodeNeedsAccessBitUpdate(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0;
}
