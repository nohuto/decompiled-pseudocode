/*
 * XREFs of ?vRop2Function4@@YGXPAK00K@Z @ 0x2492A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vRop2Function4(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int *v5; // edx

  v4 = a4;
  if ( a4 )
  {
    v5 = a2;
    do
    {
      *(unsigned int *)((char *)v5 + (char *)a1 - (char *)a2) = ~*v5 & *(unsigned int *)((char *)v5
                                                                                       + (char *)a3
                                                                                       - (char *)a2);
      ++v5;
      --v4;
    }
    while ( v4 );
  }
}
