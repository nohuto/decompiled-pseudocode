/*
 * XREFs of PopCheckSkipTick @ 0x1407D55E0
 * Callers:
 *     PopNewProcessorCallback @ 0x1408E1000 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 0x20;
}
