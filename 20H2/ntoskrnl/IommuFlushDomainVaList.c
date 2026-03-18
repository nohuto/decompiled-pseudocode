/*
 * XREFs of IommuFlushDomainVaList @ 0x140868BE0
 * Callers:
 *     <none>
 * Callees:
 *     xKdEnumerateDebuggingDevices @ 0x1403CFAD0 (xKdEnumerateDebuggingDevices.c)
 */

__int64 __fastcall IommuFlushDomainVaList(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 44) )
    return 3221225711LL;
  if ( HalpHvIommu )
    return xKdEnumerateDebuggingDevices();
  return 3221225474LL;
}
