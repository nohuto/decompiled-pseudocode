/*
 * XREFs of ExCheckValidIRTimerId @ 0x1403725F4
 * Callers:
 *     KeInitializeIRTimer @ 0x1403725A0 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x1407F40A8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140003350[3 * a1]);
}
