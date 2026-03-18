/*
 * XREFs of ?vRestorePath@@YGXAAVXDCOBJ@@J@Z @ 0x1E6350
 * Callers:
 *     _GreSaveDCInternal@8 @ 0xF7458 (_GreSaveDCInternal@8.c)
 * Callees:
 *     <none>
 */

void __stdcall vRestorePath(DC **a1, int a2)
{
  DC *v2; // ecx
  int v3; // eax

  v2 = *a1;
  if ( *((_DWORD *)*a1 + 34) )
  {
    v3 = *((_DWORD *)v2 + 43);
    if ( (v3 & 2) == 0 )
    {
      *((_DWORD *)v2 + 43) = v3 & 0xFFFFFFFE;
      DC::hpath(v2, 0);
    }
  }
}
