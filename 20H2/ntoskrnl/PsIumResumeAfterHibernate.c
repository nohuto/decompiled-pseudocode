/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14038D6DC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404FB6BC (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
