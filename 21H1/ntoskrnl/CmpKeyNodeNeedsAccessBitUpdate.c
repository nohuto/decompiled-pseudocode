/*
 * XREFs of CmpKeyNodeNeedsAccessBitUpdate @ 0x1405F814C
 * Callers:
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpKeyNodeNeedsAccessBitUpdate(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0;
}
