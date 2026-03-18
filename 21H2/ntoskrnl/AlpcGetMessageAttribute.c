/*
 * XREFs of AlpcGetMessageAttribute @ 0x14036A1D0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14036AF00 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1407EFAD0 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14081AE90 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14036A270 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
