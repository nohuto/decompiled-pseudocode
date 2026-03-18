/*
 * XREFs of IommuFlushDomain @ 0x140528380
 * Callers:
 *     <none>
 * Callees:
 *     IommupHvFlushDeviceDomain @ 0x140527584 (IommupHvFlushDeviceDomain.c)
 */

__int64 __fastcall IommuFlushDomain(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( HalpHvIommu )
    return IommupHvFlushDeviceDomain(*(_DWORD *)(a1 + 48), *(_BYTE *)(a1 + 52));
  return 3221225474LL;
}
