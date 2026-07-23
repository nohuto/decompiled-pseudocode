/*
 * XREFs of ExCheckValidIRTimerId @ 0x140380F84
 * Callers:
 *     KeInitializeIRTimer @ 0x140380F30 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x140772AA8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140005300[3 * a1]);
}
