/*
 * XREFs of ?TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@PAGPAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x17A2A5
 * Callers:
 *     ?BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1797A4 (-BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagREC.c)
 * Callees:
 *     _DCELayerHitTest@12 @ 0x25668 (_DCELayerHitTest@12.c)
 *     _LayerHitTest@12 @ 0x17B8DE (_LayerHitTest@12.c)
 *     _TouchTargetingRankForRectDeep@32 @ 0x1B944B (_TouchTargetingRankForRectDeep@32.c)
 */

int __fastcall TouchTargetingLayerHitTest(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 *a5,
        int *a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // edi
  int v13; // esi
  HDEV v16; // [esp-8h] [ebp-24h]
  HDEV v17; // [esp-8h] [ebp-24h]
  HWND v18; // [esp-4h] [ebp-20h]
  HWND v19; // [esp-4h] [ebp-20h]
  int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h]
  int v22; // [esp+18h] [ebp-4h]
  unsigned __int16 v23; // [esp+34h] [ebp+18h]

  v22 = a2;
  v18 = (HWND)(a9 + a6[1]);
  v16 = (HDEV)(a8 + *a6);
  if ( a2 )
    v10 = DCELayerHitTest(a1, v16, v18);
  else
    v10 = LayerHitTest(v16, v18);
  if ( !v10 )
  {
    v20 = *a6;
    v11 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 52);
    v21 = a6[1];
    v23 = TouchTargetingRankForRectDeep(a3, a4, &v20, a7, *v11, v11[1], v11[2], v11[3]);
    if ( v23 > 0xFFDu )
      return 0;
    v12 = v21;
    v13 = v20;
    v19 = (HWND)(v21 + a9);
    v17 = (HDEV)(v20 + a8);
    if ( !(v22 ? DCELayerHitTest(a1, v17, v19) : LayerHitTest(v17, v19)) )
      return 0;
    *a6 = v13;
    a6[1] = v12;
    *a5 = v23;
  }
  return 1;
}
