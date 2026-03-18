/*
 * XREFs of ?vSpDeleteExMirror@@YGXPAUHDEV__@@@Z @ 0x9E672
 * Callers:
 *     ?vSpDisableSprites@@YGXPAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x9E570 (-vSpDisableSprites@@YGXPAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     _GreEnableMirrorRendering@8 @ 0x1E3682 (_GreEnableMirrorRendering@8.c)
 * Callees:
 *     <none>
 */

void __thiscall vSpDeleteExMirror(SURFOBJ **this)
{
  if ( this && this[221] )
  {
    EngUnlockSurface(this[221]);
    if ( !HmgQueryAltLock(this[221]->hsurf) )
    {
      this[221][1].dhpdev = 0;
      EngDeleteSurface(this[221]->hsurf);
      this[221] = 0;
    }
  }
}
