/*
 * XREFs of _NtGdiGetDhpdev@4 @ 0x21A5F4
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHdev@@YGPAUHDEV__@@PAU1@@Z @ 0x2165D3 (-ValidUmpdHdev@@YGPAUHDEV__@@PAU1@@Z.c)
 */

int __stdcall NtGdiGetDhpdev(struct PDEV *a1)
{
  int v1; // esi
  struct PDEV *v2; // eax

  v1 = 0;
  v2 = ValidUmpdHdev(a1);
  if ( v2 )
  {
    a1 = v2;
    v1 = *((_DWORD *)v2 + 277);
    PDEVOBJ::vUnreferencePdev(&a1, 0);
  }
  return v1;
}
