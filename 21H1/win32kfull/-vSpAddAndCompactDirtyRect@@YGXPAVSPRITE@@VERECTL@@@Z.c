/*
 * XREFs of ?vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z @ 0x1DFD02
 * Callers:
 *     ?GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z @ 0x9F2D8 (-GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?bContain@RGNOBJ@@QAEHAAU_RECTL@@@Z @ 0xA8338 (-bContain@RGNOBJ@@QAEHAAU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z @ 0x1DFED7 (-vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z.c)
 */

void __thiscall vSpAddAndCompactDirtyRect(volatile __int32 *this, struct _RECTL a2)
{
  volatile __int32 *v2; // edi
  __int32 v3; // esi
  int v4; // esi
  __int32 v5; // esi
  int v6; // esi
  __int32 v7; // edx
  struct SPRITE *v8; // [esp+0h] [ebp-48h]
  struct REGION *v9; // [esp+4h] [ebp-44h]
  _DWORD v10[2]; // [esp+10h] [ebp-38h] BYREF
  volatile __int32 *v11; // [esp+18h] [ebp-30h]
  _DWORD v12[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v13; // [esp+24h] [ebp-24h]
  __int32 v14; // [esp+28h] [ebp-20h] BYREF
  int v15; // [esp+2Ch] [ebp-1Ch]
  __int32 v16; // [esp+30h] [ebp-18h] BYREF
  struct _RECTL v17; // [esp+34h] [ebp-14h] BYREF

  v2 = this;
  v11 = this;
  v3 = _InterlockedExchange(this + 34, 0);
  v13 = 0;
  v16 = v3;
  if ( !v3 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
    if ( v14 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v14, &a2);
      v16 = v14;
      v4 = 1;
    }
    else
    {
      v4 = v13;
    }
    if ( v15 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    goto LABEL_25;
  }
  if ( *(_DWORD *)(v3 + 52) != 56 || !RGNOBJ::bContain((RGNOBJ *)&v16, &a2) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
    if ( v14 )
    {
      if ( v12[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v12, &a2);
        v6 = RGNOBJ::iComplexity((RGNOBJ *)&v16);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v14, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v12, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v14, (struct RGNOBJ *)&v16);
          v13 = 1;
          if ( v6 == 3 && RGNOBJ::iComplexity((RGNOBJ *)&v16) == 2 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
            if ( v10[0] )
            {
              v17 = *(struct _RECTL *)(v16 + 64);
              RGNOBJ::vSet((RGNOBJ *)v10, &v17);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
              v16 = v10[0];
            }
            if ( v10[1] == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
          }
        }
      }
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v12);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v12);
    if ( v12[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v12);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v14);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    if ( v15 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    v2 = v11;
    v4 = v13;
LABEL_25:
    if ( v4 )
    {
      if ( v16 )
      {
        v7 = _InterlockedExchange(v2 + 34, v16);
        v16 = 0;
        if ( v7 )
          goto LABEL_28;
      }
    }
    goto LABEL_29;
  }
  v5 = _InterlockedExchange(v2 + 34, v3);
  v16 = 0;
  if ( v5 )
LABEL_28:
    vSpAddAndCompactDirtyRegion(v8, v9);
LABEL_29:
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
}
