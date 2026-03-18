/*
 * XREFs of AlpcGetMessageAttribute @ 0x14035CC60
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14033D078 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x14070EB24 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14035CD00 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
