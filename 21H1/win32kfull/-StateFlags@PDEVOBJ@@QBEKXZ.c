/*
 * XREFs of ?StateFlags@PDEVOBJ@@QBEKXZ @ 0x1D37A5
 * Callers:
 *     _DxgkEngDetectGDIPath@16 @ 0x1D42D7 (_DxgkEngDetectGDIPath@16.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall PDEVOBJ::StateFlags(PDEVOBJ *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_DWORD *)this + 1832);
  if ( !v1 || v1 == -4 )
    return 0;
  else
    return *(_DWORD *)(v1 + 144);
}
