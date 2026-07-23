/*
 * XREFs of HalpIommuUpdatePageWalkCapability @ 0x1403A7444
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuUpdatePageWalkCapability()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = HalpIommuList;
  HalpIommuPageTableCacheCoherent = 1;
  while ( (__int64 *)v0 != &HalpIommuList )
  {
    result = *(_DWORD *)(v0 + 456) & 0x900;
    if ( (_DWORD)result == 256 )
    {
      HalpIommuPageTableCacheCoherent = 0;
      return result;
    }
    v0 = *(_QWORD *)v0;
  }
  return result;
}
