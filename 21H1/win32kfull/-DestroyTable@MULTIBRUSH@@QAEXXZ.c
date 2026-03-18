/*
 * XREFs of ?DestroyTable@MULTIBRUSH@@QAEXXZ @ 0x20177C
 * Callers:
 *     _MulDestroyBrushInternal@4 @ 0x20689F (_MulDestroyBrushInternal@4.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIBRUSH::DestroyTable(MULTIBRUSH *this)
{
  int *v2; // esi
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  volatile signed __int32 *v6; // ecx

  if ( *((_DWORD *)this + 2) )
  {
    v2 = (int *)*((_DWORD *)this + 5);
    if ( v2 )
    {
      v3 = *v2;
      while ( v3 )
      {
        v4 = *((_DWORD *)this + 5);
        --v3;
        v5 = *(_DWORD *)(v4 + 8 * v3 + 4);
        if ( v5 )
        {
          if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 16), 0xFFFFFFFF) )
            RBRUSH::vFreeOrCacheRBrush(0);
          *(_DWORD *)(*((_DWORD *)this + 5) + 8 * v3 + 4) = 0;
          v4 = *((_DWORD *)this + 5);
        }
        v6 = *(volatile signed __int32 **)(v4 + 8 * v3 + 8);
        if ( v6 )
        {
          if ( !_InterlockedExchangeAdd(v6, 0xFFFFFFFF) )
            RBRUSH::vFreeOrCacheRBrush(1);
          *(_DWORD *)(*((_DWORD *)this + 5) + 8 * v3 + 8) = 0;
        }
      }
    }
  }
}
