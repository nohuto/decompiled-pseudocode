/*
 * XREFs of HalpPrepareForBugcheck @ 0x1404C0AA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037B104 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D3CE8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A25C = -1;
    qword_140C4A260 = 0LL;
    xmmword_140C4A248 = 0uLL;
    qword_140C4A308 = 0LL;
    dword_140C4A244 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C507D8 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
