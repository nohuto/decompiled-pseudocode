/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14038B39C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404F7E2C (VslRegisterLogPages.c)
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
