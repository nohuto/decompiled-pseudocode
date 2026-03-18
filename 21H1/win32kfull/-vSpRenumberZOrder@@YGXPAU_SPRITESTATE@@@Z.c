/*
 * XREFs of ?vSpRenumberZOrder@@YGXPAU_SPRITESTATE@@@Z @ 0xA0A14
 * Callers:
 *     ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136 (-pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z.c)
 *     ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56 (-vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vSpRenumberZOrder(_DWORD *this)
{
  int v1; // eax
  int v2; // edx

  v1 = this[1];
  v2 = 0;
  while ( v1 )
  {
    *(_DWORD *)(v1 + 36) = v2++;
    v1 = *(_DWORD *)(v1 + 16);
  }
}
