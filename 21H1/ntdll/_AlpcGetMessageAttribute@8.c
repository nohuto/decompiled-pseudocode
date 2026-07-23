/*
 * XREFs of _AlpcGetMessageAttribute@8 @ 0x4B2E9EA0
 * Callers:
 *     <none>
 * Callees:
 *     _AlpcGetHeaderSize@4 @ 0x4B2E9EE0 (_AlpcGetHeaderSize@4.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (AttributeFlag & Buffer->AllocatedAttributes) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
