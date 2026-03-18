/*
 * XREFs of ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02161AC
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C02154C0 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     LayerHitTest @ 0x1C0006D34 (LayerHitTest.c)
 *     DCELayerHitTest @ 0x1C002D038 (DCELayerHitTest.c)
 *     TouchTargetingRankForRectDeep @ 0x1C026129C (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall TouchTargetingLayerHitTest(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        _DWORD *a7,
        int a8)
{
  int v9; // edi
  int v13; // eax
  BOOL v14; // eax
  unsigned __int16 v15; // r15
  __int64 v16; // rbx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+8Ch] [rbp+3Ch]
  __int64 v22; // [rsp+B0h] [rbp+60h]
  __int64 v23; // [rsp+B0h] [rbp+60h]

  v21 = HIDWORD(a2);
  v9 = a2;
  v13 = a7[1] + HIDWORD(a2);
  LODWORD(v22) = a2 + *a7;
  HIDWORD(v22) = v13;
  if ( a3 )
    v14 = DCELayerHitTest(a1, v22);
  else
    v14 = LayerHitTest(a1, v22);
  if ( !v14 )
  {
    v19 = *(_QWORD *)a7;
    v20 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
    v15 = TouchTargetingRankForRectDeep(&v20, a4, a5, &v19, a8);
    if ( v15 > 0xFFDu )
      return 0LL;
    v16 = v19;
    HIDWORD(v23) = HIDWORD(v19) + v21;
    LODWORD(v23) = v19 + v9;
    if ( !(a3 ? DCELayerHitTest(a1, v23) : LayerHitTest(a1, v23)) )
      return 0LL;
    *(_QWORD *)a7 = v16;
    *a6 = v15;
  }
  return 1LL;
}
