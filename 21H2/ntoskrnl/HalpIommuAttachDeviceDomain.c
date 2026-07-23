/*
 * XREFs of HalpIommuAttachDeviceDomain @ 0x1404CBE90
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x1404C9AFC (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9BD4 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuAttachDeviceDomain(__int64 a1, __int64 a2, __int64 a3)
{
  if ( HalpHvIommu )
    return 3221225659LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16), a2, a3, 0LL);
}
