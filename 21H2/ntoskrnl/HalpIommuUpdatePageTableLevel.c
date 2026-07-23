/*
 * XREFs of HalpIommuUpdatePageTableLevel @ 0x1403A7414
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

void HalpIommuUpdatePageTableLevel()
{
  __int64 i; // rcx
  unsigned int v1; // eax
  unsigned int v2; // eax

  HalpIommuMaxPageTableDepth = 0;
  HalpIommuMinPageTableDepth = -1;
  for ( i = HalpIommuList; (__int64 *)i != &HalpIommuList; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 456);
    if ( (v1 & 0x100) != 0 )
    {
      v2 = ((v1 >> 12) & 7) + 1;
      if ( v2 > HalpIommuMaxPageTableDepth )
        HalpIommuMaxPageTableDepth = v2;
      if ( v2 < HalpIommuMinPageTableDepth )
        HalpIommuMinPageTableDepth = v2;
    }
  }
}
