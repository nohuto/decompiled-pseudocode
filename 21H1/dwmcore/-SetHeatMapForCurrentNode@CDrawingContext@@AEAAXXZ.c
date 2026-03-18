/*
 * XREFs of ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18017C954
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18017CA68 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 */

void __fastcall CDrawingContext::SetHeatMapForCurrentNode(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  int v2; // edx
  struct CComposition *v3; // r8
  struct CVisual *v4; // rbx
  char v5; // cl
  char v6; // al
  int v7; // eax
  char v8; // al
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 24));
  v2 = g_HeatMaps_Type;
  v3 = g_pComposition;
  v4 = CurrentVisual;
  v5 = *((_BYTE *)CurrentVisual + 93);
  if ( (v5 & 0x40) != 0 && g_HeatMaps_Type != 1 )
  {
    --*((_DWORD *)g_pComposition + 269);
    *((_BYTE *)CurrentVisual + 93) &= ~0x40u;
    v5 = *((_BYTE *)CurrentVisual + 93);
  }
  v6 = v5;
  if ( (v5 & 0x20) != 0 && v2 != 2 )
  {
    v6 = v5 & 0xDF;
    g_HeatMaps_OverdrawContentKinds = 0;
    *((_BYTE *)v4 + 93) = v5 & 0xDF;
  }
  if ( (v6 & 8) != 0 && v2 != 3 )
  {
    *((_BYTE *)v4 + 93) = v6 & 0xE7;
    --*((_DWORD *)v3 + 268);
  }
  if ( v2 == 1 )
  {
    if ( (*((_BYTE *)v4 + 93) & 0x40) != 0 )
      return;
    ++*((_DWORD *)v3 + 269);
    *((_BYTE *)v4 + 93) |= 0x40u;
    v10 = 0;
    v9 = _xmm;
    CVisual::SetHeatMapProperties(v4, &v9);
    v2 = g_HeatMaps_Type;
    v3 = g_pComposition;
  }
  if ( v2 == 2 )
  {
    v7 = g_HeatMaps_OverdrawContentKinds;
    *((_BYTE *)v4 + 93) |= 0x20u;
    v9 = _xmm;
    v10 = v7;
    CVisual::SetHeatMapProperties(v4, &v9);
    v2 = g_HeatMaps_Type;
    v3 = g_pComposition;
  }
  if ( v2 == 3 )
  {
    v8 = *((_BYTE *)v4 + 93);
    if ( (v8 & 0x10) == 0 )
    {
      *((_BYTE *)v4 + 93) = v8 | 0x18;
      ++*((_DWORD *)v3 + 268);
    }
  }
}
