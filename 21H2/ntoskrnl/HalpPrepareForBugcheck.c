/*
 * XREFs of HalpPrepareForBugcheck @ 0x1404C2470
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037B354 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D56B8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A17C = -1;
    qword_140C4A180 = 0LL;
    xmmword_140C4A168 = 0uLL;
    qword_140C4A228 = 0LL;
    dword_140C4A164 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C50958 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
