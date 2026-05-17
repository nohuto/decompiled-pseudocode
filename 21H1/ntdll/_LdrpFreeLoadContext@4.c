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

int __thiscall LdrpFreeLoadContext(_DWORD *this)
{
  int result; // eax
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // eax

  *(_DWORD *)(this[8] + 92) = 0;
  if ( this[11] )
  {
    if ( LdrpHandleReplacedModule() != this[11] )
      LdrpFreeReplacedModule();
    this[11] = 0;
  }
  result = this[12];
  if ( result )
  {
    v3 = 0;
    if ( this[13] )
    {
      do
      {
        v4 = *(_DWORD *)(this[12] + 4 * v3);
        if ( v4 )
        {
          v5 = *(_DWORD *)(v4 + 92);
          if ( v5 )
          {
            if ( (*(_DWORD *)(v5 + 16) & 0x80000) == 0 && *(_DWORD *)(v5 + 32) != v4 )
            {
              *(_DWORD *)(v5 + 32) = v4;
              LdrpFreeReplacedModule();
            }
          }
        }
        ++v3;
      }
      while ( v3 < this[13] );
      result = this[12];
    }
    result = RtlFreeHeap(LdrpHeap, 0, result);
  }
  if ( (this[4] & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, (int)this);
  return result;
}
