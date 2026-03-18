/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x14057B8EC
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407061B0 (SleepstudyHelperBuildBlocker.c)
 *     SshpSendSessionData @ 0x1408F78E8 (SshpSendSessionData.c)
 *     SshpWnfCallback @ 0x1408F8790 (SshpWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
