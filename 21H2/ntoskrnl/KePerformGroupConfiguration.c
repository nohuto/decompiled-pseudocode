/*
 * XREFs of KePerformGroupConfiguration @ 0x140A4E3D8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiCommitNodeAssignment @ 0x1403B604C (KiCommitNodeAssignment.c)
 *     KiPerformGroupConfiguration @ 0x140A4EDCC (KiPerformGroupConfiguration.c)
 */

__int16 KePerformGroupConfiguration()
{
  byte_140D254F5 &= 0xF9u;
  byte_140D254F4 = 0;
  word_140C50D94 = 0;
  KiPerformGroupConfiguration();
  return KiCommitNodeAssignment((__int64)&ExNode0);
}
