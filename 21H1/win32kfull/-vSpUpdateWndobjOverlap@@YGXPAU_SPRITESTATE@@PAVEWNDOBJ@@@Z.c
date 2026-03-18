/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1DFBF4 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z @ 0x1E0285 (-vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E14C8 (-vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?bSpSpriteOnTopOfWndObjInZ@@YGHPAVSPRITE@@PAVEWNDOBJ@@@Z @ 0x1DE405 (-bSpSpriteOnTopOfWndObjInZ@@YGHPAVSPRITE@@PAVEWNDOBJ@@@Z.c)
 *     ?bSpWndObjTrackedSprite@@YGHPAVSPRITE@@@Z @ 0x1DEEA7 (-bSpWndObjTrackedSprite@@YGHPAVSPRITE@@@Z.c)
 *     ?vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z @ 0x1E0F06 (-vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z @ 0x1E6921 (-vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(_DWORD *a1, int a2)
{
  _DWORD *v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int i; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  struct RGNOBJ *v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  struct EWNDOBJ *v15; // [esp+0h] [ebp-40h]
  struct RGNOBJ *v16; // [esp+4h] [ebp-3Ch]
  struct _POINTL v17; // [esp+10h] [ebp-30h] BYREF
  _DWORD v18[2]; // [esp+18h] [ebp-28h] BYREF
  _DWORD v19[2]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v20[2]; // [esp+28h] [ebp-18h] BYREF
  _DWORD *v21; // [esp+30h] [ebp-10h]
  int v22; // [esp+34h] [ebp-Ch] BYREF
  int v23; // [esp+38h] [ebp-8h] BYREF
  int v24; // [esp+3Ch] [ebp-4h] BYREF

  v3 = a1;
  v21 = a1;
  v4 = *a1;
  if ( (*(_DWORD *)(a2 + 140) & 0x200) != 0 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a2 + 132) + 16);
    v6 = *(_DWORD *)(v5 + 28);
    if ( v6 )
    {
      if ( v5 == *(_DWORD *)(v6 + 1820) && v6 != v4 )
        return;
    }
  }
  v24 = v3[96];
  v22 = *(_DWORD *)(a2 + 148);
  RGNOBJ::vSet((RGNOBJ *)&v24);
  for ( i = v3[1]; i; i = *(_DWORD *)(i + 16) )
  {
    if ( !bIntersect(a2 + 4, i + 44) && (*(_DWORD *)(a2 + 140) & 0x200) == 0
      || RGNOBJ::bInside((RGNOBJ *)(a2 + 48), (struct _RECTL *)(i + 44)) != 2
      && ((*(_DWORD *)(a2 + 140) & 0x200) == 0 || !v22
                                               || RGNOBJ::bInside((RGNOBJ *)&v22, (struct _RECTL *)(i + 44)) != 2) )
    {
      continue;
    }
    v8 = *(_DWORD *)(a2 + 140);
    v9 = *(_DWORD *)(i + 132);
    v23 = v9;
    if ( (v8 & 0x200) != 0 )
    {
      if ( (*(_BYTE *)i & 1) != 0
        || !*(_DWORD *)(i + 40)
        || bSpWndObjTrackedSprite((_DWORD *)i)
        || !bSpSpriteOnTopOfWndObjInZ((_DWORD *)i, a2) )
      {
        continue;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
      if ( v19[0] && v18[0] && v20[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v18, (struct _RECTL *)(i + 44));
        v11 = 1;
        if ( v23 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)v19, (struct RGNOBJ *)&v23, (struct RGNOBJ *)&v22, 8u)
            && RGNOBJ::iComplexity((RGNOBJ *)v19) == 1
            || !RGNOBJ::bCopy((RGNOBJ *)v20, (struct RGNOBJ *)&v23)
            || (v17.x = -*(_DWORD *)(i + 44),
                v17.y = -*(_DWORD *)(i + 48),
                RGNOBJ::bOffset((RGNOBJ *)v20, &v17),
                vSpComputeClipEffective(i, (struct RGNOBJ *)v20),
                RGNOBJ::iComplexity((RGNOBJ *)v20) == 1) )
          {
            v11 = 0;
          }
          else
          {
            v17.x = -v17.x;
            v17.y = -v17.y;
            RGNOBJ::bOffset((RGNOBJ *)v20, &v17);
          }
          if ( v23 )
          {
            if ( v11 == 1 )
            {
              v12 = (struct RGNOBJ *)v20;
              goto LABEL_38;
            }
            goto LABEL_40;
          }
        }
        v12 = (struct RGNOBJ *)v18;
LABEL_38:
        if ( RGNOBJ::bMerge((RGNOBJ *)v19, (struct RGNOBJ *)&v24, v12, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v19, (struct RGNOBJ *)&v24);
          v3 = v21;
          v21[96] = v24;
        }
        else
        {
LABEL_40:
          v3 = v21;
        }
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v20);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
      if ( v20[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v18);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v18);
      if ( v18[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v18);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v19);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v19);
      if ( v19[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v19);
      continue;
    }
    if ( !v9 )
      goto LABEL_17;
    if ( RGNOBJ::bInside((RGNOBJ *)&v23, (struct _RECTL *)(a2 + 4)) == 2 )
    {
      v8 = *(_DWORD *)(a2 + 140);
LABEL_17:
      if ( (v8 & 0x2000000) == 0 )
      {
        v10 = v8 | 0x2000000;
        *(_DWORD *)(a2 + 140) = v10;
        if ( (v10 & 0x80u) != 0 )
          (*(void (__stdcall **)(int, int))(*(_DWORD *)(a2 + 132) + 20))(a2, 128);
      }
      goto LABEL_51;
    }
  }
  v13 = *(_DWORD *)(a2 + 140);
  if ( (v13 & 0x2000000) != 0 )
  {
    v14 = v13 & 0xFDFFFFFF;
    *(_DWORD *)(a2 + 140) = v14;
    if ( (v14 & 0x80u) != 0 )
      (*(void (__stdcall **)(int, int))(*(_DWORD *)(a2 + 132) + 20))(a2, 256);
  }
LABEL_51:
  if ( (*(_DWORD *)(a2 + 140) & 0x200) != 0 )
  {
    vUpdateClientRgnOnSpriteOverlap(v15, v16);
    v3[96] = v24;
  }
}
