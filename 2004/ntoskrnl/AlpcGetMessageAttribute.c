/*
 * XREFs of AlpcGetMessageAttribute @ 0x1402DEB50
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402769F8 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1406A7884 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1402DEBF0 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
