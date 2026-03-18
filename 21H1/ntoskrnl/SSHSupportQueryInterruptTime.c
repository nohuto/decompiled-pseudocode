/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x14057B2AC
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1406E2A60 (SleepstudyHelperBuildBlocker.c)
 *     SshpSendSessionData @ 0x1408F65F8 (SshpSendSessionData.c)
 *     SshpWnfCallback @ 0x1408F74A0 (SshpWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
