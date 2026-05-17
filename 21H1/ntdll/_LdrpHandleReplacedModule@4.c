/*
 * XREFs of _LdrpHandleReplacedModule@4 @ 0x4B2E86A0
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpFreeLoadContext@4 @ 0x4B2DDF0E (_LdrpFreeLoadContext@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall LdrpHandleReplacedModule(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // edx

  result = this;
  if ( this )
  {
    v2 = this[23];
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 16) & 0x80000) == 0 && *(_DWORD **)(v2 + 32) != this )
      {
        result = *(_DWORD **)(v2 + 32);
        *(_DWORD *)(v2 + 32) = this;
      }
    }
  }
  return result;
}
