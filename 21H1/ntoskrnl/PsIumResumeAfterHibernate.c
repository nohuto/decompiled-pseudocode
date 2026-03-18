/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14038A32C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404F77DC (VslRegisterLogPages.c)
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
