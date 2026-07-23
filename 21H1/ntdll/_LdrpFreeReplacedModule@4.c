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

int *__thiscall LdrpFreeReplacedModule(char *BaseAddress)
{
  LdrpFreeLoadContext(*((_DWORD **)BaseAddress + 23));
  *((_DWORD *)BaseAddress + 13) &= ~0x20u;
  *((_DWORD *)BaseAddress + 39) = 1;
  return LdrpDereferenceModule(BaseAddress);
}
