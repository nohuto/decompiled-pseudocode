/*
 * XREFs of MiDecrementVadsBeingDeleted @ 0x140525B54
 * Callers:
 *     MiFinishPlaceholderVadReplacement @ 0x1408D3A38 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall MiDecrementVadsBeingDeleted(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 232), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 264), 0, 0);
  return result;
}
