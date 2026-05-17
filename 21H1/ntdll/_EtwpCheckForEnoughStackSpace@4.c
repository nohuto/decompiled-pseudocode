/*
 * XREFs of _EtwpCheckForEnoughStackSpace@4 @ 0x4B381503
 * Callers:
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 * Callees:
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  char result; // al
  void *v1; // esp

  result = 1;
  v1 = alloca(1140);
  return result;
}
