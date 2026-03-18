/*
 * XREFs of ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C01574B0
 * Callers:
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015744C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004F890 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0157548 (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0157628 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall vSpPIDLockSpriteArea(__int64 a1, struct _RECTL *a2, void *a3, __int64 a4)
{
  SPRITERANGELOCK *v4; // rbp
  unsigned int v6; // edi
  struct SPRITE *i; // rcx
  struct SPRITE *v10; // rax
  struct SPRITE *v11; // rbx
  struct SPRITE *v13; // rax

  v4 = (SPRITERANGELOCK *)(a1 + 120);
  v6 = 0;
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(a1 + 120), (__int64)a2, (__int64)a3, a4);
  for ( i = *(struct SPRITE **)(a1 + 8); ; i = (struct SPRITE *)*((_QWORD *)v11 + 3) )
  {
    v10 = pSpFindInZForPidLock(i, a2);
    v11 = v10;
    if ( !v10 )
      break;
    v6 = SURFACE::Map(*((_QWORD *)v10 + 16) - 24LL, a3, 0LL);
    if ( v6 == 2 )
    {
      while ( 1 )
      {
        v13 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v11 + 4), a2);
        v11 = v13;
        if ( !v13 )
          break;
        SURFACE::bUnMap((SURFACE *)(*((_QWORD *)v13 + 16) - 24LL), a3, 0LL);
      }
      SPRITERANGELOCK::vUnlock(v4);
      return v6;
    }
  }
  return v6;
}
