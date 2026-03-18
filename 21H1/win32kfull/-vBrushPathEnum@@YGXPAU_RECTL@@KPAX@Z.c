/*
 * XREFs of ?vBrushPathEnum@@YGXPAU_RECTL@@KPAX@Z @ 0x23A503
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vBrushPathEnum(struct _RECTL *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // esi
  char *v5; // eax

  v3 = a2;
  if ( a2 )
  {
    v5 = (char *)(a3 + 2);
    do
    {
      a3[6] = a1++;
      ((void (__stdcall *)(char *))*a3)(v5);
      v5 = (char *)(a3 + 2);
      --v3;
    }
    while ( v3 );
  }
}
