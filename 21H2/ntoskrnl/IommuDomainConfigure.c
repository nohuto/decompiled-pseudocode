/*
 * XREFs of IommuDomainConfigure @ 0x1408668C0
 * Callers:
 *     <none>
 * Callees:
 *     xKdEnumerateDebuggingDevices @ 0x1403D05B0 (xKdEnumerateDebuggingDevices.c)
 */

__int64 __fastcall IommuDomainConfigure(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 44) )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  if ( HalpHvParaVirtIommuDomain )
    return xKdEnumerateDebuggingDevices();
  return 3221225659LL;
}
