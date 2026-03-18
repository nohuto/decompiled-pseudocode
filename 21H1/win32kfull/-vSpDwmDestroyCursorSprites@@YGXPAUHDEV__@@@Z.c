/*
 * XREFs of ?vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z @ 0xD07F2
 * Callers:
 *     _DwmDestroyDeviceSpecificResources@4 @ 0xB0AC4 (_DwmDestroyDeviceSpecificResources@4.c)
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6 (-GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z.c)
 *     ?hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z @ 0xA5C84 (-hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z.c)
 */

void __thiscall vSpDwmDestroyCursorSprites(struct PDEVOBJ *this)
{
  HDEV v2; // edi
  int NeighborSprite; // esi
  bool v4; // [esp+0h] [ebp-Ch]
  void *v5; // [esp+0h] [ebp-Ch]
  bool v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+4h] [ebp-8h]

  v2 = (HDEV)*((_DWORD *)g_pDwmState + 20);
  if ( v2 )
  {
    do
    {
      NeighborSprite = hspGetNeighborSprite(1, (int)v2, 0, v4, v6);
      GreDeleteSpriteInternal(0, this, v2, (HWND)1, v5, v7);
      v2 = (HDEV)NeighborSprite;
    }
    while ( NeighborSprite );
  }
  *((_DWORD *)g_pDwmState + 19) = 0;
  *((_DWORD *)g_pDwmState + 20) = 0;
  *((_DWORD *)g_pDwmState + 23) = 0;
}
