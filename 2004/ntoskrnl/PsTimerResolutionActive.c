/*
 * XREFs of PsTimerResolutionActive @ 0x14033C2E0
 * Callers:
 *     KeSetTimerEx @ 0x140210F50 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x1402676BC (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1402818D0 (KiTimerWaitTest.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
