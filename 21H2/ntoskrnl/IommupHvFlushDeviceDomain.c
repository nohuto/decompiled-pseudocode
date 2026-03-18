/*
 * XREFs of IommupHvFlushDeviceDomain @ 0x140527584
 * Callers:
 *     HalpIommuDomainUnmapLogicalRange @ 0x14051AD44 (HalpIommuDomainUnmapLogicalRange.c)
 *     IommuFlushDomain @ 0x140528380 (IommuFlushDomain.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvFlushDeviceDomain(int a1, char a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( !a2 )
    return 3221225659LL;
  LODWORD(v3) = a1;
  BYTE4(v3) = a2;
  return ((__int64 (__fastcall *)(__int64 *))qword_140C4C668)(&v3);
}
