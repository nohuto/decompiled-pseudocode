/*
 * XREFs of HalpPrepareForBugcheck @ 0x1404C26B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D58F8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A1BC = -1;
    qword_140C4A1C0 = 0LL;
    xmmword_140C4A1A8 = 0uLL;
    qword_140C4A268 = 0LL;
    dword_140C4A1A4 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C50998 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
