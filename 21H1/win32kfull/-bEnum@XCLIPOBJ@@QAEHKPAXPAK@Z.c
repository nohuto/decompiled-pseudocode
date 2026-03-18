/*
 * XREFs of ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z @ 0x12266 (-GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z @ 0x3046E (-vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     ?vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z @ 0x55928 (-vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z @ 0x5FE10 (-GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z.c)
 *     _CLIPOBJ_bEnum@12 @ 0x8E3F8 (_CLIPOBJ_bEnum@12.c)
 *     ?BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x94E94 (-BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vDIBPatBlt@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0xA8080 (-vDIBPatBlt@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     ?GreTransparentBltPS@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3K@Z @ 0x1F17C8 (-GreTransparentBltPS@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3K@Z.c)
 *     _NtGdiCLIPOBJ_bEnum@12 @ 0x21721F (_NtGdiCLIPOBJ_bEnum@12.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 *     ?vDIBPatBltSrccopy8x8@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_PATBLTFRAME@@H@Z@Z @ 0x22C848 (-vDIBPatBltSrccopy8x8@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_.c)
 *     ?vDIBnPatBltSrccopy6x6@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_PATBLTFRAME@@H@Z@Z @ 0x22CB54 (-vDIBnPatBltSrccopy6x6@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU.c)
 * Callees:
 *     <none>
 */

int __thiscall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  int *v5; // edx
  int v6; // eax
  _DWORD *v7; // edx
  unsigned int v8; // ebx
  int *v9; // edx
  int v10; // edx
  int v11; // esi
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // edx
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // esi
  int v25; // edi
  int v26; // ebx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // [esp+Ch] [ebp-10h]
  int v30; // [esp+10h] [ebp-Ch]
  unsigned int v31; // [esp+10h] [ebp-Ch]
  int v32; // [esp+14h] [ebp-8h]
  _DWORD *v33; // [esp+18h] [ebp-4h]
  unsigned int v34; // [esp+24h] [ebp+8h]
  unsigned int v35; // [esp+24h] [ebp+8h]

  v33 = a3 + 4;
  if ( a2 >= 0x14 )
  {
    v4 = a2 - 4;
    v34 = a2 - 4;
    if ( a4 )
      *a4 = 4;
    *(_DWORD *)a3 = 0;
    v5 = (int *)*((_DWORD *)this + 17);
    if ( !*((_DWORD *)this + 28) )
    {
      v32 = v5[1];
      v30 = v5[2];
      if ( !*((_DWORD *)this + 18) )
        return 0;
      while ( 1 )
      {
        v6 = *((_DWORD *)this + 20);
        v7 = (_DWORD *)*((_DWORD *)this + 17);
        if ( v6 == *((_DWORD *)this + 22) )
        {
          v8 = *((_DWORD *)this + 23);
          if ( v8 >= 2 )
          {
            if ( v7[1] <= *((_DWORD *)this + 14) )
            {
LABEL_29:
              *((_DWORD *)this + 18) = 0;
              return 0;
            }
            v9 = &v7[-*(v7 - 1) - 4];
          }
          else
          {
            if ( v7[2] >= *((_DWORD *)this + 16) )
              goto LABEL_29;
            v9 = &v7[*v7 + 4];
          }
          *((_DWORD *)this + 17) = v9;
          --*((_DWORD *)this + 18);
          v32 = v9[1];
          v30 = v9[2];
          if ( (v8 & 1) != 0 )
          {
            v21 = *v9 - 2;
            *((_DWORD *)this + 22) = -2;
            *((_DWORD *)this + 20) = v21;
            if ( v21 != -2 )
            {
              v22 = *((_DWORD *)this + 15);
              v23 = (_DWORD *)(*((_DWORD *)this + 17) + 4 * v21 + 12);
              do
              {
                if ( *v23 < v22 )
                  break;
                v21 -= 2;
                v23 -= 2;
                *((_DWORD *)this + 20) = v21;
              }
              while ( v21 != -2 );
            }
          }
          else
          {
            *((_DWORD *)this + 20) = 0;
            v10 = *v9;
            *((_DWORD *)this + 22) = v10;
            if ( v10 )
            {
              v11 = 0;
              v12 = *((_DWORD *)this + 13);
              v13 = (_DWORD *)(*((_DWORD *)this + 17) + 16);
              do
              {
                if ( *v13 > v12 )
                  break;
                v11 += 2;
                v13 += 2;
                *((_DWORD *)this + 20) = v11;
              }
              while ( v11 != v10 );
            }
          }
          v4 = v34;
        }
        else
        {
          v14 = v7[v6 + 3];
          v15 = v7[v6 + 4];
          v16 = *((_DWORD *)this + 13);
          if ( v16 <= v14 )
            v16 = v14;
          *v33 = v16;
          v17 = *((_DWORD *)this + 15);
          if ( v17 >= v15 )
            v17 = v15;
          v33[2] = v17;
          if ( v16 >= v17 )
          {
            *((_DWORD *)this + 20) = *((_DWORD *)this + 22);
          }
          else
          {
            v18 = *((_DWORD *)this + 14);
            if ( v18 <= v32 )
              v18 = v32;
            v33[1] = v18;
            v19 = *((_DWORD *)this + 16);
            if ( v19 >= v30 )
              v19 = v30;
            v33[3] = v19;
            *((_DWORD *)this + 20) += *((_DWORD *)this + 21);
            v4 -= 16;
            v33 += 4;
            v34 = v4;
            if ( a4 )
              *a4 += 16;
            ++*(_DWORD *)a3;
            if ( v4 < 0x10 )
              return 1;
          }
        }
        if ( !*((_DWORD *)this + 18) )
          return 0;
      }
    }
    v24 = *((_DWORD *)this + 20);
    v25 = *((_DWORD *)this + 22);
    v31 = *((_DWORD *)this + 23);
    v35 = v4 >> 4;
    v29 = *((_DWORD *)this + 21);
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *((_DWORD *)this + 18);
        if ( !v26 )
          return 0;
        if ( v24 == v25 )
          break;
LABEL_54:
        *v33 = v5[v24 + 3];
        v27 = v5[v24 + 4];
        v24 += v29;
        v33[2] = v27;
        v33[1] = v5[1];
        v33[3] = v5[2];
        v33 += 4;
        ++*(_DWORD *)a3;
        v28 = --v35;
        if ( a4 )
          *a4 += 16;
        if ( !v28 )
        {
          *((_DWORD *)this + 20) = v24;
          *((_DWORD *)this + 22) = v25;
          *((_DWORD *)this + 17) = v5;
          return 1;
        }
      }
      if ( v31 >= 2 )
        v5 = &v5[-*(v5 - 1) - 4];
      else
        v5 += *v5 + 4;
      *((_DWORD *)this + 18) = v26 - 1;
      if ( *v5 )
      {
        if ( (v31 & 1) != 0 )
        {
          v24 = *v5 - 2;
          v25 = -2;
        }
        else
        {
          v24 = 0;
          v25 = *v5;
        }
        goto LABEL_54;
      }
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0;
}
