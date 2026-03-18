/*
 * XREFs of sub_140792698 @ 0x140792698
 * Callers:
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140792454 (ExpLoadAndSortLicensingCacheDescriptors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140792698(unsigned int **a1)
{
  unsigned int *v1; // rax
  unsigned int v2; // ecx
  unsigned int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // r10d
  unsigned int v6; // r9d

  v1 = *a1;
  v2 = 0;
  if ( v1 )
  {
    if ( v1[16385] != 3 )
      return (unsigned int)-1073741762;
    v3 = v1[0x4000];
    if ( v3 < 0x18 )
      return (unsigned int)-1073741762;
    v4 = *v1;
    if ( v3 < *v1 )
      return (unsigned int)-1073741762;
    if ( v4 < 0x18 )
      return (unsigned int)-1073741762;
    v5 = v1[1];
    if ( v3 < v5 )
      return (unsigned int)-1073741762;
    if ( v4 < v5 )
      return (unsigned int)-1073741762;
    v6 = v1[2];
    if ( v3 < v6 || v4 < v6 || v6 + v5 > v4 )
      return (unsigned int)-1073741762;
  }
  return v2;
}
