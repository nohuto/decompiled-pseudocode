/*
 * XREFs of ?vRop2Function3@@YGXPAK00K@Z @ 0x24927D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vRop2Function3(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // edx
  unsigned int *v5; // ecx

  v4 = a4;
  if ( a4 )
  {
    v5 = a3;
    do
    {
      *(unsigned int *)((char *)v5 + (char *)a1 - (char *)a3) = ~*v5;
      ++v5;
      --v4;
    }
    while ( v4 );
  }
}
