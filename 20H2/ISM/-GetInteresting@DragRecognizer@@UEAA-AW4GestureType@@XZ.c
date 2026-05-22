/*
 * XREFs of ?GetInteresting@DragRecognizer@@UEAA?AW4GestureType@@XZ @ 0x180184D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragRecognizer::GetInteresting(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 30) & 8) != 0 )
    return *(unsigned int *)(a1 + 72);
  else
    return 0LL;
}
