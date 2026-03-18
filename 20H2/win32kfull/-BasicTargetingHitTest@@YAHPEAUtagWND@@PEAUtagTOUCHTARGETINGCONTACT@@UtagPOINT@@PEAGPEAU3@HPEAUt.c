/*
 * XREFs of ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C0214640
 * Callers:
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0214864 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     xxxTouchTargetWindow @ 0x1C0217D38 (xxxTouchTargetWindow.c)
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C021532C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     TouchTargetingRankForRect @ 0x1C025F79C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRegion @ 0x1C025FE50 (TouchTargetingRankForRegion.c)
 */

_BOOL8 __fastcall BasicTargetingHitTest(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // r10
  int v15; // r14d
  __int64 v16; // rax
  __int128 v17; // xmm6
  int v18; // edx
  int v19; // r12d
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  unsigned __int16 *v25; // rdx
  __int64 v26; // rcx
  __int128 v29; // [rsp+58h] [rbp-39h] BYREF
  __int128 v30; // [rsp+68h] [rbp-29h] BYREF
  int v32; // [rsp+110h] [rbp+7Fh]

  v11 = 0LL;
  if ( *(_DWORD *)(a2 + 176) && (!a7 || PtInRect(a7, a3)) )
    v15 = v11;
  else
    v15 = 1;
  v16 = *(_QWORD *)(a1 + 40);
  *a4 = v11;
  v17 = *(_OWORD *)(v16 + 88);
  *(_QWORD *)a5 = v11;
  v29 = v17;
  if ( a11 != (_DWORD)v11 )
    return 1LL;
  v18 = a10;
  v19 = v11;
  if ( (_WORD)a10 != 3 )
  {
    v18 = a8;
    v19 = a9;
  }
  v32 = v18;
  if ( v15 )
    goto LABEL_12;
  if ( !PtInRect(&v29, a3) )
  {
    v18 = v32;
LABEL_12:
    if ( v19 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
      return 0LL;
    v29 = v17;
    v30 = v17;
    v20 = TouchTargetingRankForRect(&v30, &v29, a2, a7, a5, v18);
    *a4 = v20;
    if ( v20 > 0xFFDu )
      return 0LL;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL);
  if ( v21
    && (v15
     || !(unsigned int)GrePtInRegion(
                         v21,
                         (unsigned int)(*(_DWORD *)a5 + a3),
                         (unsigned int)(*(_DWORD *)(a5 + 4) + HIDWORD(a3)))) )
  {
    if ( v19 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
      return 0LL;
    v22 = *(_QWORD *)(a1 + 40);
    v23 = *(_QWORD *)(v22 + 168);
    v30 = *(_OWORD *)(v22 + 88);
    v24 = TouchTargetingRankForRegion(v23, (unsigned int)&v30, a2, a5, v32);
    v25 = a4;
    *a4 = v24;
    if ( v24 > 0xFFDu )
      return 0LL;
  }
  else
  {
    v25 = a4;
  }
  v26 = *(_QWORD *)(a1 + 40);
  return (*(_BYTE *)(v26 + 26) & 8) == 0
      || a6 && (*(_DWORD *)(v26 + 232) & 0x20) != 0
      || (unsigned int)TouchTargetingLayerHitTest(a1, a3, a6, a2, a7, v25, a5, a8);
}
