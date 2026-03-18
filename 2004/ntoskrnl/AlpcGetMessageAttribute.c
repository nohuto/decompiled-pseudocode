/*
 * XREFs of AlpcGetMessageAttribute @ 0x1402DEB50
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402769F8 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1406A7884 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1402DEBF0 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
