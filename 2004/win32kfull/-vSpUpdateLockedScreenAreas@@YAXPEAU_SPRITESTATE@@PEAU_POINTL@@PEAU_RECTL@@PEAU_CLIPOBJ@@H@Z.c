/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02852CC
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C004E1E0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C004FCA4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0073F4C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280FB0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284BF0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C004F710 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C004F778 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C004F930 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0086610 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00A7C18 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A7EE8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0156978 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct REGION *v8; // r15
  struct _RECTL *v9; // rdi
  int v10; // eax
  struct SPRITE *v11; // rsi
  int v12; // ebx
  struct RGNOBJ *p_top; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdi
  struct _SURFOBJ *v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdi
  struct _SURFOBJ *v25; // rdx
  int v26; // ecx
  struct SPRITE *v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  _QWORD v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v33[96]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v34[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v35; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v36; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _CLIPOBJ v37; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v38; // [rsp+1F8h] [rbp+F8h]
  __int64 v39; // [rsp+210h] [rbp+110h]
  int v40; // [rsp+218h] [rbp+118h]
  int v41; // [rsp+240h] [rbp+140h]
  __int64 v42; // [rsp+250h] [rbp+150h]

  v41 = 1;
  v27 = 0LL;
  v39 = 0LL;
  v40 = 0;
  v42 = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v29);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v29);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v30);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v30);
  v31 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v34, (struct PDEVOBJ *)&v31);
  v8 = 0LL;
  if ( v29[0] )
  {
    if ( v30[0] )
    {
      v9 = (struct _RECTL *)((char *)a1 + 40);
      if ( bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v36) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v33, a1, &v36, 0, 0LL);
        do
        {
          v10 = ENUMAREAS::bEnum((ENUMAREAS *)v33, &v27, &v35);
          v11 = v27;
          v12 = v10;
          v28 = v10;
          if ( v27 )
          {
            if ( !v8 )
            {
              if ( !a4 || (p_top = (struct RGNOBJ *)&a4[2].rclBounds.top, !a4->iDComplexity) )
              {
                RGNOBJ::vSet((RGNOBJ *)v30, v9);
                p_top = (struct RGNOBJ *)v30;
              }
              v32 = *((_QWORD *)a1 + 129);
              if ( !RGNOBJ::bMerge((RGNOBJ *)v29, p_top, (struct RGNOBJ *)&v32, 4u) )
                RGNOBJ::vSet((RGNOBJ *)v29);
              v8 = (struct REGION *)v29[0];
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v37, v8, (struct ERECTL *)&v35, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v37.rclBounds) )
            {
              while ( 1 )
              {
                v14 = 0LL;
                if ( !a5 )
                  break;
                v15 = *((_QWORD *)a1 + 4);
                if ( v15 )
                {
                  v16 = *(_DWORD *)(v15 + 88);
                  if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
                  {
                    v14 = v15 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v15 - 24 + 48));
                  }
                }
                v17 = *((_QWORD *)v11 + 20);
                v18 = 0LL;
                v19 = (struct _SURFOBJ *)v17;
                if ( v17 )
                {
                  v20 = *(_DWORD *)(v17 + 88);
                  if ( (v20 & 0x80004000) != 0 && (v20 & 0x200) == 0 )
                  {
                    v18 = v17 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v17 - 24 + 48));
                    v19 = (struct _SURFOBJ *)*((_QWORD *)v11 + 20);
                  }
                }
                INVOKEOFFCOPYBITS(
                  (struct _POINTL *)v11 + 21,
                  v19,
                  &gptlZero,
                  *((struct _SURFOBJ **)a1 + 4),
                  &v37,
                  0LL,
                  &v35,
                  (struct _POINTL *)&v35);
                if ( v18 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
                if ( v14 )
                  goto LABEL_38;
LABEL_39:
                if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v33, &v27) )
                  goto LABEL_42;
                v11 = v27;
              }
              v21 = *((_QWORD *)v11 + 20);
              if ( v21 )
              {
                v22 = *(_DWORD *)(v21 + 88);
                if ( (v22 & 0x80004000) != 0 && (v22 & 0x200) == 0 )
                {
                  v14 = v21 - 24;
                  GreLockDisplayDevice(*(_QWORD *)(v21 - 24 + 48));
                }
              }
              v23 = *((_QWORD *)a1 + 4);
              v24 = 0LL;
              v25 = (struct _SURFOBJ *)v23;
              if ( v23 )
              {
                v26 = *(_DWORD *)(v23 + 88);
                if ( (v26 & 0x80004000) != 0 && (v26 & 0x200) == 0 )
                {
                  v24 = v23 - 24;
                  GreLockDisplayDevice(*(_QWORD *)(v23 - 24 + 48));
                  v25 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
                }
              }
              INVOKEOFFCOPYBITS(
                &gptlZero,
                v25,
                (struct _POINTL *)v11 + 21,
                *((struct _SURFOBJ **)v11 + 20),
                &v37,
                0LL,
                &v35,
                (struct _POINTL *)&v35);
              if ( v24 )
                GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
              if ( !v14 )
              {
LABEL_42:
                v12 = v28;
                v9 = (struct _RECTL *)((char *)a1 + 40);
                continue;
              }
LABEL_38:
              GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
              goto LABEL_39;
            }
          }
        }
        while ( v12 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v33);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v34);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v30);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v29);
}
