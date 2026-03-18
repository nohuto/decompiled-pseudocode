/*
 * XREFs of ExCheckValidIRTimerId @ 0x14037E7B4
 * Callers:
 *     KeInitializeIRTimer @ 0x14037E760 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14075DDF8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140002870[3 * a1]);
}
