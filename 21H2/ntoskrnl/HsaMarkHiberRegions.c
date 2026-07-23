/*
 * XREFs of HsaMarkHiberRegions @ 0x1409ABA60
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuExtMarkHiberMemory @ 0x1404CC060 (HalpIommuExtMarkHiberMemory.c)
 */

void __fastcall HsaMarkHiberRegions(void *a1, __int64 a2, __int64 ***a3)
{
  __int64 **i; // rbx
  unsigned int v5; // ebp
  void **v6; // rsi

  if ( a1 )
  {
    HalpIommuExtMarkHiberMemory(a1, (void *)(a2 + 152), 8u);
  }
  else
  {
    for ( i = *a3; i != (__int64 **)a3; i = (__int64 **)*i )
    {
      HalpIommuExtMarkHiberMemory(0LL, i[5], 0x2000u);
      v5 = 0;
      v6 = (void **)(i[5] + 512);
      do
      {
        if ( (*(_BYTE *)(v6 - 512) & 1) == 0 )
          break;
        HalpIommuExtMarkHiberMemory(0LL, *v6, 0x1000u);
        ++v5;
        ++v6;
      }
      while ( v5 < 0x200 );
    }
  }
}
