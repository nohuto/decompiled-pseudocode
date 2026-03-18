/*
 * XREFs of ?vSrcCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x232050
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

void __stdcall vSrcCopyS32D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  int v2; // edx
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  ULONG *v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // esi
  int v10; // [esp+Ch] [ebp-1Ch]
  XLATEOBJ *pxlo; // [esp+10h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 4);
  v10 = v2;
  v3 = *((_DWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 9);
  pxlo = *(XLATEOBJ **)a1;
  v4 = *((_DWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 11);
  v5 = *((_DWORD *)a1 + 5);
  v14 = v5;
  while ( 1 )
  {
    v12 = v4;
    v6 = (ULONG *)v3;
    v13 = v3;
    if ( v2 )
    {
      v7 = v4 - v3;
      v8 = v2;
      v9 = v7;
      do
      {
        *(ULONG *)((char *)v6 + v9) = XLATEOBJ_iXlate(pxlo, *v6);
        ++v6;
        --v8;
      }
      while ( v8 );
      v1 = a1;
      v3 = v13;
      v4 = v12;
      v5 = v14;
      v2 = v10;
    }
    v14 = --v5;
    if ( !v5 )
      break;
    v3 += *((_DWORD *)v1 + 7);
    v4 += *((_DWORD *)v1 + 8);
  }
}
