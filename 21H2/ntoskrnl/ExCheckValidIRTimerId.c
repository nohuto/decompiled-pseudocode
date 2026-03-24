/*
 * XREFs of ExCheckValidIRTimerId @ 0x140381434
 * Callers:
 *     KeInitializeIRTimer @ 0x1403813E0 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x1407728E8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140005350[3 * a1]);
}
