/*
 * XREFs of ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0159F0C
 * Callers:
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00852F0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0159F88 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpPIDUnlockSpriteArea(struct _SPRITESTATE *a1, struct _RECTL *a2, void *a3)
{
  struct SPRITE *v5; // rcx
  struct _RECTL *i; // rsi
  struct SPRITE *v7; // rax
  struct SPRITE *v8; // rbx

  v5 = (struct SPRITE *)*((_QWORD *)a1 + 2);
  for ( i = a2; ; a2 = i )
  {
    v7 = pSpReverseFindInZForPidLock(v5, a2);
    v8 = v7;
    if ( !v7 )
      break;
    SURFACE::bUnMap((SURFACE *)(*((_QWORD *)v7 + 16) - 24LL), a3, 0LL);
    v5 = (struct SPRITE *)*((_QWORD *)v8 + 4);
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 120));
}
