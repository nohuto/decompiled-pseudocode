/*
 * XREFs of PsTimerResolutionActive @ 0x1402FF9E0
 * Callers:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     KeSetTimerEx @ 0x140269FA0 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x1402C06EC (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
