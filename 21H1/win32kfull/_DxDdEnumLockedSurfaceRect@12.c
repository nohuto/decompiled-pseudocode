/*
 * XREFs of _DxDdEnumLockedSurfaceRect@12 @ 0x1D3850
 * Callers:
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall DxDdEnumLockedSurfaceRect(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)(a1 + 1864);
  if ( !a2 )
    a2 = v3;
  while ( 1 )
  {
    a2 = (_DWORD *)*a2;
    if ( a2 == v3 )
      break;
    if ( a2[3] )
    {
      *a3 = a2[5];
      a3[1] = a2[6];
      a3[2] = a2[7];
      a3[3] = a2[8];
      return a2;
    }
  }
  return 0;
}
