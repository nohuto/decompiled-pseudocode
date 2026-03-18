/*
 * XREFs of ExCheckValidIRTimerId @ 0x14037F1A4
 * Callers:
 *     KeInitializeIRTimer @ 0x14037F150 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x140760128 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140002A40[3 * a1]);
}
