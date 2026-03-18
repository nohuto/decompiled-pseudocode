/*
 * XREFs of ?vSpDisableSprites@@YGXPAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x9E570
 * Callers:
 *     _vSpDisableSpritesWrap@8 @ 0x9E55C (_vSpDisableSpritesWrap@8.c)
 * Callees:
 *     ?vSpDeleteExMirror@@YGXPAUHDEV__@@@Z @ 0x9E672 (-vSpDeleteExMirror@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void *__fastcall vSpDisableSprites(int a1, int a2)
{
  int v2; // edi
  int v4; // ecx
  REGION *v5; // ecx
  REGION *v6; // ecx
  REGION *v7; // ecx
  int v9; // esi
  struct SPRITE *v10; // [esp+0h] [ebp-18h]
  struct _SURFOBJ *v11; // [esp+0h] [ebp-18h]
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  v2 = a1 + 64;
  v4 = *(_DWORD *)(a1 + 772);
  *(_DWORD *)(v2 + 704) = 0;
  *(_DWORD *)(v2 + 708) = 0;
  *(_DWORD *)(v2 + 676) = 0;
  if ( v4 )
  {
    do
    {
      v9 = *(_DWORD *)(v4 + 16);
      vSpDeleteSprite(v10);
      v4 = v9;
    }
    while ( v9 );
  }
  vSpDeleteExMirror((HDEV)v10);
  if ( a2 != 2 )
    vSpDeleteSurface(v11);
  v14 = *(_DWORD *)(v2 + 380);
  v13 = *(_DWORD *)(v2 + 384);
  v12 = *(_DWORD *)(v2 + 512);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
  GreDeleteObject(*(_DWORD *)(v2 + 656));
  if ( *(_DWORD *)(v2 + 96) )
    Win32FreePool(*(_DWORD *)(v2 + 96));
  if ( *(_DWORD *)(v2 + 44) )
    EngFreeMem(*(PVOID *)(v2 + 44));
  v5 = *(REGION **)(v2 + 644);
  if ( v5 )
    REGION::vDeleteREGION(v5);
  v6 = *(REGION **)(v2 + 648);
  if ( v6 )
    REGION::vDeleteREGION(v6);
  v7 = *(REGION **)(v2 + 652);
  if ( v7 )
    REGION::vDeleteREGION(v7);
  if ( *(_DWORD *)(v2 + 88) )
    GreDeleteSemaphore(*(_DWORD *)(v2 + 88));
  if ( *(_DWORD *)(v2 + 92) )
    GreDeleteSemaphore(*(_DWORD *)(v2 + 92));
  return memset((void *)v2, 0, 0x340u);
}
