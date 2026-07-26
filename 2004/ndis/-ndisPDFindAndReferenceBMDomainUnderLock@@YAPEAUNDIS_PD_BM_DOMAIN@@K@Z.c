/*
 * XREFs of ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x1C011D1E0
 * Callers:
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00FF17C (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct NDIS_PD_BM_DOMAIN *__fastcall ndisPDFindAndReferenceBMDomainUnderLock(int a1)
{
  _QWORD *i; // rdx
  struct NDIS_PD_BM_DOMAIN *result; // rax

  for ( i = *(_QWORD **)(qword_1C00E4538 + 8240); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(qword_1C00E4538 + 8240) )
      return 0LL;
    result = (struct NDIS_PD_BM_DOMAIN *)(i - 1);
    if ( *((_DWORD *)i + 4) == a1 )
      break;
  }
  ++*(_DWORD *)result;
  return result;
}
