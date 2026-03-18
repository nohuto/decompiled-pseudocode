/*
 * XREFs of PopCheckSkipTick @ 0x1407BF2F0
 * Callers:
 *     PopNewProcessorCallback @ 0x1408DC530 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 0x20;
}
