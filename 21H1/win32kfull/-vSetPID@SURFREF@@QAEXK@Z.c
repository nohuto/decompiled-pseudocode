/*
 * XREFs of ?vSetPID@SURFREF@@QAEXK@Z @ 0xF5D18
 * Callers:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 * Callees:
 *     <none>
 */

void __thiscall SURFREF::vSetPID(SURFREF *this, unsigned int a2)
{
  HmgSetOwner(*(_DWORD *)(*(_DWORD *)this + 20), a2, 5);
}
