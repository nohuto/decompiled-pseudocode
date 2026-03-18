/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z @ 0xA00C0 (-vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCE2E (-bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 */

void __userpurge vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1@<ecx>,
        struct _SPRITESTATE *a2,
        struct _POINTL *a3,
        struct _RECTL *a4,
        struct _CLIPOBJ *a5,
        int a6)
{
  struct _SPRITESTATE *v6; // esi
  struct REGION *v7; // edi
  int v8; // eax
  struct SPRITE *v9; // ebx
  struct RGNOBJ *v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  SURFOBJ *v14; // eax
  LONG *p_lDelta; // edi
  SURFOBJ *v16; // edx
  HSURF hsurf; // ecx
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  SURFOBJ *v21; // eax
  LONG *v22; // esi
  SURFOBJ *v23; // edx
  HSURF v24; // ecx
  struct _RECTL *v25; // [esp+0h] [ebp-1A4h]
  struct _POINTL *v26; // [esp+4h] [ebp-1A0h]
  _BYTE v27[112]; // [esp+10h] [ebp-194h] BYREF
  _BYTE v28[76]; // [esp+80h] [ebp-124h] BYREF
  int v29; // [esp+CCh] [ebp-D8h]
  int v30; // [esp+D0h] [ebp-D4h] BYREF
  struct _POINTL *v31; // [esp+D4h] [ebp-D0h]
  int v32; // [esp+D8h] [ebp-CCh] BYREF
  struct REGION *v33; // [esp+DCh] [ebp-C8h]
  _DWORD v34[2]; // [esp+E0h] [ebp-C4h] BYREF
  _DWORD v35[2]; // [esp+E8h] [ebp-BCh] BYREF
  struct SPRITE *v36; // [esp+F0h] [ebp-B4h] BYREF
  struct _SPRITESTATE *v37; // [esp+F4h] [ebp-B0h]
  struct _POINTL v38; // [esp+F8h] [ebp-ACh] BYREF
  int v39; // [esp+128h] [ebp-7Ch]
  int v40; // [esp+13Ch] [ebp-68h]
  int v41; // [esp+140h] [ebp-64h]
  int v42; // [esp+168h] [ebp-3Ch]
  int v43; // [esp+170h] [ebp-34h]
  struct _RECTL v44; // [esp+17Ch] [ebp-28h] BYREF
  struct _CLIPOBJ v45; // [esp+18Ch] [ebp-18h] BYREF

  v31 = a3;
  memset(&v45, 0, 16);
  v37 = a1;
  v36 = 0;
  v40 = 0;
  v41 = 0;
  v43 = 0;
  v39 = 0;
  v42 = 1;
  memset(&v44, 0, sizeof(v44));
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v35);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v35);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v34);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v34);
  v6 = v37;
  v32 = *(_DWORD *)v37;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v27, (struct PDEVOBJ *)&v32);
  v7 = 0;
  v33 = 0;
  if ( v35[0] && v34[0] && bIntersect((const struct _RECTL *)a2, (const struct _RECTL *)((char *)v6 + 20), &v44) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v28, v6, &v44, 0, 0);
    do
    {
      v8 = ENUMAREAS::bEnum((ENUMAREAS *)v28, &v36, (struct _RECTL *)&v45);
      v9 = v36;
      v29 = v8;
      if ( v36 )
      {
        if ( !v7 )
        {
          if ( !v31 || (v10 = (struct RGNOBJ *)&v31[6], !LOBYTE(v31[2].y)) )
          {
            RGNOBJ::vSet((RGNOBJ *)v34, (struct _RECTL *)((char *)v6 + 20));
            v10 = (struct RGNOBJ *)v34;
          }
          v30 = *((_DWORD *)v6 + 161);
          if ( !RGNOBJ::bMerge((RGNOBJ *)v35, v10, (struct RGNOBJ *)&v30, 4u) )
            RGNOBJ::vSet((RGNOBJ *)v35);
          v7 = (struct REGION *)v35[0];
          v33 = (struct REGION *)v35[0];
        }
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v38, v7, (struct ERECTL *)&v45, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v38.y) )
        {
          while ( 1 )
          {
            if ( a4 )
            {
              v11 = *((_DWORD *)v6 + 4);
              v12 = 0;
              if ( v11 )
              {
                v13 = *(_DWORD *)(v11 + 56);
                if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
                {
                  v12 = v11 - 16;
                  GreLockDisplayDevice(*(_DWORD *)(v11 - 16 + 28));
                }
              }
              v14 = (SURFOBJ *)*((_DWORD *)v9 + 28);
              p_lDelta = 0;
              v16 = v14;
              if ( v14 )
              {
                hsurf = v14[1].hsurf;
                if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
                {
                  p_lDelta = &v14[-1].lDelta;
                  GreLockDisplayDevice(v14->hdev);
                  v16 = (SURFOBJ *)*((_DWORD *)v9 + 28);
                }
              }
              INVOKEOFFCOPYBITS(
                v16,
                (int *)v9 + 29,
                &gptlZero,
                *((struct _SURFOBJ **)v37 + 4),
                &v38,
                0,
                &v45,
                (struct _XLATEOBJ *)&v45,
                v25,
                v26);
              if ( p_lDelta )
                GreUnlockDisplayDevice(p_lDelta[7]);
              if ( v12 )
                GreUnlockDisplayDevice(*(_DWORD *)(v12 + 28));
            }
            else
            {
              v18 = *((_DWORD *)v9 + 28);
              v19 = 0;
              if ( v18 )
              {
                v20 = *(_DWORD *)(v18 + 56);
                if ( (v20 & 0x80004000) != 0 && (v20 & 0x200) == 0 )
                {
                  v19 = v18 - 16;
                  GreLockDisplayDevice(*(_DWORD *)(v18 - 16 + 28));
                }
              }
              v21 = (SURFOBJ *)*((_DWORD *)v6 + 4);
              v22 = 0;
              v23 = v21;
              if ( v21 )
              {
                v24 = v21[1].hsurf;
                if ( ((unsigned int)v24 & 0x80004000) != 0 && ((unsigned __int16)v24 & 0x200) == 0 )
                {
                  v22 = &v21[-1].lDelta;
                  GreLockDisplayDevice(v21->hdev);
                  v23 = (SURFOBJ *)*((_DWORD *)v37 + 4);
                }
              }
              INVOKEOFFCOPYBITS(
                v23,
                &gptlZero.x,
                (struct _POINTL *)((char *)v9 + 116),
                *((struct _SURFOBJ **)v9 + 28),
                &v38,
                0,
                &v45,
                (struct _XLATEOBJ *)&v45,
                v25,
                v26);
              if ( v22 )
                GreUnlockDisplayDevice(v22[7]);
              if ( !v19 )
              {
LABEL_42:
                v6 = v37;
                v7 = v33;
                break;
              }
              GreUnlockDisplayDevice(*(_DWORD *)(v19 + 28));
            }
            if ( !a4 || !ENUMAREAS::bEnumLayers((ENUMAREAS *)v28, &v36) )
              goto LABEL_42;
            v9 = v36;
            v6 = v37;
          }
        }
      }
    }
    while ( v29 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v28);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v27);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v34);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v34);
  if ( v34[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v34);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v35);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v35);
  if ( v35[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v35);
}
