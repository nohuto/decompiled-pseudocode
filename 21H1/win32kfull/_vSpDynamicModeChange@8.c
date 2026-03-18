/*
 * XREFs of _vSpDynamicModeChange@8 @ 0x9EE36
 * Callers:
 *     <none>
 * Callees:
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QAE@XZ @ 0x9EFFA (--1MULTISPRITEDDIACCESS@@QAE@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x9F02C (--0MULTISPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ?vSpCorrectHdevReferences@@YGXPAU_SPRITESTATE@@PAUHDEV__@@@Z @ 0x9F09A (-vSpCorrectHdevReferences@@YGXPAU_SPRITESTATE@@PAUHDEV__@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z @ 0xA00C0 (-vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031 (-pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@K@Z @ 0x1DF497 (-pSpMoveSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909 (-pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z.c)
 *     ?vFixupMetaSpriteList@@YGXAAVPDEVOBJ@@@Z @ 0x1DFB45 (-vFixupMetaSpriteList@@YGXAAVPDEVOBJ@@@Z.c)
 */

void __stdcall vSpDynamicModeChange(struct _RTL_BITMAP *a1, struct _RTL_BITMAP *a2)
{
  struct _RTL_BITMAP *v2; // ebx
  struct _RTL_BITMAP *v3; // eax
  struct _RTL_BITMAP *v4; // esi
  ULONG *Buffer; // ecx
  struct _RTL_BITMAP *v6; // edi
  struct _RTL_BITMAP *v7; // esi
  struct _RTL_BITMAP *v8; // eax
  HDEV v9; // ecx
  PULONG v10; // edx
  PULONG v11; // eax
  HDEV v12; // edx
  PULONG v13; // eax
  ULONG *v14; // esi
  ULONG *v15; // esi
  HDEV SizeOfBitMap; // eax
  struct _METASPRITE *v17; // eax
  HDEV v18; // eax
  int v19; // ecx
  HDEV v20; // esi
  struct SPRITE *v21; // eax
  ULONG *v22; // esi
  unsigned int v23; // edx
  PULONG v24; // eax
  HDEV v25; // eax
  HDEV v26; // esi
  struct _METASPRITE *v27; // eax
  HDEV v28; // eax
  int v29; // ecx
  HDEV v30; // esi
  HDEV v31; // eax
  HDEV v32; // esi
  struct _SPRITESTATE *v33; // [esp+0h] [ebp-368h]
  struct _SPRITESTATE *v34; // [esp+0h] [ebp-368h]
  struct PDEVOBJ *v35; // [esp+0h] [ebp-368h]
  HDEV v36; // [esp+4h] [ebp-364h]
  HDEV v37; // [esp+4h] [ebp-364h]
  struct _METASPRITE *v38; // [esp+4h] [ebp-364h]
  struct _RTL_BITMAP *v39; // [esp+Ch] [ebp-35Ch] BYREF
  struct _RTL_BITMAP *v40; // [esp+10h] [ebp-358h]
  HDEV v41; // [esp+14h] [ebp-354h]
  struct _RTL_BITMAP *v42; // [esp+18h] [ebp-350h] BYREF
  struct _RTL_BITMAP *v43; // [esp+1Ch] [ebp-34Ch]
  char v44[4]; // [esp+20h] [ebp-348h] BYREF
  char v45[4]; // [esp+24h] [ebp-344h] BYREF
  _BYTE v46[832]; // [esp+28h] [ebp-340h] BYREF

  v2 = a2;
  v3 = a2;
  v42 = a1;
  v39 = a2;
  if ( ((unsigned int)&loc_20000 & a1[3].SizeOfBitMap) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents((HDEV)v33);
    v3 = v39;
  }
  if ( ((unsigned int)&loc_20000 & v3[3].SizeOfBitMap) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents((HDEV)v33);
    v3 = v39;
  }
  v43 = v3 + 8;
  v40 = v42 + 8;
  qmemcpy(v46, &v42[8], sizeof(v46));
  qmemcpy(&v42[8], &v3[8], 0x340u);
  qmemcpy(&v3[8], v46, 0x340u);
  v4 = v42 + 8;
  Buffer = v42[99].Buffer;
  v42[99].Buffer = v3[99].Buffer;
  v3[99].Buffer = Buffer;
  RtlInitializeBitMap(v4 + 45, &v4[46].SizeOfBitMap, 0x40u);
  RtlInitializeBitMap(v43 + 45, &v43[46].SizeOfBitMap, 0x40u);
  v6 = a1;
  vSpCorrectHdevReferences(v33, v36);
  v7 = v43;
  vSpCorrectHdevReferences(v34, v37);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)v45, (struct PDEVOBJ *)&v42);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)v44, (struct PDEVOBJ *)&v39);
  v8 = v40;
  v9 = 0;
  v41 = 0;
  v10 = v40[88].Buffer;
  v40[88].SizeOfBitMap = 0;
  v8[88].Buffer = 0;
  v8[84].Buffer = 0;
  if ( v10 )
  {
    do
    {
      v14 = (ULONG *)v10[4];
      vSpDeleteSprite(v10);
      v10 = v14;
    }
    while ( v14 );
    v7 = v43;
    v9 = 0;
  }
  v11 = v7[88].Buffer;
  v7[88].SizeOfBitMap = 0;
  v7[88].Buffer = 0;
  v7[84].Buffer = 0;
  if ( v11 )
  {
    do
    {
      v15 = (ULONG *)v11[4];
      vSpDeleteSprite(v11);
      v11 = v15;
    }
    while ( v15 );
    v7 = v43;
    v9 = 0;
  }
  if ( ((unsigned int)&loc_20000 & v42[3].SizeOfBitMap) != 0 && ((unsigned int)&loc_20000 & v39[3].SizeOfBitMap) != 0 )
  {
    SizeOfBitMap = (HDEV)v40[6].SizeOfBitMap;
    if ( SizeOfBitMap )
    {
      do
      {
        v41 = (HDEV)*((_DWORD *)SizeOfBitMap + 1);
        v17 = pSpTransferMetaSprite(SizeOfBitMap, (HDEV)v35, v38);
        if ( v17 )
          *((_DWORD *)v17 + 2) |= 2u;
        SizeOfBitMap = v41;
      }
      while ( v41 );
    }
    v18 = (HDEV)v7[6].SizeOfBitMap;
    if ( v18 )
    {
      do
      {
        v19 = *((_DWORD *)v18 + 2);
        v20 = (HDEV)*((_DWORD *)v18 + 1);
        if ( (v19 & 2) != 0 )
          *((_DWORD *)v18 + 2) = v19 & 0xFFFFFFFD;
        else
          pSpTransferMetaSprite(v18, (HDEV)v35, v38);
        v18 = v20;
      }
      while ( v20 );
    }
LABEL_12:
    if ( ((unsigned int)&loc_20000 & v42[3].SizeOfBitMap) != 0 )
      vFixupMetaSpriteList(v35);
    if ( ((unsigned int)&loc_20000 & v39[3].SizeOfBitMap) != 0 )
      vFixupMetaSpriteList(v35);
    goto LABEL_16;
  }
  if ( ((unsigned int)&loc_20000 & v42[3].SizeOfBitMap) == 0 )
  {
    if ( ((unsigned int)&loc_20000 & v39[3].SizeOfBitMap) == 0 )
    {
      v12 = (HDEV)v40->Buffer;
      if ( v12 )
      {
        do
        {
          v41 = (HDEV)*((_DWORD *)v12 + 4);
          v21 = pSpTransferSprite((HDEV)v35, v38);
          if ( v21 )
            *(_DWORD *)v21 |= 2u;
          v12 = v41;
        }
        while ( v41 );
      }
      v13 = v7->Buffer;
      if ( v13 )
      {
        do
        {
          v22 = (ULONG *)v13[4];
          if ( (*v13 & 2) != 0 )
            *v13 &= ~2u;
          else
            pSpTransferSprite((HDEV)v35, v38);
          v13 = v22;
        }
        while ( v22 );
      }
      goto LABEL_12;
    }
    v6 = a2;
    v2 = a1;
  }
  v23 = v6[13].SizeOfBitMap;
  if ( !v23 )
  {
LABEL_46:
    v25 = (HDEV)v2[8].Buffer;
    if ( v25 )
    {
      do
      {
        v26 = (HDEV)*((_DWORD *)v25 + 4);
        v27 = pSpConvertSpriteToMeta(v25, (HDEV)v35, v38);
        if ( v27 )
          *((_DWORD *)v27 + 2) |= 2u;
        v25 = v26;
      }
      while ( v26 );
    }
    v28 = (HDEV)v6[14].SizeOfBitMap;
    if ( v28 )
    {
      do
      {
        v29 = *((_DWORD *)v28 + 2);
        v30 = (HDEV)*((_DWORD *)v28 + 1);
        if ( (v29 & 2) != 0 )
          *((_DWORD *)v28 + 2) = v29 & 0xFFFFFFFD;
        else
          pSpConvertSpriteFromMeta(v28, (HDEV)v35, v38);
        v28 = v30;
      }
      while ( v30 );
    }
    goto LABEL_12;
  }
  v24 = v6[13].Buffer;
  while ( (struct _RTL_BITMAP *)v24[(_DWORD)v9] != v6 )
  {
    v9 = (HDEV)((char *)v9 + 1);
    v41 = v9;
    if ( (unsigned int)v9 >= v23 )
      goto LABEL_46;
  }
  v24[(_DWORD)v9] = (ULONG)v2;
  v31 = (HDEV)v6[14].SizeOfBitMap;
  if ( v31 )
  {
    do
    {
      v32 = (HDEV)*((_DWORD *)v31 + 1);
      pSpMoveSpriteFromMeta(v31, v9, v35, (unsigned int)v38);
      v9 = v41;
      v31 = v32;
    }
    while ( v32 );
  }
LABEL_16:
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)v44);
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)v45);
}
