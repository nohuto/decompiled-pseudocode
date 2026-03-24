/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140413D40
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_140413D4D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
