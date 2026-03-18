/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6
 * Callers:
 *     ?GdiUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0xF6D59 (-GdiUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     _UserVisrgnFromHwnd@12 @ 0xA99B8 (_UserVisrgnFromHwnd@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z @ 0x1E0285 (-vSpCheckForWndobjOverlap@@YGXPAU_SPRITESTATE@@PAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(int a1, int a2)
{
  int v3; // edi
  int *v4; // ebx
  struct REGION *v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  struct REGION *v13; // edx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // esi
  struct REGION *v17; // eax
  unsigned int v18; // edx
  int v19; // ecx
  struct _SPRITESTATE *v20; // [esp+0h] [ebp-460h]
  struct _RECTL *v21; // [esp+4h] [ebp-45Ch]
  _BYTE v22[112]; // [esp+10h] [ebp-450h] BYREF
  _DWORD v23[3]; // [esp+80h] [ebp-3E0h] BYREF
  _BYTE v24[4]; // [esp+8Ch] [ebp-3D4h] BYREF
  int v25; // [esp+90h] [ebp-3D0h]
  struct _POINTL v26; // [esp+94h] [ebp-3CCh] BYREF
  struct REGION *v27; // [esp+9Ch] [ebp-3C4h]
  _DWORD v28[2]; // [esp+A0h] [ebp-3C0h] BYREF
  int v29; // [esp+A8h] [ebp-3B8h] BYREF
  int v30; // [esp+ACh] [ebp-3B4h]
  int v31; // [esp+B0h] [ebp-3B0h] BYREF
  int v32; // [esp+B4h] [ebp-3ACh]
  _DWORD v33[82]; // [esp+B8h] [ebp-3A8h] BYREF
  _DWORD v34[82]; // [esp+200h] [ebp-260h] BYREF
  _BYTE v35[4]; // [esp+348h] [ebp-118h] BYREF
  _BYTE v36[16]; // [esp+34Ch] [ebp-114h] BYREF
  char v37; // [esp+35Ch] [ebp-104h]
  int v38; // [esp+378h] [ebp-E8h]
  int v39; // [esp+38Ch] [ebp-D4h]
  int v40; // [esp+390h] [ebp-D0h]
  int v41; // [esp+3B8h] [ebp-A8h]
  int v42; // [esp+3C0h] [ebp-A0h]
  _BYTE v43[4]; // [esp+3C8h] [ebp-98h] BYREF
  _BYTE v44[16]; // [esp+3CCh] [ebp-94h] BYREF
  char v45; // [esp+3DCh] [ebp-84h]
  int v46; // [esp+3F8h] [ebp-68h]
  int v47; // [esp+40Ch] [ebp-54h]
  int v48; // [esp+410h] [ebp-50h]
  int v49; // [esp+438h] [ebp-28h]
  int v50; // [esp+440h] [ebp-20h]
  _DWORD v51[4]; // [esp+44Ch] [ebp-14h] BYREF

  v29 = a2;
  v26.x = 0;
  v26.y = 0;
  v25 = a1;
  memset(v33, 0, 0x144u);
  memset(v34, 0, 0x144u);
  v3 = *(_DWORD *)(a1 + 68);
  v4 = (int *)(a1 + 64);
  if ( v3 )
  {
    if ( (v29 & 4) != 0 )
    {
      vSpComputeNoPresentRegion(v20, (int)v21);
      v3 = v4[1];
    }
    while ( 1 )
    {
      if ( !v3 )
        return;
      if ( *(_DWORD *)(v3 + 40) )
        break;
LABEL_20:
      v3 = *(_DWORD *)(v3 + 16);
    }
    UserVisrgnFromHwnd(0);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, (HRGN)v4[164], 0);
    if ( !v23[0] || !v28[0] || !RGNOBJ::bCopy((RGNOBJ *)v28, (struct RGNOBJ *)v23) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v28);
LABEL_18:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
      if ( v28[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v28);
      goto LABEL_20;
    }
    v26.x = -*(_DWORD *)(v25 + 1836);
    v26.y = -*(_DWORD *)(v25 + 1840);
    RGNOBJ::bOffset((RGNOBJ *)v28, &v26);
    v27 = (struct REGION *)v28[0];
    v5 = *(struct REGION **)(v3 + 132);
    v6 = 1;
    v31 = 1;
    v32 = (int)v5;
    if ( v5 )
    {
      v7 = *(_DWORD *)(v3 + 80);
      v47 = 0;
      v48 = 0;
      v50 = 0;
      v46 = 0;
      v39 = 0;
      v40 = 0;
      v42 = 0;
      v38 = 0;
      v8 = *(_DWORD *)(v3 + 68) - *(_DWORD *)(v3 + 60);
      v49 = 1;
      v41 = 1;
      v9 = *(_DWORD *)(v3 + 76);
      v51[2] = v9 + v8;
      v10 = *(_DWORD *)(v3 + 72) - *(_DWORD *)(v3 + 64);
      v51[0] = v9;
      v51[3] = v7 + v10;
      v51[1] = v7;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v43, (struct REGION *)v32, (struct ERECTL *)v51, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v35, v27, (struct ERECTL *)v51, 0);
      ERECTL::bEmpty((ERECTL *)v44);
      v11 = ERECTL::bEmpty((ERECTL *)v36);
      if ( v12 == v11 )
      {
        if ( !v45 && !v37 )
          goto LABEL_12;
        v6 = 0;
        if ( v45 != v37 )
          goto LABEL_12;
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)v43, 0, 0, 4u, 0x64u);
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)v35, 0, 0, 4u, 0x64u);
        v14 = 1;
        v15 = 1;
        v32 = 1;
        v30 = 1;
        while ( 1 )
        {
          v16 = 0;
          v34[0] = 0;
          v33[0] = 0;
          if ( v14 )
          {
            v17 = (struct REGION *)XCLIPOBJ::bEnum((XCLIPOBJ *)v43, 0x144u, v33, 0);
            v16 = v33[0];
            v15 = v30;
            v32 = (int)v17;
          }
          if ( v15 )
          {
            v15 = XCLIPOBJ::bEnum((XCLIPOBJ *)v35, 0x144u, v34, 0);
            v30 = v15;
          }
          if ( v16 != v34[0] )
            break;
          v18 = 0;
          if ( v16 )
          {
            v19 = 0;
            while ( v34[v19 + 1] == v33[v19 + 1]
                 && v34[v19 + 2] == v33[v19 + 2]
                 && v34[v19 + 3] == v33[v19 + 3]
                 && v34[v19 + 4] == v33[v19 + 4] )
            {
              ++v18;
              v19 += 4;
              if ( v18 >= v16 )
              {
                v15 = v30;
                goto LABEL_42;
              }
            }
            v6 = 0;
            v14 = 0;
            v15 = 0;
            v31 = 0;
            v32 = 0;
            v30 = 0;
          }
          else
          {
LABEL_42:
            v14 = v32;
            v6 = v31;
          }
          if ( !v14 && !v15 )
            goto LABEL_12;
        }
      }
    }
    v6 = 0;
LABEL_12:
    v31 = *(_DWORD *)(v3 + 132);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
    v13 = v27;
    *(_DWORD *)(v3 + 132) = v27;
    *((_DWORD *)v13 + 5) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
    v29 = *v4;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v29);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v22, (struct PDEVOBJ *)&v29);
    *(_DWORD *)v3 &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)v28, (struct _RECTL *)(v4 + 5)) != 2 )
      *(_DWORD *)v3 |= 1u;
    bSpUpdatePosition(0, 0, (int)v20, (int)v21);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)(v3 + 44), (struct _RECTL *)v20, v21);
    if ( !v6 )
    {
      if ( v4[161] )
        vSpUpdateLockedScreenAreas(
          (struct _SPRITESTATE *)(v3 + 44),
          0,
          (struct _RECTL *)1,
          (struct _CLIPOBJ *)v20,
          (int)v21);
      vSpRedrawSprite(v20);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v22);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
    goto LABEL_18;
  }
}
