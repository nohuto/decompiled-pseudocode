/*
 * XREFs of MiDecrementVadsBeingDeleted @ 0x14057FFF4
 * Callers:
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall MiDecrementVadsBeingDeleted(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 232), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 256), 0, 0);
  return result;
}
