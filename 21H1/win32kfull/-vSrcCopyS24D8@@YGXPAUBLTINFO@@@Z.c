/*
 * XREFs of ?vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x23043F
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     ?XLATEOBJ_RGB32ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z @ 0x225A5C (-XLATEOBJ_RGB32ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vSrcCopyS24D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  unsigned int v2; // ebx
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int *v5; // ebx
  unsigned __int8 *Xlate555; // edx
  unsigned __int8 *i; // eax
  int v8; // ecx
  unsigned __int8 *v9; // esi
  unsigned __int8 *v10; // ebx
  unsigned __int8 v11; // al
  unsigned __int8 *v12; // esi
  int *v13; // edi
  unsigned __int8 v14; // bh
  unsigned __int8 v15; // bl
  unsigned __int8 v16; // al
  unsigned __int8 *v17; // edi
  unsigned __int8 *v18; // esi
  unsigned int v19; // [esp+Ch] [ebp-30h]
  int v20; // [esp+10h] [ebp-2Ch]
  unsigned int v21; // [esp+14h] [ebp-28h]
  unsigned int v22; // [esp+14h] [ebp-28h]
  unsigned int *v23; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h]
  int v25; // [esp+1Ch] [ebp-20h]
  unsigned int *v26; // [esp+20h] [ebp-1Ch]
  unsigned int v27; // [esp+24h] [ebp-18h]
  struct _XLATEOBJ *v28; // [esp+28h] [ebp-14h]
  unsigned __int8 *v29; // [esp+2Ch] [ebp-10h]
  unsigned __int8 *v30; // [esp+30h] [ebp-Ch]
  unsigned __int8 *v31; // [esp+30h] [ebp-Ch]
  unsigned __int8 *v32; // [esp+34h] [ebp-8h]
  unsigned __int8 v33; // [esp+3Bh] [ebp-1h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 4);
  v20 = *((_DWORD *)a1 + 5);
  v28 = *(struct _XLATEOBJ **)a1;
  v25 = *((_DWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 9);
  v24 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v3 = -v24 & 3;
  v27 = v3;
  if ( v3 > v2 )
  {
    v3 = *((_DWORD *)a1 + 4);
    v27 = v3;
  }
  v4 = v2 - v3;
  v5 = (unsigned int *)((v2 - v3) & 3);
  v19 = v4 >> 2;
  v26 = v5;
  Xlate555 = XLATEOBJ_pGetXlate555(*(_DWORD *)a1, v5);
  v32 = Xlate555;
  if ( Xlate555 )
  {
    for ( i = (unsigned __int8 *)v24; ; v24 = (int)i )
    {
      v8 = v25;
      v29 = i;
      v30 = (unsigned __int8 *)v25;
      v21 = v3;
      if ( v3 )
      {
        v9 = (unsigned __int8 *)v25;
        v10 = i;
        do
        {
          v11 = XLATEOBJ_RGB32ToPalSurf(v28, Xlate555, v9[2] | ((v9[1] | (*v9 << 8)) << 8));
          Xlate555 = v32;
          v9 += 3;
          *v10++ = v11;
          --v21;
        }
        while ( v21 );
        v3 = v27;
        v30 = v9;
        v1 = a1;
        v8 = (int)v30;
        v29 = v10;
        v5 = v26;
      }
      v22 = v19;
      if ( v19 )
      {
        v12 = v30;
        v13 = (int *)v29;
        while ( 1 )
        {
          v33 = XLATEOBJ_RGB32ToPalSurf(v28, Xlate555, v12[2] | ((v12[1] | (*v12 << 8)) << 8));
          v14 = XLATEOBJ_RGB32ToPalSurf(v28, v32, v12[5] | ((v12[4] | (v12[3] << 8)) << 8));
          v15 = XLATEOBJ_RGB32ToPalSurf(v28, v32, v12[8] | ((v12[7] | (v12[6] << 8)) << 8));
          v16 = XLATEOBJ_RGB32ToPalSurf(v28, v32, v12[11] | ((v12[10] | (v12[9] << 8)) << 8));
          v12 += 12;
          *v13++ = v33 | ((v14 | ((v15 | (v16 << 8)) << 8)) << 8);
          if ( !--v22 )
            break;
          Xlate555 = v32;
        }
        v5 = v26;
        v31 = v12;
        v1 = a1;
        v8 = (int)v31;
        v29 = (unsigned __int8 *)v13;
        v3 = v27;
      }
      v23 = v5;
      if ( v5 )
      {
        v17 = v29;
        v18 = (unsigned __int8 *)(v8 + 2);
        do
        {
          *v17 = XLATEOBJ_RGB32ToPalSurf(v28, v32, *v18 | ((*(v18 - 1) | (*(v18 - 2) << 8)) << 8));
          v18 += 3;
          ++v17;
          v23 = (unsigned int *)((char *)v23 - 1);
        }
        while ( v23 );
        v1 = a1;
        v3 = v27;
        v5 = v26;
      }
      if ( !--v20 )
        break;
      Xlate555 = v32;
      v25 += *((_DWORD *)v1 + 7);
      i = (unsigned __int8 *)(*((_DWORD *)v1 + 8) + v24);
    }
  }
}
