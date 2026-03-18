/*
 * XREFs of ?vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z @ 0xA00C0
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 *     ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56 (-vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 */

void __thiscall vSpRemoveAllSpriteOverlapPresents(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  struct _CLIPOBJ *v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-4h]

  v1 = this + 16;
  v2 = 0;
  v3 = this[29];
  v7 = 0;
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( !v2 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)(v1 + 5), 0, (struct _RECTL *)1, v5, v6);
        v7 = 1;
      }
      Win32FreePool(v3);
      v2 = v7;
      v3 = v4;
    }
    while ( v4 );
  }
  v1[13] = 0;
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)v5, v6);
}
