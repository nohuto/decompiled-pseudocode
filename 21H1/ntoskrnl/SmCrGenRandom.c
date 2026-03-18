/*
 * XREFs of SmCrGenRandom @ 0x14059A590
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1409271CC (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x140928888 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x14058FFB4 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
