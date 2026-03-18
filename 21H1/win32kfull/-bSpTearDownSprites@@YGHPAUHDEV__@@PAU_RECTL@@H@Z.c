/*
 * XREFs of ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z @ 0x1D2FCB (-DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DB505 (-GreTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239 (-vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

int __userpurge bSpTearDownSprites@<eax>(
        const struct _RECTL *a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        struct _RECTL *a4,
        int a5)
{
  int v5; // esi
  int v7; // edi
  int v8; // ebx
  struct _SURFOBJ *v10; // [esp+0h] [ebp-FCh]
  struct _RECTL *v11; // [esp+4h] [ebp-F8h]
  _BYTE v12[112]; // [esp+10h] [ebp-ECh] BYREF
  _BYTE v13[76]; // [esp+80h] [ebp-7Ch] BYREF
  int v14; // [esp+CCh] [ebp-30h] BYREF
  struct SPRITE *v15; // [esp+D0h] [ebp-2Ch] BYREF
  struct _RECTL v16; // [esp+D4h] [ebp-28h] BYREF
  struct _RECTL v17; // [esp+E4h] [ebp-18h] BYREF

  v14 = a2;
  v5 = 0;
  memset(&v16, 0, sizeof(v16));
  v15 = 0;
  memset(&v17, 0, sizeof(v17));
  if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
  {
    v7 = a2 + 64;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v14);
    if ( *(_DWORD *)(v7 + 36) && bIntersect(a1, (const struct _RECTL *)(v7 + 20), &v17) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v13, (struct _SPRITESTATE *)v7, &v17, 0, 0);
      do
      {
        v8 = ENUMAREAS::bEnum((ENUMAREAS *)v13, &v15, &v16);
        if ( v15 )
        {
          v5 = 1;
          vSpWriteToScreen(*((struct _SPRITESTATE **)v15 + 28), (struct _POINTL *)&v16, v10, v11);
        }
      }
      while ( v8 );
      if ( a3 )
        vSpComputeUnlockedRegion(v7);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v13);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v12);
  }
  return v5;
}
