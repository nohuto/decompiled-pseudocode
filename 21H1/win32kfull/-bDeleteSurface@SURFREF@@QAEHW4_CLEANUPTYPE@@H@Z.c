/*
 * XREFs of ?bDeleteSurface@SURFREF@@QAEHW4_CLEANUPTYPE@@H@Z @ 0xF6E04
 * Callers:
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     ?vProfileDriver@PDEVOBJ@@QAEXXZ @ 0xE4A94 (-vProfileDriver@PDEVOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall SURFREF::bDeleteSurface(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = SURFACE::bDeleteSurface(*this, a2, a3);
  if ( result )
    *this = 0;
  return result;
}
