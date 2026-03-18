/*
 * XREFs of ?vRop2FunctionE@@YGXPAK00K@Z @ 0xC6874
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vRop2FunctionE(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // edx
  unsigned int *v5; // ecx

  v4 = a4;
  if ( a4 )
  {
    v5 = a2;
    do
    {
      *(unsigned int *)((char *)v5 + (char *)a1 - (char *)a2) = *v5 | *(unsigned int *)((char *)v5
                                                                                      + (char *)a3
                                                                                      - (char *)a2);
      ++v5;
      --v4;
    }
    while ( v4 );
  }
}
