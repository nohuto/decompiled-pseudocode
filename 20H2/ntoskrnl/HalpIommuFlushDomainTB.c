/*
 * XREFs of HalpIommuFlushDomainTB @ 0x1404CA48C
 * Callers:
 *     HalpIommuFlushDmaDomain @ 0x1404C7AB8 (HalpIommuFlushDmaDomain.c)
 *     HalpIommuFreeDomain @ 0x1404CA4CC (HalpIommuFreeDomain.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuFlushDomainTB(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( HalpHvIommu )
    return 3221225659LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a1 + 128))(*(_QWORD *)(a1 + 16), a2, 0LL, a3, a4);
  return 0LL;
}
