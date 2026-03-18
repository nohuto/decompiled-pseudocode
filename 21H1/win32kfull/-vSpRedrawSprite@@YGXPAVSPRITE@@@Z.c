/*
 * XREFs of ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56 (-vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0xEA5B4 (-pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bIgnoreMirrorUpdate@@YGHPAVSPRITE@@@Z @ 0x1DCE92 (-bIgnoreMirrorUpdate@@YGHPAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C (-psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z @ 0x1DFED7 (-vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239 (-vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QAEXXZ @ 0x1E34D8 (-vUnlock@SINGLEREADERLOCK@@QAEXXZ.c)
 */

void __thiscall vSpRedrawSprite(_DWORD *this)
{
  _DWORD *v1; // ebx
  char v2; // dl
  struct _SPRITESTATE *Composite; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  char *v8; // esi
  struct _RECTL *v9; // edi
  struct SPRITE *v10; // esi
  struct SPRITE *v11; // ebx
  struct REGION *v12; // esi
  bool v13; // zf
  struct SPRITE **v14; // esi
  SURFOBJ *v15; // ebx
  int v16; // eax
  struct _RECTL *v17; // esi
  LONG *p_top; // esi
  struct _SPRITESTATE *v19; // esi
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  struct SPRITE *v24; // [esp+0h] [ebp-210h]
  struct _RECTL *v25; // [esp+0h] [ebp-210h]
  struct _RECTL *v26; // [esp+0h] [ebp-210h]
  struct _SURFOBJ *v27; // [esp+0h] [ebp-210h]
  unsigned int *v28; // [esp+4h] [ebp-20Ch]
  struct _POINTL *v29; // [esp+4h] [ebp-20Ch]
  struct _RECTL *v30; // [esp+4h] [ebp-20Ch]
  int v31[2]; // [esp+Ch] [ebp-204h] BYREF
  unsigned int v32; // [esp+14h] [ebp-1FCh]
  struct REGION *v33; // [esp+18h] [ebp-1F8h] BYREF
  ULONG StartingIndex; // [esp+1Ch] [ebp-1F4h] BYREF
  _DWORD *v35; // [esp+20h] [ebp-1F0h]
  struct SPRITE **v36; // [esp+24h] [ebp-1ECh]
  int v37; // [esp+28h] [ebp-1E8h]
  struct _SPRITESTATE *v38; // [esp+2Ch] [ebp-1E4h]
  _DWORD v39[82]; // [esp+30h] [ebp-1E0h] BYREF
  char v40[4]; // [esp+178h] [ebp-98h] BYREF
  char v41; // [esp+17Ch] [ebp-94h] BYREF
  char v42; // [esp+18Ch] [ebp-84h]
  int v43; // [esp+1A8h] [ebp-68h]
  int v44; // [esp+1BCh] [ebp-54h]
  int v45; // [esp+1C0h] [ebp-50h]
  int v46; // [esp+1E8h] [ebp-28h]
  int v47; // [esp+1F0h] [ebp-20h]
  struct _RECTL v48; // [esp+1FCh] [ebp-14h] BYREF

  v1 = this;
  v35 = this;
  memset(&v48, 0, sizeof(v48));
  v36 = (struct SPRITE **)this[3];
  if ( (*((_DWORD *)*v36 + 6) & 0x400) == 0
    && (*this & 0x400) == 0
    && (*this & 0x20) != 0
    && !bIgnoreMirrorUpdate(v24)
    && ((v2 & 0x40) == 0 || (v2 & 0xC0) == 0xC0) )
  {
    StartingIndex = 0;
    Composite = (struct _SPRITESTATE *)psoSpGetComposite((struct _SPRITESTATE *)&StartingIndex, v25, v28);
    v38 = Composite;
    if ( Composite )
    {
      v4 = 0;
      v31[0] = -v1[11];
      v31[1] = -v1[12];
      v5 = v1[28];
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 56);
        if ( (v6 & 0x80004000) != 0 && (v6 & 0x200) == 0 )
        {
          v4 = v5 - 16;
          GreLockDisplayDevice(*(_DWORD *)(v5 - 16 + 28));
          Composite = v38;
        }
      }
      v7 = *((_DWORD *)Composite + 14);
      v8 = 0;
      if ( (v7 & 0x80004000) != 0 && (v7 & 0x200) == 0 )
      {
        v8 = (char *)Composite - 16;
        GreLockDisplayDevice(*((_DWORD *)Composite + 3));
      }
      INVOKEOFFCOPYBITS(
        (SURFOBJ *)v38,
        v31,
        (struct _POINTL *)(v1 + 29),
        (struct _SURFOBJ *)v1[28],
        0,
        0,
        (struct _CLIPOBJ *)(v1 + 11),
        (struct _XLATEOBJ *)(v1 + 11),
        v26,
        v29);
      if ( v8 )
        GreUnlockDisplayDevice(*((_DWORD *)v8 + 7));
      if ( v4 )
        GreUnlockDisplayDevice(*(_DWORD *)(v4 + 28));
      v9 = (struct _RECTL *)(v1 + 11);
      v10 = pSpFindInZ(v36[1], (struct _RECTL *)(v1 + 11));
      if ( v10 )
      {
        v11 = v38;
        do
        {
          if ( bIntersect((const struct _RECTL *)((char *)v10 + 44), v9, &v48) )
            vSpComposite(v11, (struct _POINTL *)&v48, v27, v30);
          SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v10 + 180));
          v10 = pSpFindInZ(*((struct SPRITE **)v10 + 4), v9);
        }
        while ( v10 );
        v1 = v35;
      }
      v12 = (struct REGION *)_InterlockedExchange(v1 + 34, 0);
      v33 = v12;
      if ( !v12 )
      {
        v13 = (*(_BYTE *)v1 & 0x40) == 0;
        v14 = v36;
        v15 = (SURFOBJ *)v38;
        if ( v13 )
          vSpWriteToScreen(v38, (struct _POINTL *)v9, v27, v30);
        goto LABEL_51;
      }
      v46 = 1;
      v44 = 0;
      v45 = 0;
      v47 = 0;
      v43 = 0;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v12, (struct ERECTL *)v9, 1);
      memset(v39, 0, 0x144u);
      if ( v42 )
      {
        if ( v42 != 1 )
        {
          if ( v42 != 3 )
          {
LABEL_50:
            vSpAddAndCompactDirtyRegion((struct SPRITE *)v27, (struct REGION *)v30);
            v15 = (SURFOBJ *)v38;
            v14 = v36;
LABEL_51:
            if ( StartingIndex == -1 )
            {
              vSpDeleteSurface(v15);
            }
            else
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v33, (struct _EX_PUSH_LOCK *)(v14 + 94));
              RtlClearBits((PRTL_BITMAP)v14 + 45, StartingIndex, 1u);
              if ( v33 )
              {
                ExReleasePushLockExclusiveEx(v33, 0);
                KeLeaveCriticalRegion();
              }
            }
            return;
          }
          v37 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v40, 0, 0, 4u, 0x14u);
          v16 = v37;
LABEL_35:
          v19 = v38;
          if ( !v16 )
            goto LABEL_37;
          do
          {
            v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)v40, 0x144u, (char *)v39, 0);
            v37 = v16;
LABEL_37:
            v32 = 0;
            if ( v39[0] )
            {
              v20 = &v39[2];
              v35 = &v39[2];
              do
              {
                if ( *(v20 - 1) < v9->left )
                  *(v20 - 1) = v9->left;
                v21 = v1[13];
                if ( v20[1] > v21 )
                  v20[1] = v21;
                v22 = v1[12];
                if ( *v20 < v22 )
                  *v20 = v22;
                v23 = v1[14];
                if ( v20[2] > v23 )
                  v20[2] = v23;
                vSpWriteToScreen(v19, (struct _POINTL *)(v20 - 1), v27, v30);
                v20 = v35 + 4;
                ++v32;
                v35 += 4;
              }
              while ( v32 < v39[0] );
              v16 = v37;
            }
          }
          while ( v16 );
          goto LABEL_50;
        }
        v17 = (struct _RECTL *)&v41;
      }
      else
      {
        v17 = v9;
      }
      v39[0] = 1;
      v39[1] = v17->left;
      p_top = &v17->top;
      v16 = 0;
      v37 = 0;
      v39[2] = *p_top++;
      v39[3] = *p_top;
      v39[4] = p_top[1];
      v9 = (struct _RECTL *)(v1 + 11);
      goto LABEL_35;
    }
  }
}
