/*
 * XREFs of SmCrGenRandom @ 0x14059E720
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14092E2A4 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14092F960 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x140594144 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
