/*
 * XREFs of HalpPrepareForBugcheck @ 0x1404BD580
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403793D4 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D0748 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A1FC = -1;
    qword_140C4A200 = 0LL;
    xmmword_140C4A1E8 = 0uLL;
    qword_140C4A2A8 = 0LL;
    dword_140C4A1E4 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C50758 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
