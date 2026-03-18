/*
 * XREFs of ?vSpHideSprites@@YGXPAUHDEV__@@H@Z @ 0xACFC2
 * Callers:
 *     _GreHideSprites@8 @ 0xACF96 (_GreHideSprites@8.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vSpHook@@YGXPAU_SPRITESTATE@@@Z @ 0x9E9AC (-vSpHook@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?vSpUnhook@@YGXPAU_SPRITESTATE@@@Z @ 0xAD018 (-vSpUnhook@@YGXPAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHideSprites(int a1, int a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  struct _SPRITESTATE *v9; // [esp+0h] [ebp-88h]
  int v10; // [esp+4h] [ebp-84h]
  _BYTE v11[116]; // [esp+10h] [ebp-78h] BYREF
  int v12; // [esp+84h] [ebp-4h] BYREF

  v12 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v12);
  v3 = v12;
  v4 = *(_DWORD *)(v12 + 68);
  if ( v4 )
  {
    do
    {
      v6 = *(_DWORD *)(v4 + 16);
      v7 = *(_DWORD *)v4;
      if ( a2 )
        v8 = v7 | 0x10;
      else
        v8 = v7 & 0xFFFFFFEF;
      *(_DWORD *)v4 = v8;
      bSpUpdatePosition((struct _SURFOBJ *)(v4 + 76), (int *)v4, 0, (struct _POINTL *)1, (int)v9, v10);
      v4 = v6;
    }
    while ( v6 );
  }
  v5 = *(_DWORD *)(v3 + 736);
  if ( a2 )
  {
    if ( v5 )
      vSpUnhook(v9);
  }
  else if ( !v5 )
  {
    vSpHook((_DWORD *)(v3 + 64));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v11);
}
