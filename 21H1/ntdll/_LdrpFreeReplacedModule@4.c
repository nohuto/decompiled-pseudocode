/*
 * XREFs of _LdrpFreeReplacedModule@4 @ 0x4B2F2697
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpFreeLoadContext@4 @ 0x4B2DDF0E (_LdrpFreeLoadContext@4.c)
 * Callees:
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpFreeLoadContext@4 @ 0x4B2DDF0E (_LdrpFreeLoadContext@4.c)
 */

_DWORD *__thiscall LdrpFreeReplacedModule(int this)
{
  LdrpFreeLoadContext(*(_DWORD **)(this + 92));
  *(_DWORD *)(this + 52) &= ~0x20u;
  *(_DWORD *)(this + 156) = 1;
  return LdrpDereferenceModule(this);
}
