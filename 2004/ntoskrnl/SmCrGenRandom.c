/*
 * XREFs of SmCrGenRandom @ 0x14059AC80
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14092847C (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x140929B38 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1405906A4 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
