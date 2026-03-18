/*
 * XREFs of ?GdiAdjustSpriteDirtyAccum@@YGHPAUHDEV__@@PAUHWND__@@PAU_RECTL@@2PAU_POINTL@@3@Z @ 0x11E4A
 * Callers:
 *     _GreAdjustSpriteDirtyAccum@24 @ 0x1FEC6 (_GreAdjustSpriteDirtyAccum@24.c)
 * Callees:
 *     ?vSpAdjustSpriteDirtyAccum@@YGXPAVSPRITE@@PAU_RECTL@@1PAU_POINTL@@2@Z @ 0x11EEC (-vSpAdjustSpriteDirtyAccum@@YGXPAVSPRITE@@PAU_RECTL@@1PAU_POINTL@@2@Z.c)
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

int __userpurge GdiAdjustSpriteDirtyAccum@<eax>(
        LONG a1@<ecx>,
        struct SPRITE *a2,
        HWND a3,
        struct _RECTL *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7)
{
  LONG right; // esi
  unsigned int v9; // edi
  int v10; // eax
  HWND v11; // [esp+0h] [ebp-20h]
  struct _POINTL *v12; // [esp+0h] [ebp-20h]
  struct _POINTL *v13; // [esp+0h] [ebp-20h]
  void *v14; // [esp+4h] [ebp-1Ch]
  struct _POINTL *v15; // [esp+4h] [ebp-1Ch]
  struct _POINTL *v16; // [esp+4h] [ebp-1Ch]
  _BYTE v17[4]; // [esp+10h] [ebp-10h] BYREF
  struct _RECTL varC; // [esp+14h] [ebp-Ch] BYREF

  varC.right = a1;
  GreAcquireSemaphore(_ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v17, (struct PDEVOBJ *)&varC.right);
  right = varC.right;
  varC.top = *(_DWORD *)(varC.right + 104);
  if ( varC.top )
  {
    v9 = 0;
    if ( pSpGetMetaSprite(0, v11, v14) && varC.top )
    {
      do
      {
        v10 = *(_DWORD *)(*(_DWORD *)(right + 108) + 4 * v9);
        varC.left = a5->left - *(_DWORD *)(v10 + 1836);
        varC.top = a5->top - *(_DWORD *)(v10 + 1840);
        vSpAdjustSpriteDirtyAccum(a2, a4, &varC, v13, v16);
        ++v9;
      }
      while ( v9 < *(_DWORD *)(right + 104) );
    }
  }
  else if ( pSpGetSprite(0, v11, v14) )
  {
    vSpAdjustSpriteDirtyAccum(a2, a4, a5, v12, v15);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v17);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
  GreReleaseSemaphoreInternal(_ghsemGreLock);
  return 1;
}
