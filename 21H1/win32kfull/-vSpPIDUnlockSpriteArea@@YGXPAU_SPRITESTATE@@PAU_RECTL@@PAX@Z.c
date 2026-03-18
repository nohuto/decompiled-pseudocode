/*
 * XREFs of ?vSpPIDUnlockSpriteArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@PAX@Z @ 0x1E1963
 * Callers:
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ @ 0xAED46 (-vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ.c)
 * Callees:
 *     ?pSpReverseFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0x1DF531 (-pSpReverseFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 */

void __userpurge vSpPIDUnlockSpriteArea(
        struct _RECTL *a1@<edx>,
        int a2@<ecx>,
        struct _SPRITESTATE *a3,
        struct _RECTL *a4,
        void *a5)
{
  struct _RECTL *v6; // ebx
  struct SPRITE *v7; // ecx
  struct SPRITE *v8; // eax
  struct SPRITE *v9; // edi

  v6 = a1;
  v7 = *(struct SPRITE **)(a2 + 8);
  while ( 1 )
  {
    v8 = pSpReverseFindInZForPidLock(v7, a1);
    v9 = v8;
    if ( !v8 )
      break;
    SURFACE::bUnMap((SURFACE *)(*((_DWORD *)v8 + 22) - 16), a3, 0);
    v7 = (struct SPRITE *)*((_DWORD *)v9 + 5);
    a1 = v6;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(a2 + 88));
  GreReleaseSemaphoreInternal(*(_DWORD *)(a2 + 88));
}
