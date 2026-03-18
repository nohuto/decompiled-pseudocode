/*
 * XREFs of KePerformGroupConfiguration @ 0x140A4BE38
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiCommitNodeAssignment @ 0x1403B485C (KiCommitNodeAssignment.c)
 *     KiPerformGroupConfiguration @ 0x140A4C82C (KiPerformGroupConfiguration.c)
 */

__int16 KePerformGroupConfiguration()
{
  byte_140D254F5 &= 0xF9u;
  byte_140D254F4 = 0;
  word_140C50BCC = 0;
  KiPerformGroupConfiguration();
  return KiCommitNodeAssignment((__int64)&ExNode0);
}
