/*
 * XREFs of KiAbTryDecrementIoWaiterCounts @ 0x14020C9C8
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbTryDecrementIoWaiterCounts(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a1 + 27);
  if ( (result & 2) != 0 )
  {
    *(_WORD *)(a2 + 90) ^= (*(_WORD *)(a2 + 90) ^ (2 * ((*(_WORD *)(a2 + 90) >> 1) - 1))) & 0x1FE;
    *(_BYTE *)(a1 + 27) &= ~2u;
    result = *(_BYTE *)(a1 + 27);
  }
  if ( (result & 4) != 0 )
  {
    *(_WORD *)(a2 + 90) = *(_WORD *)(a2 + 90) & 0x1FF | (((*(_WORD *)(a2 + 90) >> 9) - 1) << 9);
    result = *(_BYTE *)(a1 + 27) & 0xFB;
    *(_BYTE *)(a1 + 27) = result;
  }
  return result;
}
