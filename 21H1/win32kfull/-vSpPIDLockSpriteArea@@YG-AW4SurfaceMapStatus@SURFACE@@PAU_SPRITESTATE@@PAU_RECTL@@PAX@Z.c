/*
 * XREFs of ?vSpPIDLockSpriteArea@@YG?AW4SurfaceMapStatus@SURFACE@@PAU_SPRITESTATE@@PAU_RECTL@@PAX@Z @ 0x1E18AF
 * Callers:
 *     ?vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1DFB7F (-vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ?pSpFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0x1DF3C3 (-pSpFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0x1DF531 (-pSpReverseFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 */

int __fastcall vSpPIDLockSpriteArea(int a1, struct _RECTL *a2, void *a3)
{
  int v3; // edi
  int v5; // ebx
  struct SPRITE *v6; // ecx
  struct _RECTL *v7; // edx
  int v8; // eax
  struct SPRITE *v9; // eax
  struct SPRITE *v10; // esi
  struct SPRITE *v11; // esi

  v3 = a1;
  v5 = 0;
  GreAcquireSemaphoreSharedInternal(*(_DWORD *)(a1 + 88));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_DWORD *)(v3 + 88));
  v6 = *(struct SPRITE **)(v3 + 4);
  v7 = a2;
  while ( 1 )
  {
    v9 = pSpFindInZForPidLock(v6, v7);
    v10 = v9;
    if ( !v9 )
      break;
    v8 = SURFACE::Map(*((_DWORD *)v9 + 22) - 16, a3, 0);
    v7 = a2;
    v5 = v8;
    if ( v8 == 2 )
    {
      v11 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v10 + 5), a2);
      if ( v11 )
      {
        do
        {
          SURFACE::bUnMap((SURFACE *)(*((_DWORD *)v11 + 22) - 16), a3, 0);
          v11 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v11 + 5), a2);
        }
        while ( v11 );
        v3 = a1;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v3 + 88));
      GreReleaseSemaphoreInternal(*(_DWORD *)(v3 + 88));
      return v5;
    }
    v6 = (struct SPRITE *)*((_DWORD *)v10 + 4);
  }
  return v5;
}
