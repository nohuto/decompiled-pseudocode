/*
 * XREFs of HalpPrepareForBugcheck @ 0x1404BCEA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140378614 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D0298 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A35C = -1;
    qword_140C4A360 = 0LL;
    xmmword_140C4A348 = 0uLL;
    qword_140C4A408 = 0LL;
    dword_140C4A344 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C50898 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
