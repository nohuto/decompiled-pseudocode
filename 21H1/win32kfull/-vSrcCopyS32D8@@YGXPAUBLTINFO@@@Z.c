/*
 * XREFs of ?vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x23064A
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vSrcCopyS32D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  unsigned int v2; // edi
  int v3; // ecx
  unsigned int *v4; // ebx
  unsigned int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned __int8 *Xlate555; // ecx
  int *i; // eax
  unsigned __int8 *v10; // edi
  unsigned int *v11; // esi
  unsigned __int8 v12; // al
  unsigned int *v13; // ebx
  unsigned __int8 (__stdcall *v14)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int); // edi
  unsigned __int8 j; // al
  int v16; // edi
  int v17; // esi
  unsigned __int8 v18; // al
  bool v19; // zf
  unsigned int *v20; // ebx
  int *v21; // esi
  unsigned int v22; // [esp+Ch] [ebp-30h]
  int v23; // [esp+10h] [ebp-2Ch]
  unsigned int *v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+14h] [ebp-28h]
  int v26; // [esp+14h] [ebp-28h]
  int v27; // [esp+18h] [ebp-24h]
  int v28; // [esp+1Ch] [ebp-20h]
  int v29; // [esp+20h] [ebp-1Ch]
  unsigned int *v30; // [esp+24h] [ebp-18h]
  int *v31; // [esp+28h] [ebp-14h]
  unsigned int *v32; // [esp+2Ch] [ebp-10h]
  struct _XLATEOBJ *v33; // [esp+30h] [ebp-Ch]
  unsigned __int8 (__stdcall *v34)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int); // [esp+34h] [ebp-8h]
  unsigned __int8 *v35; // [esp+38h] [ebp-4h]

  v1 = a1;
  v34 = XLATEOBJ_ulIndexToPalSurf;
  v2 = *((_DWORD *)a1 + 4);
  v28 = *((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9);
  v23 = *((_DWORD *)a1 + 5);
  v3 = *(_DWORD *)a1;
  v4 = (unsigned int *)(-(*((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11)) & 3);
  v27 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 11);
  v33 = *(struct _XLATEOBJ **)a1;
  v30 = v4;
  if ( (unsigned int)v4 > v2 )
  {
    v4 = (unsigned int *)*((_DWORD *)a1 + 4);
    v30 = v4;
  }
  v5 = v2 - (_DWORD)v4;
  v6 = (v2 - (_DWORD)v4) & 3;
  v22 = v5 >> 2;
  v29 = v6;
  v7 = *(_DWORD *)(*(_DWORD *)(v3 + 36) + 16);
  if ( (v7 & 4) != 0 )
  {
    v34 = XLATEOBJ_RGB32ToPalSurf;
  }
  else if ( (v7 & 8) != 0 )
  {
    v34 = XLATEOBJ_BGR32ToPalSurf;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v3, v4);
  v35 = Xlate555;
  if ( Xlate555 )
  {
    for ( i = (int *)v27; ; v27 = (int)i )
    {
      v31 = i;
      v32 = (unsigned int *)v28;
      v24 = v4;
      if ( v4 )
      {
        v10 = (unsigned __int8 *)i;
        v11 = (unsigned int *)v28;
        do
        {
          v12 = v34(v33, Xlate555, *v11);
          Xlate555 = v35;
          ++v11;
          *v10++ = v12;
          v24 = (unsigned int *)((char *)v24 - 1);
        }
        while ( v24 );
        v4 = v30;
        v31 = (int *)v10;
        v6 = v29;
        v32 = v11;
        v1 = a1;
      }
      v25 = v22;
      if ( v22 )
      {
        v13 = v32;
        v14 = v34;
        for ( j = v34(v33, Xlate555, v32[3]); ; j = v34(v33, v35, v13[3]) )
        {
          v16 = ((j << 8) | v14(v33, v35, v13[2])) << 8;
          v17 = v16 | v34(v33, v35, v13[1]);
          v14 = v34;
          v18 = v34(v33, v35, *v13);
          v13 += 4;
          *v31 = (v17 << 8) | v18;
          v19 = v25-- == 1;
          ++v31;
          if ( v19 )
            break;
        }
        v1 = a1;
        v6 = v29;
        v32 = v13;
        v4 = v30;
      }
      v26 = v6;
      if ( v6 )
      {
        v20 = v32;
        v21 = v31;
        do
        {
          *(_BYTE *)v21 = v34(v33, v35, *v20++);
          v21 = (int *)((char *)v21 + 1);
          --v26;
        }
        while ( v26 );
        v4 = v30;
        v1 = a1;
        v6 = v29;
      }
      if ( !--v23 )
        break;
      Xlate555 = v35;
      v28 += *((_DWORD *)v1 + 7);
      i = (int *)(*((_DWORD *)v1 + 8) + v27);
    }
  }
}
