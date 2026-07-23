/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140413E40
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_140413E4D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
