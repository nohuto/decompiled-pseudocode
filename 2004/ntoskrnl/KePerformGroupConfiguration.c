/*
 * XREFs of KePerformGroupConfiguration @ 0x140A45B98
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiCommitNodeAssignment @ 0x1403B1EEC (KiCommitNodeAssignment.c)
 *     KiPerformGroupConfiguration @ 0x140A46590 (KiPerformGroupConfiguration.c)
 */

__int16 KePerformGroupConfiguration()
{
  byte_140D254F5 &= 0xF9u;
  byte_140D254F4 = 0;
  word_140C50B3C = 0;
  KiPerformGroupConfiguration();
  return KiCommitNodeAssignment((__int64)&ExNode0);
}
