/*
 * XREFs of ?vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z @ 0x1E0F06
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QAE@XZ @ 0xF5B61 (--0RGNMEMOBJTMP@@QAE@XZ.c)
 *     ??1RGNMEMOBJTMP@@QAE@XZ @ 0xF5B78 (--1RGNMEMOBJTMP@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?vSpAddOpaqueRects@@YGXJJJJJJAAVRGNMEMOBJTMP@@0AAVRGNOBJ@@@Z @ 0x1E0014 (-vSpAddOpaqueRects@@YGXJJJJJJAAVRGNMEMOBJTMP@@0AAVRGNOBJ@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAE@Z @ 0x1E11DA (-vSpDeletePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAE@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAPAE@Z @ 0x1E2C63 (-vSpUpdatePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAPAE@Z.c)
 */

void __fastcall vSpComputeClipEffective(int a1, struct RGNOBJ *a2)
{
  int v4; // ecx
  char v5; // al
  LONG v6; // esi
  int *v7; // ecx
  LONG v8; // edx
  int v9; // edi
  struct RGNOBJ *v10; // esi
  struct _RECTL *v11; // [esp+0h] [ebp-90h]
  unsigned __int8 **v12; // [esp+4h] [ebp-8Ch]
  struct _SURFOBJ v13; // [esp+10h] [ebp-80h] BYREF
  int v14; // [esp+44h] [ebp-4Ch]
  int v15; // [esp+48h] [ebp-48h]
  struct RGNOBJ *v16; // [esp+4Ch] [ebp-44h]
  unsigned int v17[3]; // [esp+50h] [ebp-40h] BYREF
  int v18; // [esp+5Ch] [ebp-34h]
  int v19; // [esp+60h] [ebp-30h]
  int i; // [esp+64h] [ebp-2Ch]
  int v21; // [esp+68h] [ebp-28h]
  int v22; // [esp+6Ch] [ebp-24h]
  char v23; // [esp+72h] [ebp-1Eh]
  char v24; // [esp+73h] [ebp-1Dh]
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  v16 = a2;
  v14 = a1;
  v13.sizlBitmap.cx = 0;
  if ( !*(_DWORD *)a2 )
    goto LABEL_43;
  if ( *(_DWORD *)(a1 + 4) != 2 )
    goto LABEL_43;
  if ( (*(_BYTE *)a1 & 8) != 0 )
    goto LABEL_43;
  v4 = *(_DWORD *)(a1 + 88);
  if ( !v4
    || *(_DWORD *)(v4 + 44) != 6
    || *(_WORD *)(v4 + 48)
    || !SURFREFVIEW::bMap((SURFREFVIEW *)&v13.sizlBitmap, *(struct _SURFOBJ **)(a1 + 88)) )
  {
    goto LABEL_43;
  }
  if ( *(_DWORD *)(a1 + 164) != 3 || *(_BYTE *)(a1 + 171) )
  {
    v24 = 0;
    v5 = 1;
  }
  else
  {
    v5 = 1;
    v24 = 1;
  }
  if ( (*(_BYTE *)(a1 + 143) & 1) == 0 || *(_BYTE *)(a1 + 142) != 0xFF )
    v5 = 0;
  if ( v24 || v5 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13.cjBits);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13.iUniq);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13.pvScan0);
    if ( v13.cjBits && v13.iUniq && v13.pvScan0 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v13.pvScan0);
      RGNOBJ::vSet((RGNOBJ *)&v13.iUniq);
      RGNOBJ::vSet((RGNOBJ *)&v13.cjBits);
      v17[0] = 0;
      if ( v24 )
      {
        v13.dhsurf = *(DHSURF *)(a1 + 60);
        v13.hsurf = *(HSURF *)(a1 + 64);
        v13.dhpdev = *(DHPDEV *)(a1 + 68);
        v13.hdev = *(HDEV *)(a1 + 72);
        vSpUpdatePerPixelAlphaFromColorKey(&v13, (unsigned int)v17, v11, v12);
      }
      v6 = 0;
      v7 = *(int **)(a1 + 88);
      v18 = v7[4];
      v15 = v7[5];
      v22 = -1;
      v8 = -1;
      v21 = -1;
      *(_DWORD *)&v13.iType = v7[9];
      v9 = 0;
      v19 = v7[8];
LABEL_25:
      v17[1] = v9;
      if ( v9 < v15 )
      {
        v6 = 0;
        for ( i = v19; ; i += 4 )
        {
          v17[2] = v6;
          if ( v6 >= v18 )
          {
            ++v9;
            v19 += *(_DWORD *)&v13.iType;
            goto LABEL_25;
          }
          v23 = -1;
          ms_exc.registration.TryLevel = 0;
          v23 = *(_BYTE *)(i + 3);
          ms_exc.registration.TryLevel = -2;
          if ( v23 )
          {
            if ( v8 != -1 )
              goto LABEL_34;
            v8 = v6;
            v22 = v9;
          }
          else
          {
            if ( v8 == -1 )
              goto LABEL_34;
            vSpAddOpaqueRects(
              v9,
              v6,
              v8,
              v22,
              v18,
              (int)v7,
              (RGNOBJ *)&v13.iUniq,
              (RGNOBJ *)&v13.cjBits,
              (struct RGNMEMOBJTMP *)&v13.pvScan0,
              (struct RGNMEMOBJTMP *)v11,
              (struct RGNOBJ *)v12);
            v8 = -1;
            v22 = -1;
          }
          v21 = v8;
LABEL_34:
          ++v6;
        }
      }
      if ( v8 != -1 )
        vSpAddOpaqueRects(
          v9,
          v6,
          v8,
          v22,
          v18,
          (int)v7,
          (RGNOBJ *)&v13.iUniq,
          (RGNOBJ *)&v13.cjBits,
          (struct RGNMEMOBJTMP *)&v13.pvScan0,
          (struct RGNMEMOBJTMP *)v11,
          (struct RGNOBJ *)v12);
      if ( v24 )
      {
        v13.dhsurf = *(DHSURF *)(a1 + 60);
        v13.hsurf = *(HSURF *)(a1 + 64);
        v13.dhpdev = *(DHPDEV *)(a1 + 68);
        v13.hdev = *(HDEV *)(a1 + 72);
        vSpDeletePerPixelAlphaFromColorKey(&v13, v17[0], v11, (unsigned __int8 *)v12);
      }
      v10 = v16;
      if ( RGNOBJ::bMerge((RGNOBJ *)&v13.iUniq, (struct RGNOBJ *)&v13.pvScan0, v16, 8u) )
        RGNOBJ::vSwap((RGNOBJ *)&v13.iUniq, v10);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13.pvScan0);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13.iUniq);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13.cjBits);
    goto LABEL_43;
  }
  if ( !*(_BYTE *)(a1 + 142) )
    RGNOBJ::vSet(a2);
LABEL_43:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)&v13.sizlBitmap);
}
