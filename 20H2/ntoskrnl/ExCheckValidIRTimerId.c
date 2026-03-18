/*
 * XREFs of ExCheckValidIRTimerId @ 0x140380ED4
 * Callers:
 *     KeInitializeIRTimer @ 0x140380E80 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14076E778 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140002960[3 * a1]);
}
