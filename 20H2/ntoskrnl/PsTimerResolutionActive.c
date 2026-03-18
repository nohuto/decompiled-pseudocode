/*
 * XREFs of PsTimerResolutionActive @ 0x140247924
 * Callers:
 *     KeSetTimerEx @ 0x1402476E0 (KeSetTimerEx.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x1402E01F0 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14035682C (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
