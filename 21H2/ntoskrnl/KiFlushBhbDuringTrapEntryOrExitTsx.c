/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140435980
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1404357C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14043598D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
