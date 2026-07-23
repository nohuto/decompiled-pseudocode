/*
 * XREFs of AlpcGetMessageAttribute @ 0x14035CC60
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14033D078 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x14070EB24 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14035CD00 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
