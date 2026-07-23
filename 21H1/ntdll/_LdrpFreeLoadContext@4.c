/*
 * XREFs of _LdrpFreeLoadContext@4 @ 0x4B2DDF0E
 * Callers:
 *     _LdrpFreeLoadContextOfNode@8 @ 0x4B2DDEB6 (_LdrpFreeLoadContextOfNode@8.c)
 *     _LdrpFreeReplacedModule@4 @ 0x4B2F2697 (_LdrpFreeReplacedModule@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpHandleReplacedModule@4 @ 0x4B2E86A0 (_LdrpHandleReplacedModule@4.c)
 *     _LdrpFreeReplacedModule@4 @ 0x4B2F2697 (_LdrpFreeReplacedModule@4.c)
 */

void *__thiscall LdrpFreeLoadContext(_DWORD *BaseAddress)
{
  void *result; // eax
  unsigned int v3; // edi
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // eax
  void *v7; // ecx

  *(_DWORD *)(BaseAddress[8] + 92) = 0;
  if ( BaseAddress[11] )
  {
    v6 = LdrpHandleReplacedModule();
    v7 = (void *)BaseAddress[11];
    if ( (void *)v6 != v7 )
      LdrpFreeReplacedModule(v7);
    BaseAddress[11] = 0;
  }
  result = (void *)BaseAddress[12];
  if ( result )
  {
    v3 = 0;
    if ( BaseAddress[13] )
    {
      do
      {
        v4 = *(_DWORD **)(BaseAddress[12] + 4 * v3);
        if ( v4 )
        {
          v5 = v4[23];
          if ( v5 )
          {
            if ( (*(_DWORD *)(v5 + 16) & 0x80000) == 0 && *(_DWORD **)(v5 + 32) != v4 )
            {
              *(_DWORD *)(v5 + 32) = v4;
              LdrpFreeReplacedModule(v4);
            }
          }
        }
        ++v3;
      }
      while ( v3 < BaseAddress[13] );
      result = (void *)BaseAddress[12];
    }
    result = (void *)RtlFreeHeap(LdrpHeap, 0, result);
  }
  if ( (BaseAddress[4] & 0x8000) != 0 )
    return (void *)RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return result;
}
