/*
 * XREFs of ?BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1797A4
 * Callers:
 *     ?BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@3PAIPAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x17996A (-BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT.c)
 *     _xxxTouchTargetWindow@28 @ 0x17C92C (_xxxTouchTargetWindow@28.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@PAGPAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x17A2A5 (-TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@.c)
 *     _TouchTargetingRankForRect@48 @ 0x1B902D (_TouchTargetingRankForRect@48.c)
 *     _TouchTargetingRankForRegion@32 @ 0x1B95CF (_TouchTargetingRankForRegion@32.c)
 */

int __fastcall BasicTargetingHitTest(
        int a1,
        struct tagPOINT *a2,
        unsigned __int16 *a3,
        _DWORD *a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  BOOL v17; // eax
  bool v18; // zf
  int *v19; // esi
  _DWORD *v20; // edi
  unsigned __int16 v21; // ax
  int v22; // eax
  int v23; // eax
  struct tagPOINT *v24; // ebx
  unsigned __int16 v25; // ax
  unsigned __int16 *v26; // ecx
  int v27; // eax
  int v29; // [esp+Ch] [ebp-2Ch] BYREF
  int v30; // [esp+10h] [ebp-28h]
  int v31; // [esp+14h] [ebp-24h]
  int v32; // [esp+18h] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-1Ch]
  int v34; // [esp+20h] [ebp-18h]
  int v35; // [esp+24h] [ebp-14h]
  BOOL v36; // [esp+28h] [ebp-10h]
  struct tagPOINT *v37; // [esp+2Ch] [ebp-Ch]
  int v38; // [esp+30h] [ebp-8h]

  v12 = a11;
  v33 = a11;
  v14 = a1;
  v37 = a2;
  v15 = a12;
  v16 = 0;
  v38 = v14;
  v34 = a12;
  v36 = !a2[22].x || a6 && (v17 = PtInRect(a6, a11, a12), v15 = a12, v18 = !v17, v12 = a11, v18);
  v35 = a7;
  v19 = (int *)(*(_DWORD *)(v14 + 20) + 52);
  v29 = *v19++;
  v30 = *v19++;
  v31 = *v19;
  v32 = v19[1];
  *a3 = 0;
  v20 = a4;
  *a4 = 0;
  a4[1] = 0;
  if ( !a10 )
  {
    if ( (_WORD)a9 == 3 )
      v35 = a9;
    else
      v16 = a8;
    if ( v36 || !PtInRect(&v29, v12, v15) )
    {
      if ( v16 && (*(_BYTE *)(*(_DWORD *)(v14 + 20) + 22) & 4) == 0 )
        return 0;
      v20 = a4;
      v21 = TouchTargetingRankForRect(v37, (int)a4, v35, v29, v30, v31, v32, v29, v30, v31, v32);
      *a3 = v21;
      if ( v21 > 0xFFDu )
        return 0;
      v14 = v38;
    }
    v22 = *(_DWORD *)(*(_DWORD *)(v14 + 20) + 108);
    if ( v22 && (v36 || (v23 = GrePtInRegion(v22, *v20 + a11, v20[1] + a12), v14 = v38, !v23)) )
    {
      if ( v16 && (*(_BYTE *)(*(_DWORD *)(v14 + 20) + 22) & 4) == 0 )
        return 0;
      v24 = v37;
      v20 = a4;
      v25 = TouchTargetingRankForRegion(
              a4,
              v35,
              *(_DWORD *)(*(_DWORD *)(v14 + 20) + 52),
              *(_DWORD *)(*(_DWORD *)(v14 + 20) + 56),
              *(_DWORD *)(*(_DWORD *)(v14 + 20) + 60),
              *(_DWORD *)(*(_DWORD *)(v14 + 20) + 64));
      v26 = a3;
      *a3 = v25;
      if ( v25 > 0xFFDu )
        return 0;
      v14 = v38;
    }
    else
    {
      v26 = a3;
      v24 = v37;
    }
    v27 = *(_DWORD *)(v14 + 20);
    if ( (*(_BYTE *)(v27 + 18) & 8) != 0
      && (!a5 || (*(_BYTE *)(v27 + 144) & 0x20) == 0)
      && !TouchTargetingLayerHitTest(v38, v24, a6, v26, v20, a7, v33, v34) )
    {
      return 0;
    }
  }
  return 1;
}
