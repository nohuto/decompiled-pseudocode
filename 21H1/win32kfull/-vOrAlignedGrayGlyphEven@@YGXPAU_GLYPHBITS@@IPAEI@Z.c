/*
 * XREFs of ?vOrAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0xA3BA8
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __stdcall vOrAlignedGrayGlyphEven(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 *v4; // ecx
  BYTE *aj; // edi
  unsigned int v6; // esi
  unsigned __int8 *v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned __int8 *v10; // edx
  unsigned int v11; // [esp+8h] [ebp-8h]
  unsigned __int8 *v12; // [esp+Ch] [ebp-4h]

  v4 = a3;
  aj = a1->aj;
  v6 = (unsigned int)(a1->sizlBitmap.cx + 1) >> 1;
  v11 = v6;
  v7 = &a3[a4 * a1->sizlBitmap.cy];
  v12 = v7;
  if ( a3 < v7 )
  {
    do
    {
      v8 = &v4[v6] >= v4 ? v6 : 0;
      if ( v8 )
      {
        v9 = 0;
        v10 = v4;
        do
          *v10++ |= aj[v9++];
        while ( v9 < v8 );
        v7 = v12;
        v6 = v11;
      }
      v4 += a4;
      aj += a2;
    }
    while ( v4 < v7 );
  }
}
