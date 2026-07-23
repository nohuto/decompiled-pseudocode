/*
 * XREFs of _RtlDllShutdownInProgress@0 @ 0x4B2DF490
 * Callers:
 *     _RtlUnsubscribeWnfNotificationWaitForCompletion@4 @ 0x4B2DE9B0 (_RtlUnsubscribeWnfNotificationWaitForCompletion@4.c)
 *     _RtlResetNtUserPfn@0 @ 0x4B2F4970 (_RtlResetNtUserPfn@0.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_4B3A5DA8 != 0;
}
