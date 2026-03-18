/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x14057F31C
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1406D91A0 (SleepstudyHelperBuildBlocker.c)
 *     SshpSendSessionData @ 0x1408FD4F8 (SshpSendSessionData.c)
 *     SshpWnfCallback @ 0x1408FE3A0 (SshpWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
